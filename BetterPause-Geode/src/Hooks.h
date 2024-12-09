#include <Geode/Geode.hpp>
#include <Geode/modify/PauseLayer.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/LevelTools.hpp>
#include <Geode/modify/MoreOptionsLayer.hpp>
#include <Geode/modify/GameOptionsLayer.hpp>
#include <Geode/modify/GJOptionsLayer.hpp>
#include <Geode/modify/CustomSongWidget.hpp>
#include <Geode/loader/Event.hpp>
#include <Geode/modify/GameToolbox.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>
#include <Geode/ui/GeodeUI.hpp>
#include <Geode/modify/DailyLevelPage.hpp>
#include <Geode/modify/DialogObject.hpp>
#include <Geode/modify/InfoLayer.hpp>
#include <Geode/modify/GJGameLevel.hpp>
#include "BetterPauseManager.h"
#include "BetterPause.hpp"
#include "CustomSettings.hpp"
#include "SelectQuickSettings.h"
#include <Geode/modify/CCScrollLayerExt.hpp>
#include <Geode/modify/TableView.hpp>
#include "CoinsViewerSprites.hpp"

using namespace geode::prelude;


namespace hooksVariables {
	geode::Hook* GJOptionsLayerr_addToggleHookV = nullptr;
}

class ButtonsClass : public FLAlertLayerProtocol {

};

class $modify(PauseLayer) {
	struct Fields {
		bool hasPosibleExitHotKey = false;
		bool hasConfirmPopup = false;
	};

	static void onModify(auto & self) {
		(void)self.setHookPriority("PauseLayer::customSetup", -99);
	}

	void customSetup() {
		PauseLayer::customSetup();

		if (Mod::get()->getSettingValue<int64_t>("type-pause")) {
			for (size_t i = 1; i < getChildrenCount(); i++)
			{
				auto node = typeinfo_cast<cocos2d::CCNode*>(getChildren()->objectAtIndex(i));
				if (node)
				{
					node->setVisible(false);
				}
			}

			auto betterPauseMenu = BetterPause::create(this);
			addChild(betterPauseMenu, 100);
		}
	}

	void onResume(cocos2d::CCObject * sender) {
		if (Mod::get()->getSettingValue<bool>("confirm-resume-level") && !m_fields->hasConfirmPopup) {
			geode::createQuickPopup(
				"Resume Level",
				std::string("Are you sure you want to <cr>resume</c>?"),
				"Cancel", "Resume",
				[this, sender](FLAlertLayer* fla, bool btn2) {
					if (btn2) {
						m_fields->hasConfirmPopup = true;
						PauseLayer::onResume(sender);
						m_fields->hasConfirmPopup = false;
					}
				}
			);
			return;
		}

		auto popuBetterPause = Utils::shareDirectorA()->getRunningScene()->getChildByID("popup-betterpause");

		auto betterPause = static_cast<BetterPause*>(this->getChildByID("better-pause-node"));

		if (betterPause) {
			if (betterPause->questMenu) {
				betterPause->questMenu->onClose(nullptr);
			}
			betterPause->unregisterScriptTouchHandler();
		}


		while (popuBetterPause) {
			static_cast<FLAlertLayer*>(popuBetterPause)->keyBackClicked();

			popuBetterPause = Utils::shareDirectorA()->getRunningScene()->getChildByID("popup-betterpause");
		}
		

		PauseLayer::onResume(sender);
	}

	void onPracticeMode(cocos2d::CCObject* sender) {

		if (Mod::get()->getSettingValue<bool>("confirm-practice-level") && !m_fields->hasConfirmPopup) {
			auto popupConfirm = geode::createQuickPopup(
				"Practice Level",
				std::string("Do you want to <cg>Enter</c> the practice mode?"),
				"Cancel",
				"Enter",
				[this, sender](FLAlertLayer* fla, bool btn2) {
					if (btn2) {
						m_fields->hasConfirmPopup = true;
						PauseLayer::onPracticeMode(sender);
						m_fields->hasConfirmPopup = false;
					}
				}
			);

			popupConfirm->m_button2->updateBGImage("GJ_button_02.png");
			return;
		}

		PauseLayer::onPracticeMode(sender);
	}

	void onNormalMode(cocos2d::CCObject* sender) {
		if (Mod::get()->getSettingValue<bool>("confirm-normal-level") && !m_fields->hasConfirmPopup) {
			auto popupConfirm = geode::createQuickPopup(
				"Normal Level",
				std::string("Do you want to <cr>Exit</c> the practice mode?"),
				"Cancel",
				"Exit",
				[this, sender](FLAlertLayer* fla, bool btn2) {
					if (btn2) {
						m_fields->hasConfirmPopup = true;
						PauseLayer::onNormalMode(sender);
						m_fields->hasConfirmPopup = false;
					}
				}
			);

			popupConfirm->m_button2->updateBGImage("GJ_button_06.png");
			return;
		}

		PauseLayer::onNormalMode(sender);
	}

	void onRestart(cocos2d::CCObject* sender)
	{
		if (Mod::get()->getSettingValue<bool>("confirm-restart-level") && !m_fields->hasConfirmPopup) {
			geode::createQuickPopup(
				"Restart Level",
				"Are you sure you want to <cr>restart</c>?",
				"Cancel", "Restart",
				[this, sender](FLAlertLayer* fla, bool btn2) {

					if (btn2) {
						m_fields->hasConfirmPopup = true;
						PauseLayer::onRestart(sender);
						m_fields->hasConfirmPopup = false;
					}
				}
			);

			return;
		}

		PauseLayer::onRestart(sender);
	}

	void onRestartFull(cocos2d::CCObject* sender)
	{
		if (Mod::get()->getSettingValue<bool>("confirm-restart-full-level") && !m_fields->hasConfirmPopup) {
			geode::createQuickPopup(
				"Restart Full Level",
				"Are you sure you want to <cr>restart</c>?",
				"Cancel", "Restart",
				[this, sender](FLAlertLayer* fla, bool btn2) {

					if (btn2) {
						m_fields->hasConfirmPopup = true;
						PauseLayer::onRestartFull(sender);
						m_fields->hasConfirmPopup = false;
					}
				}
			);
			return;
		}

		PauseLayer::onRestartFull(sender);
	}

	void onEdit(cocos2d::CCObject* sender)
	{
		if (Mod::get()->getSettingValue<bool>("confirm-edit-level") && !m_fields->hasConfirmPopup) {
			geode::createQuickPopup(
				"Edit Level",
				"Are you sure you want to <cr>edit</c>?",
				"Cancel", "Edit",
				[this, sender](FLAlertLayer* fla, bool btn2) {

					if (btn2) {
						m_fields->hasConfirmPopup = true;
						PauseLayer::onEdit(sender);
						m_fields->hasConfirmPopup = false;
					}
				}
			);
			return;
		}

		PauseLayer::onEdit(sender);
	}

	void keyDown(cocos2d::enumKeyCodes p0) {
		if (Mod::get()->getSettingValue<bool>("remove-exit-hotkey")) {
			m_fields->hasPosibleExitHotKey = true;
		}

		PauseLayer::keyDown(p0);

		m_fields->hasPosibleExitHotKey = false;
	}

	void tryQuit(cocos2d::CCObject* sender) {
		if (m_fields->hasPosibleExitHotKey) {
			return;
		}

		PauseLayer::tryQuit(sender);
	}
};

class $modify(PlayLayer) {
	bool init(GJGameLevel * p0, bool p1, bool p2) {
		BetterPause::totalLevelTimeBackup = 0.f;
		ProgressPlataformerBetter::m_totalPoints = 0;
		CoinsViewerSprites::coinsInVector.clear();

		if (!PlayLayer::init(p0, p1, p2)) {
			return false;
		}

		if (this->m_level->isPlatformer()) {
			ProgressPlataformerBetter::timeForLevelStringPlataformerSafe = BetterInfo::timeForLevelString(this->m_level->m_levelString);
		}

		return true;
	}

	void addObject(GameObject * p0) {
		PlayLayer::addObject(p0);

		auto effectGameObjectPtr = reinterpret_cast<EffectGameObject*>(p0);

		if (effectGameObjectPtr) {
			if (effectGameObjectPtr->m_objectType == GameObjectType::Collectible) {
				ProgressPlataformerBetter::m_totalPoints += effectGameObjectPtr->m_collectiblePoints;
			}
		}

		GameObjectType objTypeV = p0->m_objectType;


		bool isCoin = objTypeV == GameObjectType::SecretCoin || objTypeV == GameObjectType::UserCoin;

		if (isCoin) {
			bool isObjectInVector = std::find(CoinsViewerSprites::coinsInVector.begin(), CoinsViewerSprites::coinsInVector.end(), p0) != CoinsViewerSprites::coinsInVector.end();
			if (!isObjectInVector) {
				p0->retain();
				CoinsViewerSprites::coinsInVector.push_back(p0);
				p0->release();
			}
		}

	}

	void showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5) {

		if (this->m_isTestMode && this->m_level->m_levelType != GJLevelType::Editor) {
			return;
		}

		PlayLayer::showNewBest(p0, p1, p2, p3, p4, p5);
	}

	void levelComplete()
	{
		if (this->m_isTestMode && this->m_level->m_levelType != GJLevelType::Editor)
		{
			if (m_isPracticeMode)
			{
				this->showCompleteText();
			}
			else
			{
				showCompleteEffect();
			}

			return;
		}

		PlayLayer::levelComplete();
	}

};

class $modify(GJBaseGameLayer) {
	void update(float dt) {
		GJBaseGameLayer::update(dt);
		if (Utils::getplayLayerA()) {

#ifdef GEODE_IS_ANDROID
			/*
			auto label = dynamic_cast<CCLabelBMFont*>(this->getChildByID("epicooo"));
			if (!label) {
				label = cocos2d::CCLabelBMFont::create("zzz", "bigFont.fnt");
				label->setPosition({ Utils::WinSize().width / 2.f, Utils::WinSize().height / 2.f });
				label->setID("epicooo");
				this->addChild(label);
				label->setScale(0.4f);
			}


			std::stringstream ss;
			for (size_t i = 0; i < numIterations; i++) {
				if (i > 0) {
					ss << " | ";
				}
				ss << "Valor " << i + 1 << ": " << std::floor(Utils::from<int>(Utils::getplayLayerA(), offset + (i * sizeof(int)))) << std::endl;
			}


			std::stringstream ss;
			ss << "Intentos " << Utils::getplayLayerA()->getCurrentPercent() << std::endl;

			label->setString(ss.str().c_str());
			*/
#endif

			BetterPause::totalLevelTimeBackup += dt;
		}
	}
};

class $modify(MoreOptionsLayer) {
	void addToggle(const char* name, const char* key, const char* info) {
		MoreOptionsLayer::addToggle(name, key, info);

		BetterPause::quickSettingsNames.push_back(name);
		BetterPause::quickSettingsKeys.push_back(key);
		BetterPause::quickSettingsDescriptions.push_back(info);

	}
};


class $modify(GameOptionsLayer) {


	void setupOptions() {

		BetterPause::quickSettingsNamesG.clear();
		BetterPause::quickSettingsNumbersG.clear();
		BetterPause::quickSettingsEnabledG.clear();

		if (Utils::getplayLayerA()) {
			SelectQuickSettings::GameOptionsLayer_getSettings = true;
		}
		
		GameOptionsLayer::setupOptions();

		SelectQuickSettings::GameOptionsLayer_getSettings = false;
	}

};




class $modify(GJOptionsLayer) {
	struct Fields {
		bool m_initialized = false;
	};

	void addToggleInternal(char const* p1, int p2, bool p3, char const* p4) {
		GJOptionsLayer::addToggleInternal(p1, p2, p3, p4);
		if (!m_fields->m_initialized) {
			m_fields->m_initialized = true;

			BetterPause::quickSettingsNamesG.clear();
			BetterPause::quickSettingsNumbersG.clear();
			BetterPause::quickSettingsEnabledG.clear();

			BetterPause::quickSettingsNamesG.resize(99);
			BetterPause::quickSettingsNumbersG.resize(99);
			BetterPause::quickSettingsEnabledG.resize(99);
		}
		if (SelectQuickSettings::GameOptionsLayer_getSettings) {
			if (p2 > 0 && p2 <= 10) {
				BetterPause::quickSettingsNamesG[p2 - 1] = p1;
				BetterPause::quickSettingsNumbersG[p2 - 1] = p2;
				BetterPause::quickSettingsEnabledG[p2 - 1] = p3;
			}
		}
	}

};

class $modify(CustomSongWidget) {
	void updateSongInfo() {
		CustomSongWidget::updateSongInfo();

		if (Utils::getplayLayerA() && this->m_artistLabel && this->m_moreBtn) {
			CCPoint labelPos = this->m_artistLabel->getPosition();
			auto labelWidth = this->m_artistLabel->getContentSize().width * this->m_artistLabel->getScale();

			auto menuItemX = labelPos.x + labelWidth - (Utils::WinSize().width / 2) + 30.f;

			this->m_moreBtn->setPositionX(menuItemX);
		}
	}
};

class $modify(CCScrollLayerExt) {
	void ccTouchMoved(cocos2d::CCTouch * p0, cocos2d::CCEvent * p1) {
		CCScrollLayerExt::ccTouchMoved(p0, p1);
		if (Utils::hasParentWithID(this, "better-pause-node")) {

			auto betterPause = static_cast<BetterPause*>(Utils::getParentWithID(this, "better-pause-node"));
			betterPause->updateButtons();
			betterPause->setEnabledForButtons(false);
		}
	}

	void ccTouchEnded(CCTouch * pTouch, CCEvent * pEvent) {
		CCScrollLayerExt::ccTouchEnded(pTouch, pEvent);
		if (Utils::hasParentWithID(this, "better-pause-node")) {
			auto betterPause = static_cast<BetterPause*>(Utils::getParentWithID(this, "better-pause-node"));
			betterPause->setEnabledForButtons(true);
			betterPause->updateButtons();
		}
	}

	void ccTouchCancelled(CCTouch * pTouch, CCEvent * pEvent) {
		CCScrollLayerExt::ccTouchCancelled(pTouch, pEvent);
		if (Utils::hasParentWithID(this, "better-pause-node")) {
			auto betterPause = static_cast<BetterPause*>(Utils::getParentWithID(this, "better-pause-node"));
			betterPause->setEnabledForButtons(true);
			betterPause->updateButtons();
		}
	}
};

class $modify(TableView) {
	void scrollWheel(float p0, float p1) {
		TableView::scrollWheel(p0, p1);
		if (Utils::hasParentWithID(this, "better-pause-node")) {
			static_cast<BetterPause*>(Utils::getParentWithID(this, "better-pause-node"))->updateButtons();
		}
	}
};

class $modify(InfoLayer) {

	void onClose(cocos2d::CCObject * sender) {
		InfoLayer::onClose(sender);
		if (auto pauseLayer = CCScene::get()->getChildByID("PauseLayer"); pauseLayer) {
			if (auto betterPause = static_cast<BetterPause*>(pauseLayer->getChildByID("better-pause-node")); betterPause) {
				handleTouchPriority(pauseLayer);
				handleTouchPriority(betterPause);
			}
		}
	}

};

class $modify(GJGameLevel) {
	void savePercentage(int p0, bool p1, int p2, int p3, bool p4) {

		if (PlayLayer::get()) {
			if (PlayLayer::get()->m_isTestMode && this->m_levelType != GJLevelType::Editor) {
				return;
			}
		}

		GJGameLevel::savePercentage(p0, p1, p2, p3, p4);
	}
};