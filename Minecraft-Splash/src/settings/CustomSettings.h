#pragma once
#include <Geode/loader/Mod.hpp>
#include <Geode/loader/SettingV3.hpp>
#include <matjson/stl_serialize.hpp>
#include <vector>
#include <random>
#include <Geode/Bindings.hpp>
#include <string>

using namespace geode::prelude;

class ArrayListValue : public SettingV3 {
protected:
    std::vector<std::vector<std::string>> m_splashArray;
public:
    static Result<std::shared_ptr<SettingV3>> parse(std::string const& key, std::string const& modID, matjson::Value const& json) {
        auto res = std::make_shared<ArrayListValue>();
        auto root = checkJson(json, "ArrayListValue");

        res->parseBaseProperties(key, modID, root);
        root.checkUnknownKeys();

        return root.ok(std::static_pointer_cast<SettingV3>(res));
    }

    bool load(matjson::Value const& json) override {
        m_splashArray = Mod::get()->getSavedValue<std::vector<std::vector<std::string>>>("splashes-vector");
        return true;
    }

    bool save(matjson::Value& json) const override {
        Mod::get()->setSavedValue<std::vector<std::vector<std::string>>>("splashes-vector", m_splashArray);
        return true;
    }

    void setArray(std::vector<std::vector<std::string>> splashArray) {
        this->m_splashArray.clear();
        this->m_splashArray.assign(splashArray.begin(), splashArray.end());
    }

    std::vector<std::vector<std::string>> getArray() {
        return m_splashArray;
    }

    bool isDefaultValue() const override;

    void reset() override;

    SettingNodeV3* createNode(float width) override;
};

class ArrayListNode : public SettingNodeV3 {
    protected:
        std::vector<std::vector<std::string>> m_unsavedArray;
        virtual bool init(std::shared_ptr<ArrayListValue> setting, float width);
        virtual void createPopup(cocos2d::CCObject* sender);
    public:

        void onCommit() override;

        void onResetToDefault() override;

        bool hasUncommittedChanges() const override;

        bool hasNonDefaultValue() const override;

        std::shared_ptr<ArrayListValue> getSetting() const;

        std::vector<std::vector<std::string>> getValue();

        void setValue(std::vector<std::vector<std::string>> value);

        static ArrayListNode* create(std::shared_ptr<ArrayListValue> setting, float width);
};
