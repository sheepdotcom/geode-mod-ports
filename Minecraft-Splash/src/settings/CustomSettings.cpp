#include "CustomSettings.h"

#include "../layers/SplashesListPopup.h"

extern int splashIndex;
extern std::vector<std::vector<std::string>> default_splashes;

bool ArrayListValue::isDefaultValue() const {
    return this->m_splashArray == default_splashes;
}

void ArrayListValue::reset() {
    this->m_splashArray = default_splashes;
    markChanged();
}

SettingNodeV3* ArrayListValue::createNode(float width) {
    return ArrayListNode::create(std::static_pointer_cast<ArrayListValue>(shared_from_this()), width);
}

bool ArrayListNode::init(std::shared_ptr<ArrayListValue> setting, float width) {
    if (!SettingNodeV3::init(setting, width))
        return false;
    geode::cocos::handleTouchPriority(this);
    this->setValue(setting->getArray());
    this->setContentSize({ width, 40.f });
    auto ccmenu = CCMenu::create();
    ButtonSprite* spr;
    spr = ButtonSprite::create("Edit Splashes", "goldFont.fnt", Loader::get()->getLoadedMod("geode.loader")->getSettingValue<bool>("enable-geode-theme") ? "geode.loader/GE_button_05.png" : "GJ_button_01.png");
    auto btn = CCMenuItemSpriteExtra::create(
        spr, this, menu_selector(ArrayListNode::createPopup)
    );
    ccmenu->setPosition({width / 2, 20.f});
    btn->setScale(0.7f);
    btn->m_baseScale = 0.7f;
    ccmenu->addChild(btn);
    this->addChild(ccmenu);
    return true;
}

void ArrayListNode::onCommit() {
    this->getSetting()->setArray(this->getValue());
    Mod::get()->setSavedValue<std::vector<std::vector<std::string>>>("splashes-vector", this->getSetting()->getArray());
    if(this->getSetting()->getArray().size() == 1) {
        splashIndex = 0;
    } else {
        std::random_device rd; 
        std::mt19937 gen(rd()); 
        std::uniform_int_distribution<std::mt19937::result_type> distr(0, this->getSetting()->getArray().size() - 1);
        splashIndex = distr(gen);
    }
}

void ArrayListNode::onResetToDefault() {
    this->setValue(default_splashes);
    this->markChanged(nullptr);
}

bool ArrayListNode::hasUncommittedChanges() const {
    return m_unsavedArray != this->getSetting()->getArray();
}

bool ArrayListNode::hasNonDefaultValue() const {
    return m_unsavedArray != default_splashes;
}

std::vector<std::vector<std::string>> ArrayListNode::getValue() {
    return this->m_unsavedArray;
}

std::shared_ptr<ArrayListValue> ArrayListNode::getSetting() const {
    return std::static_pointer_cast<ArrayListValue>(SettingNodeV3::getSetting());
}

void ArrayListNode::setValue(std::vector<std::vector<std::string>> value) {
    this->m_unsavedArray.clear();
    this->m_unsavedArray.assign(value.begin(), value.end());
}

void ArrayListNode::createPopup(cocos2d::CCObject* sender) {
    auto popup = SplashesListPopup::create(this);
    CCScene::get()->addChild(popup);
}

ArrayListNode* ArrayListNode::create(std::shared_ptr<ArrayListValue> setting, float width) {
    auto ret = new ArrayListNode();
    if (ret && ret->init(setting, width)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
