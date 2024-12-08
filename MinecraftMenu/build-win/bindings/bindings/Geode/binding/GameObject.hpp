#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)

    /**
     * @note[short] Windows: 0x135ba0
     * @note[short] Android
     */
     GameObject();

    /**
     * @note[short] MacOS (ARM): 0x4d7884
     * @note[short] MacOS (Intel): 0x58a280
     * @note[short] Windows: 0x18aca0
     * @note[short] Android
     */
    static GameObject* createWithFrame(char const* name);

    /**
     * @note[short] MacOS (ARM): 0x4d73bc
     * @note[short] MacOS (Intel): 0x585720
     * @note[short] Windows: 0x188850
     * @note[short] Android
     */
    static GameObject* createWithKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e2090
     * @note[short] Windows: 0x19a260
     * @note[short] Android
     */
    static GameObject* objectFromVector(gd::vector<gd::string>& p0, gd::vector<void*>& p1, GJBaseGameLayer* p2, bool p3);
    
private:
    [[deprecated("GameObject::update not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4d99a0
     * @note[short] MacOS (Intel): 0x5926c0
     * @note[short] iOS: 0x255980
     * @note[short] Android
     */
    virtual void update(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4de6e4
     * @note[short] MacOS (Intel): 0x5a42e0
     * @note[short] Windows: 0x1952d0
     * @note[short] iOS: 0x25a750
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de784
     * @note[short] MacOS (Intel): 0x5a4380
     * @note[short] Windows: 0x1953b0
     * @note[short] iOS: 0x25a7e8
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de824
     * @note[short] MacOS (Intel): 0x5a4420
     * @note[short] Windows: 0x1954a0
     * @note[short] iOS: 0x25a880
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de10c
     * @note[short] MacOS (Intel): 0x5a3d60
     * @note[short] Windows: 0x194be0
     * @note[short] iOS: 0x25a238
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4dee6c
     * @note[short] MacOS (Intel): 0x5a4b20
     * @note[short] Windows: 0x195cd0
     * @note[short] iOS: 0x25ade8
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4de3ac
     * @note[short] MacOS (Intel): 0x5a3fd0
     * @note[short] Windows: 0x194e80
     * @note[short] iOS: 0x25a444
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de494
     * @note[short] MacOS (Intel): 0x5a40a0
     * @note[short] Windows: 0x194fd0
     * @note[short] iOS: 0x25a51c
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de570
     * @note[short] MacOS (Intel): 0x5a4160
     * @note[short] Windows: 0x195120
     * @note[short] iOS: 0x25a5e8
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4deb48
     * @note[short] MacOS (Intel): 0x5a4780
     * @note[short] Windows: 0x195880
     * @note[short] iOS: 0x25aafc
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x4d7ac8
     * @note[short] MacOS (Intel): 0x58a4b0
     * @note[short] Windows: 0x18ad30
     * @note[short] iOS: 0x253f40
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] MacOS (ARM): 0x4e9884
     * @note[short] MacOS (Intel): 0x5b0a70
     * @note[short] Windows: 0x19de40
     * @note[short] iOS: 0x260390
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4de63c
     * @note[short] MacOS (Intel): 0x5a4240
     * @note[short] Windows: 0x195240
     * @note[short] iOS: 0x25a6a8
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4de690
     * @note[short] MacOS (Intel): 0x5a4290
     * @note[short] Windows: 0x195280
     * @note[short] iOS: 0x25a6fc
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);
    
private:
    [[deprecated("GameObject::firstSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void firstSetup();
public:

    /**
     * @note[short] MacOS (ARM): 0x4d99a4
     * @note[short] MacOS (Intel): 0x5926d0
     * @note[short] Windows: 0x18dea0
     * @note[short] iOS: 0x255984
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x3ab2c8
     * @note[short] MacOS (Intel): 0x430540
     * @note[short] Windows: 0x1abf80
     * @note[short] iOS: 0x2ad6f8
     * @note[short] Android
     */
    virtual void setupCustomSprites(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4e0268
     * @note[short] MacOS (Intel): 0x5a5e40
     * @note[short] Windows: 0x198dd0
     * @note[short] iOS: 0x25be94
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4d8f98
     * @note[short] MacOS (Intel): 0x591b80
     * @note[short] Windows: 0x18d750
     * @note[short] iOS: 0x255010
     * @note[short] Android
     */
    virtual void resetObject();
    
private:
    [[deprecated("GameObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x4d945c
     * @note[short] MacOS (Intel): 0x5921a0
     * @note[short] Windows: 0x18db60
     * @note[short] iOS: 0x25544c
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x4d97e0
     * @note[short] MacOS (Intel): 0x592510
     * @note[short] Windows: 0x18dc10
     * @note[short] iOS: 0x2557d0
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4ddae0
     * @note[short] MacOS (Intel): 0x5a3660
     * @note[short] Windows: 0x1946d0
     * @note[short] iOS: 0x259cf0
     * @note[short] Android
     */
    virtual void transferObjectRect(cocos2d::CCRect& p0);

    /**
     * @note[short] MacOS (ARM): 0x4ddb58
     * @note[short] MacOS (Intel): 0x5a36d0
     * @note[short] Windows: 0x194720
     * @note[short] iOS: 0x259d68
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4ddb6c
     * @note[short] MacOS (Intel): 0x5a3700
     * @note[short] Windows: 0x194740
     * @note[short] iOS: 0x259d7c
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4ddd50
     * @note[short] MacOS (Intel): 0x5a3930
     * @note[short] Windows: 0x1948d0
     * @note[short] iOS: 0x259f50
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect2(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4dde14
     * @note[short] MacOS (Intel): 0x5a3a00
     * @note[short] Windows: 0x194970
     * @note[short] iOS: 0x259fd4
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x4de06c
     * @note[short] MacOS (Intel): 0x5a3ca0
     * @note[short] Windows: 0x194ba0
     * @note[short] iOS: 0x25a1b8
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x4d8e7c
     * @note[short] MacOS (Intel): 0x591a70
     * @note[short] Windows: 0x18d5d0
     * @note[short] iOS: 0x254ef4
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x4d92ec
     * @note[short] MacOS (Intel): 0x591fd0
     * @note[short] Windows: 0x18d9a0
     * @note[short] iOS: 0x25535c
     * @note[short] Android
     */
    virtual void updateStartValues();
    
private:
    [[deprecated("GameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x4e3ca8
     * @note[short] MacOS (Intel): 0x5a9880
     * @note[short] Windows: 0x19bd50
     * @note[short] iOS: 0x25e828
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x4defb4
     * @note[short] MacOS (Intel): 0x5a4c80
     * @note[short] Windows: 0x195df0
     * @note[short] iOS: 0x25af30
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x4df574
     * @note[short] MacOS (Intel): 0x5a52c0
     * @note[short] Windows: 0x196320
     * @note[short] iOS: 0x25b3d0
     * @note[short] Android
     */
    virtual void unclaimParticle();
    
private:
    [[deprecated("GameObject::particleWasActivated not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4df5dc
     * @note[short] MacOS (Intel): 0x5a5330
     * @note[short] iOS: 0x25b424
     * @note[short] Android
     */
    virtual void particleWasActivated();
public:

    /**
     * @note[short] MacOS (ARM): 0x4de62c
     * @note[short] MacOS (Intel): 0x5a4220
     * @note[short] Windows: 0x195220
     * @note[short] iOS: 0x25a698
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] MacOS (ARM): 0x4de634
     * @note[short] MacOS (Intel): 0x5a4230
     * @note[short] Windows: 0x195230
     * @note[short] iOS: 0x25a6a0
     * @note[short] Android
     */
    virtual bool isFlipY();

    /**
     * @note[short] MacOS (ARM): 0x4de8c4
     * @note[short] MacOS (Intel): 0x5a44c0
     * @note[short] Windows: 0x195590
     * @note[short] iOS: 0x25a918
     * @note[short] Android
     */
    virtual void setRScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de8f8
     * @note[short] MacOS (Intel): 0x5a4500
     * @note[short] Windows: 0x1955d0
     * @note[short] iOS: 0x25a94c
     * @note[short] Android
     */
    virtual void setRScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de92c
     * @note[short] MacOS (Intel): 0x5a4540
     * @note[short] Windows: 0x195610
     * @note[short] iOS: 0x25a980
     * @note[short] Android
     */
    virtual void setRScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de9b0
     * @note[short] MacOS (Intel): 0x5a45c0
     * @note[short] Windows: 0x195650
     * @note[short] iOS: 0x25a9c4
     * @note[short] Android
     */
    virtual float getRScaleX();

    /**
     * @note[short] MacOS (ARM): 0x4de9e8
     * @note[short] MacOS (Intel): 0x5a45f0
     * @note[short] Windows: 0x195690
     * @note[short] iOS: 0x25a9fc
     * @note[short] Android
     */
    virtual float getRScaleY();

    /**
     * @note[short] MacOS (ARM): 0x4de314
     * @note[short] MacOS (Intel): 0x5a3f50
     * @note[short] Windows: 0x194df0
     * @note[short] iOS: 0x25a3c0
     * @note[short] Android
     */
    virtual void setRRotation(float p0);
    
private:
    [[deprecated("GameObject::triggerActivated not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4e956c
     * @note[short] MacOS (Intel): 0x5b0790
     * @note[short] Windows: 0x19db00
     * @note[short] iOS: 0x260094
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4e982c
     * @note[short] MacOS (Intel): 0x5b0a20
     * @note[short] Windows: 0x19ddf0
     * @note[short] iOS: 0x260338
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4df5fc
     * @note[short] MacOS (Intel): 0x5a5370
     * @note[short] Windows: 0x196410
     * @note[short] iOS: 0x25b444
     * @note[short] Android
     */
    virtual void restoreObject();
    
private:
    [[deprecated("GameObject::animationTriggered not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void animationTriggered();
public:

    /**
     * @note[short] MacOS (ARM): 0x4e9910
     * @note[short] MacOS (Intel): 0x5b0ae0
     * @note[short] Windows: 0x19dec0
     * @note[short] iOS: 0x26041c
     * @note[short] Android
     */
    virtual void selectObject(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("GameObject::activatedByPlayer not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void activatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("GameObject::hasBeenActivatedByPlayer not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("GameObject::hasBeenActivated not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual bool hasBeenActivated();
public:

    /**
     * @note[short] MacOS (ARM): 0x4ea374
     * @note[short] MacOS (Intel): 0x5b1510
     * @note[short] Windows: 0x19e590
     * @note[short] iOS: 0x2609e4
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4ea408
     * @note[short] MacOS (Intel): 0x5b1590
     * @note[short] Windows: 0x19e5f0
     * @note[short] iOS: 0x260a78
     * @note[short] Android
     */
    virtual void updateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4efe24
     * @note[short] MacOS (Intel): 0x5b9cb0
     * @note[short] Windows: 0x19e570
     * @note[short] iOS: 0x264644
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x4eae24
     * @note[short] MacOS (Intel): 0x5b2150
     * @note[short] Windows: 0x19eff0
     * @note[short] iOS: 0x2612d0
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4eb32c
     * @note[short] MacOS (Intel): 0x5b2660
     * @note[short] Windows: 0x19f000
     * @note[short] iOS: 0x2614a4
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4e09b8
     * @note[short] MacOS (Intel): 0x5a6570
     * @note[short] Windows: 0x199810
     * @note[short] iOS: 0x25c4f0
     * @note[short] Android
     */
    virtual void addToGroup(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e0a90
     * @note[short] MacOS (Intel): 0x5a6620
     * @note[short] Windows: 0x199930
     * @note[short] iOS: 0x25c5a0
     * @note[short] Android
     */
    virtual void removeFromGroup(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e93b4
     * @note[short] MacOS (Intel): 0x5b05d0
     * @note[short] Windows: 0x19d950
     * @note[short] iOS: 0x25ff38
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x19999c
     * @note[short] MacOS (Intel): 0x1e1b50
     * @note[short] Windows: 0x135fe0
     * @note[short] iOS: 0x22ea4c
     * @note[short] Android
     */
    virtual float spawnXPosition();
    
private:
    [[deprecated("GameObject::canAllowMultiActivate not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual bool canAllowMultiActivate();
public:
    
private:
    [[deprecated("GameObject::blendModeChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void blendModeChanged();
public:

    /**
     * @note[short] MacOS (ARM): 0x4e9764
     * @note[short] MacOS (Intel): 0x5b0960
     * @note[short] Windows: 0x19dce0
     * @note[short] iOS: 0x260270
     * @note[short] Android
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4dede4
     * @note[short] MacOS (Intel): 0x5a4aa0
     * @note[short] Windows: 0x195b20
     * @note[short] iOS: 0x25ad60
     * @note[short] Android
     */
    virtual void updateParticleOpacity(unsigned char p0);
    
private:
    [[deprecated("GameObject::updateMainParticleOpacity not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void updateMainParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::updateSecondaryParticleOpacity not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void updateSecondaryParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::canReverse not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual bool canReverse();
public:
    
private:
    [[deprecated("GameObject::isSpecialSpawnObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual bool isSpecialSpawnObject();
public:
    
private:
    [[deprecated("GameObject::canBeOrdered not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual bool canBeOrdered();
public:
    
private:
    [[deprecated("GameObject::getObjectLabel not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8d390
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0x171fa4
     * @note[short] Android
     */
    virtual cocos2d::CCLabelBMFont* getObjectLabel();
public:
    
private:
    [[deprecated("GameObject::setObjectLabel not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);
public:
    
private:
    [[deprecated("GameObject::shouldDrawEditorHitbox not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4ec0bc
     * @note[short] MacOS (Intel): 0x5b37c0
     * @note[short] iOS: 0x261f40
     * @note[short] Android
     */
    virtual bool shouldDrawEditorHitbox();
public:
    
private:
    [[deprecated("GameObject::getHasSyncedAnimation not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual bool getHasSyncedAnimation();
public:
    
private:
    [[deprecated("GameObject::getHasRotateAction not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual bool getHasRotateAction();
public:
    
private:
    [[deprecated("GameObject::canMultiActivate not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual bool canMultiActivate(bool p0);
public:
    
private:
    [[deprecated("GameObject::updateTextKerning not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb0
     * @note[short] MacOS (Intel): 0x7150
     * @note[short] iOS: 0xd590
     * @note[short] Android
     */
    virtual void updateTextKerning(int p0);
public:
    
private:
    [[deprecated("GameObject::getTextKerning not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x8fb4
     * @note[short] MacOS (Intel): 0x7160
     * @note[short] iOS: 0xe7a8
     * @note[short] Android
     */
    virtual int getTextKerning();
public:

    /**
     * @note[short] MacOS (ARM): 0x1999bc
     * @note[short] MacOS (Intel): 0x1e1b70
     * @note[short] Windows: 0x136000
     * @note[short] iOS: 0x22ea6c
     * @note[short] Android
     */
    virtual bool getObjectRectDirty();

    /**
     * @note[short] MacOS (ARM): 0x1999c4
     * @note[short] MacOS (Intel): 0x1e1b80
     * @note[short] Windows: 0x136010
     * @note[short] iOS: 0x22ea74
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1999cc
     * @note[short] MacOS (Intel): 0x1e1b90
     * @note[short] Windows: 0x136020
     * @note[short] iOS: 0x22ea7c
     * @note[short] Android
     */
    virtual bool getOrientedRectDirty();

    /**
     * @note[short] MacOS (ARM): 0x1999d4
     * @note[short] MacOS (Intel): 0x1e1ba0
     * @note[short] Windows: 0x136030
     * @note[short] iOS: 0x22ea84
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool p0);
    
private:
    [[deprecated("GameObject::getType not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1999dc
     * @note[short] MacOS (Intel): 0x1e1bb0
     * @note[short] iOS: 0x22ea8c
     * @note[short] Android
     */
    virtual GameObjectType getType();
public:
    
private:
    [[deprecated("GameObject::setType not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1999e4
     * @note[short] MacOS (Intel): 0x1e1bc0
     * @note[short] iOS: 0x22ea94
     * @note[short] Android
     */
    virtual void setType(GameObjectType p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1999ec
     * @note[short] MacOS (Intel): 0x1e1bd0
     * @note[short] Windows: 0x136060
     * @note[short] iOS: 0x22ea9c
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getStartPos();

    /**
     * @note[short] MacOS (ARM): 0x4d83b4
     * @note[short] MacOS (Intel): 0x58cc00
     * @note[short] Windows: 0x18b830
     * @note[short] Android
     */
    void addColorSprite(gd::string p0);
    
private:
    [[deprecated("GameObject::addColorSpriteToParent not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x592300
     * @note[short] Android
     */
    void addColorSpriteToParent(bool p0);
public:
    
private:
    [[deprecated("GameObject::addColorSpriteToSelf not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5a6020
     * @note[short] Android
     */
    void addColorSpriteToSelf();
public:
    
private:
    [[deprecated("GameObject::addCustomBlackChild not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCSprite* addCustomBlackChild(gd::string p0, float p1, bool p2);
public:
    
private:
    [[deprecated("GameObject::addCustomChild not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCSprite* addCustomChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:
    
private:
    [[deprecated("GameObject::addCustomColorChild not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCSprite* addCustomColorChild(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addEmptyGlow not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4d825c
     * @note[short] Android
     */
    void addEmptyGlow();
public:
    
private:
    [[deprecated("GameObject::addGlow not implemented")]]
    /**
     * @note[short] Android
     */
    void addGlow(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addInternalChild not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCSprite* addInternalChild(cocos2d::CCSprite* p0, gd::string p1, cocos2d::CCPoint p2, int p3);
public:
    
private:
    [[deprecated("GameObject::addInternalCustomColorChild not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCSprite* addInternalCustomColorChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:
    
private:
    [[deprecated("GameObject::addInternalGlowChild not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCSprite* addInternalGlowChild(gd::string p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("GameObject::addNewSlope01 not implemented")]]
    /**
     * @note[short] Android
     */
    void addNewSlope01(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope01Glow not implemented")]]
    /**
     * @note[short] Android
     */
    void addNewSlope01Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02 not implemented")]]
    /**
     * @note[short] Android
     */
    void addNewSlope02(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02Glow not implemented")]]
    /**
     * @note[short] Android
     */
    void addNewSlope02Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     * @note[short] Android
     */
    void addRotation(float p0, float p1);
public:
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     * @note[short] Android
     */
    void addRotation(float p0);
public:
    
private:
    [[deprecated("GameObject::addToColorGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void addToColorGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::addToCustomScaleX not implemented")]]
    /**
     * @note[short] Android
     */
    void addToCustomScaleX(float p0);
public:
    
private:
    [[deprecated("GameObject::addToCustomScaleY not implemented")]]
    /**
     * @note[short] Android
     */
    void addToCustomScaleY(float p0);
public:
    
private:
    [[deprecated("GameObject::addToOpacityGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void addToOpacityGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::addToTempOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void addToTempOffset(double p0, double p1);
public:
    
private:
    [[deprecated("GameObject::assignUniqueID not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x58a5a0
     * @note[short] Android
     */
    void assignUniqueID();
public:
    
private:
    [[deprecated("GameObject::belongsToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    bool belongsToGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::calculateOrientedBox not implemented")]]
    /**
     * @note[short] Android
     */
    void calculateOrientedBox();
public:
    
private:
    [[deprecated("GameObject::canChangeCustomColor not implemented")]]
    /**
     * @note[short] Android
     */
    bool canChangeCustomColor();
public:
    
private:
    [[deprecated("GameObject::canChangeMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    bool canChangeMainColor();
public:
    
private:
    [[deprecated("GameObject::canChangeSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    bool canChangeSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::canRotateFree not implemented")]]
    /**
     * @note[short] Android
     */
    bool canRotateFree();
public:
    
private:
    [[deprecated("GameObject::colorForMode not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::commonInteractiveSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void commonInteractiveSetup();
public:

    /**
     * @note[short] Windows: 0x18ad70
     * @note[short] Android
     */
    void commonSetup();

    /**
     * @note[short] MacOS (ARM): 0x4e0b44
     * @note[short] Windows: 0x1999c0
     * @note[short] Android
     */
    void copyGroups(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4dc810
     * @note[short] MacOS (Intel): 0x59d770
     * @note[short] Windows: 0x195ba0
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* createAndAddParticle(int p0, char const* plistName, int p2, cocos2d::tCCPositionType positionType);
    
private:
    [[deprecated("GameObject::createColorGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    void createColorGroupContainer(int p0);
public:
    
private:
    [[deprecated("GameObject::createGlow not implemented")]]
    /**
     * @note[short] Android
     */
    void createGlow(gd::string p0);
public:

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createGroupContainer(int size);
    
private:
    [[deprecated("GameObject::createOpacityGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    void createOpacityGroupContainer(int p0);
public:
    
private:
    [[deprecated("GameObject::createSpriteColor not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4d7afc
     * @note[short] MacOS (Intel): 0x58a4e0
     * @note[short] Android
     */
    void createSpriteColor(int p0);
public:
    
private:
    [[deprecated("GameObject::deselectObject not implemented")]]
    /**
     * @note[short] Android
     */
    void deselectObject();
public:
	inline void destroyObject() { // what ? not inline, imac 0x5a5340
        m_isDisabled = true;
        m_isDisabled2 = true;
        setOpacity(0);
    }

    /**
     * @note[short] MacOS (ARM): 0x4e0550
     * @note[short] MacOS (Intel): 0x5a6120
     * @note[short] Windows: 0x199340
     * @note[short] Android
     */
    void determineSlopeDirection();
    
private:
    [[deprecated("GameObject::didScaleXChange not implemented")]]
    /**
     * @note[short] Android
     */
    bool didScaleXChange();
public:
    
private:
    [[deprecated("GameObject::didScaleYChange not implemented")]]
    /**
     * @note[short] Android
     */
    bool didScaleYChange();
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectPos not implemented")]]
    /**
     * @note[short] Android
     */
    void dirtifyObjectPos();
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectRect not implemented")]]
    /**
     * @note[short] Android
     */
    void dirtifyObjectRect();
public:
    
private:
    [[deprecated("GameObject::disableObject not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5a5400
     * @note[short] Android
     */
    void disableObject();
public:
    
private:
    [[deprecated("GameObject::dontCountTowardsLimit not implemented")]]
    /**
     * @note[short] Android
     */
    bool dontCountTowardsLimit();
public:
    
private:
    [[deprecated("GameObject::duplicateAttributes not implemented")]]
    /**
     * @note[short] Android
     */
    void duplicateAttributes(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::duplicateColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void duplicateColorMode(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x19ee40
     * @note[short] Android
     */
    void duplicateValues(GameObject* p0);
    
private:
    [[deprecated("GameObject::editorColorForCustomMode not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForCustomMode(int p0);
public:

    /**
     * @note[short] Windows: 0x19e0a0
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForMode(int p0);
    
private:
    [[deprecated("GameObject::fastRotateObject not implemented")]]
    /**
     * @note[short] Android
     */
    void fastRotateObject(float p0);
public:
    
private:
    [[deprecated("GameObject::getActiveColorForMode not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5b28b0
     * @note[short] Android
     */
    cocos2d::ccColor3B getActiveColorForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::getBallFrame not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4e937c
     * @note[short] MacOS (Intel): 0x5b05a0
     * @note[short] Android
     */
    char* getBallFrame(int p0);
public:
    
private:
    [[deprecated("GameObject::getBoundingRect not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();
public:
    
private:
    [[deprecated("GameObject::getBoxOffset not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getBoxOffset();
public:
    
private:
    [[deprecated("GameObject::getColorFrame not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getColorFrame(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::getColorIndex not implemented")]]
    /**
     * @note[short] Android
     */
    int getColorIndex();
public:
    
private:
    [[deprecated("GameObject::getColorKey not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x412600
     * @note[short] Android
     */
    gd::string getColorKey(bool p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::getCustomZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    ZLayer getCustomZLayer();
public:
    
private:
    [[deprecated("GameObject::getGlowFrame not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getGlowFrame(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::getGroupDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    bool getGroupDisabled();
public:
    
private:
    [[deprecated("GameObject::getGroupID not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4e0b24
     * @note[short] Android
     */
    int getGroupID(int p0);
public:
    
private:
    [[deprecated("GameObject::getGroupString not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getGroupString();
public:
    
private:
    [[deprecated("GameObject::getLastPosition not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5b2a90
     * @note[short] Android
     */
    cocos2d::CCPoint const& getLastPosition();
public:
    
private:
    [[deprecated("GameObject::getMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    GJSpriteColor* getMainColor();
public:
    
private:
    [[deprecated("GameObject::getMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    int getMainColorMode();
public:
    
private:
    [[deprecated("GameObject::getObjectDirection not implemented")]]
    /**
     * @note[short] Android
     */
    int getObjectDirection();
public:
    
private:
    [[deprecated("GameObject::getObjectRadius not implemented")]]
    /**
     * @note[short] Android
     */
    float getObjectRadius();
public:
    
private:
    [[deprecated("GameObject::getObjectRectPointer not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCRect* getObjectRectPointer();
public:
    
private:
    [[deprecated("GameObject::getObjectZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    ZLayer getObjectZLayer();
public:
    
private:
    [[deprecated("GameObject::getObjectZOrder not implemented")]]
    /**
     * @note[short] Android
     */
    int getObjectZOrder();
public:
    
private:
    [[deprecated("GameObject::getOuterObjectRect not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCRect getOuterObjectRect();
public:
    
private:
    [[deprecated("GameObject::getParentMode not implemented")]]
    /**
     * @note[short] Android
     */
    int getParentMode();
public:
    
private:
    [[deprecated("GameObject::getRelativeSpriteColor not implemented")]]
    /**
     * @note[short] Android
     */
    GJSpriteColor* getRelativeSpriteColor(int p0);
public:
    
private:
    [[deprecated("GameObject::getScalePosDelta not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getScalePosDelta();
public:
    
private:
    [[deprecated("GameObject::getSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    GJSpriteColor* getSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::getSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    int getSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::getSlopeAngle not implemented")]]
    /**
     * @note[short] Android
     */
    float getSlopeAngle();
public:
    
private:
    [[deprecated("GameObject::getUnmodifiedPosition not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getUnmodifiedPosition();
public:
    
private:
    [[deprecated("GameObject::groupColor not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B groupColor(cocos2d::ccColor3B const& p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x4e157c
     * @note[short] MacOS (Intel): 0x5a7040
     * @note[short] Windows: 0x199d30
     * @note[short] Android
     */
    float groupOpacityMod();
    
private:
    [[deprecated("GameObject::groupWasDisabled not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5a6a20
     * @note[short] Android
     */
    void groupWasDisabled();
public:
    
private:
    [[deprecated("GameObject::groupWasEnabled not implemented")]]
    /**
     * @note[short] Android
     */
    void groupWasEnabled();
public:
    
private:
    [[deprecated("GameObject::hasSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::ignoreEditorDuration not implemented")]]
    /**
     * @note[short] Android
     */
    bool ignoreEditorDuration();
public:
    
private:
    [[deprecated("GameObject::ignoreEnter not implemented")]]
    /**
     * @note[short] Android
     */
    bool ignoreEnter();
public:
    
private:
    [[deprecated("GameObject::ignoreFade not implemented")]]
    /**
     * @note[short] Android
     */
    bool ignoreFade();
public:
    
private:
    [[deprecated("GameObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4d7914
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("GameObject::isBasicEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBasicEnterEffect(int p0);
public:
    
private:
    [[deprecated("GameObject::isBasicTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBasicTrigger();
public:
    
private:
    [[deprecated("GameObject::isColorObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isColorObject();
public:
    
private:
    [[deprecated("GameObject::isColorTrigger not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5b3020
     * @note[short] Android
     */
    bool isColorTrigger();
public:
    
private:
    [[deprecated("GameObject::isConfigurablePortal not implemented")]]
    /**
     * @note[short] Android
     */
    bool isConfigurablePortal();
public:
    
private:
    [[deprecated("GameObject::isEditorSpawnableTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isEditorSpawnableTrigger();
public:

    /**
     * @note[short] MacOS (ARM): 0x4ea740
     * @note[short] Windows: 0x19e990
     * @note[short] Android
     */
    bool isFacingDown();

    /**
     * @note[short] MacOS (ARM): 0x4ea7d0
     * @note[short] Windows: 0x19ea50
     * @note[short] Android
     */
    bool isFacingLeft();
    
private:
    [[deprecated("GameObject::isSettingsObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4ebf78
     * @note[short] MacOS (Intel): 0x5b3690
     * @note[short] Android
     */
    bool isSettingsObject();
public:
    
private:
    [[deprecated("GameObject::isSpawnableTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpawnableTrigger();
public:
    
private:
    [[deprecated("GameObject::isSpecialObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpecialObject();
public:
    
private:
    [[deprecated("GameObject::isSpeedObject not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5b30f0
     * @note[short] Android
     */
    bool isSpeedObject();
public:
    
private:
    [[deprecated("GameObject::isStoppableTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isStoppableTrigger();
public:
    
private:
    [[deprecated("GameObject::isTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isTrigger();
public:
    
private:
    [[deprecated("GameObject::loadGroupsFromString not implemented")]]
    /**
     * @note[short] Android
     */
    void loadGroupsFromString(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::makeInvisible not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5a53a0
     * @note[short] Android
     */
    TodoReturn makeInvisible();
public:
    
private:
    [[deprecated("GameObject::makeVisible not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn makeVisible();
public:
    
private:
    [[deprecated("GameObject::opacityModForMode not implemented")]]
    /**
     * @note[short] Android
     */
    float opacityModForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::parentForZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCSpriteBatchNode* parentForZLayer(int p0, bool p1, int p2);
public:
    
private:
    [[deprecated("GameObject::perspectiveColorFrame not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string perspectiveColorFrame(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameObject::perspectiveFrame not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string perspectiveFrame(char const* p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x1f9910
     * @note[short] MacOS (Intel): 0x24c560
     * @note[short] Windows: 0x1a7520
     * @note[short] Android
     */
    void playDestroyObjectAnim(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0x1a7040
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, float p10, float p11);

    /**
     * @note[short] Windows: 0x1a6f50
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4);

    /**
     * @note[short] MacOS (ARM): 0x4df690
     * @note[short] MacOS (Intel): 0x5a5440
     * @note[short] Windows: 0x196430
     * @note[short] Android
     */
    void playShineEffect();
    
private:
    [[deprecated("GameObject::quickUpdatePosition not implemented")]]
    /**
     * @note[short] Android
     */
    void quickUpdatePosition();
public:
    
private:
    [[deprecated("GameObject::quickUpdatePosition2 not implemented")]]
    /**
     * @note[short] Android
     */
    void quickUpdatePosition2();
public:
    
private:
    [[deprecated("GameObject::removeColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    void removeColorSprite();
public:
    
private:
    [[deprecated("GameObject::removeGlow not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x58cb90
     * @note[short] Android
     */
    void removeGlow();
public:
    
private:
    [[deprecated("GameObject::reorderColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    void reorderColorSprite();
public:
    
private:
    [[deprecated("GameObject::resetColorGroups not implemented")]]
    /**
     * @note[short] Android
     */
    void resetColorGroups();
public:
    
private:
    [[deprecated("GameObject::resetGroupDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    void resetGroupDisabled();
public:
    
private:
    [[deprecated("GameObject::resetGroups not implemented")]]
    /**
     * @note[short] Android
     */
    void resetGroups();
public:
    
private:
    [[deprecated("GameObject::resetMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void resetMainColorMode();
public:
    
private:
    [[deprecated("GameObject::resetMID not implemented")]]
    /**
     * @note[short] Android
     */
    void resetMID();
public:
    
private:
    [[deprecated("GameObject::resetMoveOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void resetMoveOffset();
public:
    
private:
    [[deprecated("GameObject::resetRScaleForced not implemented")]]
    /**
     * @note[short] Android
     */
    void resetRScaleForced();
public:
    
private:
    [[deprecated("GameObject::resetSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void resetSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::setAreaOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setAreaOpacity(float p0, float p1, int p2);
public:
    
private:
    [[deprecated("GameObject::setCustomZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void setCustomZLayer(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setDefaultMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setGlowOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::setLastPosition not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5b2aa0
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& p0);
public:
    
private:
    [[deprecated("GameObject::setMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setSecondaryColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setupColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    void setupColorSprite(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::setupPixelScale not implemented")]]
    /**
     * @note[short] Android
     */
    void setupPixelScale();
public:
    
private:
    [[deprecated("GameObject::setupSpriteSize not implemented")]]
    /**
     * @note[short] Android
     */
    void setupSpriteSize();
public:
    
private:
    [[deprecated("GameObject::shouldBlendColor not implemented")]]
    /**
     * @note[short] Android
     */
    bool shouldBlendColor(GJSpriteColor* p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::shouldLockX not implemented")]]
    /**
     * @note[short] Android
     */
    bool shouldLockX();
public:
    
private:
    [[deprecated("GameObject::shouldNotHideAnimFreeze not implemented")]]
    /**
     * @note[short] Android
     */
    bool shouldNotHideAnimFreeze();
public:
    
private:
    [[deprecated("GameObject::shouldShowPickupEffects not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x24c330
     * @note[short] Android
     */
    bool shouldShowPickupEffects();
public:
    
private:
    [[deprecated("GameObject::slopeFloorTop not implemented")]]
    /**
     * @note[short] Android
     */
    bool slopeFloorTop();
public:
    
private:
    [[deprecated("GameObject::slopeWallLeft not implemented")]]
    /**
     * @note[short] Android
     */
    bool slopeWallLeft();
public:

    /**
     * @note[short] Windows: 0x19e430
     * @note[short] Android
     */
    double slopeYPos(cocos2d::CCRect p0);

    /**
     * @note[short] Windows: 0x19e430
     * @note[short] Android
     */
    double slopeYPos(float p0);
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Android
     */
    double slopeYPos(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::spawnDefaultPickupParticle not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x24c390
     * @note[short] Android
     */
    void spawnDefaultPickupParticle(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameObject::updateBlendMode not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBlendMode();
public:
    
private:
    [[deprecated("GameObject::updateCustomColorType not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCustomColorType(short p0);
public:

    /**
     * @note[short] Windows: 0x1956d0
     * @note[short] Android
     */
    void updateCustomScaleX(float p0);

    /**
     * @note[short] Windows: 0x195760
     * @note[short] Android
     */
    void updateCustomScaleY(float p0);
    
private:
    [[deprecated("GameObject::updateHSVState not implemented")]]
    /**
     * @note[short] Android
     */
    void updateHSVState();
public:

    /**
     * @note[short] MacOS (ARM): 0x4ea58c
     * @note[short] MacOS (Intel): 0x5b1730
     * @note[short] Windows: 0x19e7b0
     * @note[short] Android
     */
    void updateIsOriented();
    
private:
    [[deprecated("GameObject::updateMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    void updateMainColor();
public:
    
private:
    [[deprecated("GameObject::updateMainColorOnly not implemented")]]
    /**
     * @note[short] Android
     */
    void updateMainColorOnly();
public:
    
private:
    [[deprecated("GameObject::updateMainOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void updateMainOpacity();
public:

    /**
     * @note[short] Windows: 0x19e370
     * @note[short] Android
     */
    void updateObjectEditorColor();
    
private:
    [[deprecated("GameObject::updateSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::updateSecondaryColorOnly not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSecondaryColorOnly();
public:
    
private:
    [[deprecated("GameObject::updateSecondaryOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSecondaryOpacity();
public:
    
private:
    [[deprecated("GameObject::updateStartPos not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x591af0
     * @note[short] Android
     */
    void updateStartPos();
public:
    
private:
    [[deprecated("GameObject::updateUnmodifiedPositions not implemented")]]
    /**
     * @note[short] Android
     */
    void updateUnmodifiedPositions();
public:
    
private:
    [[deprecated("GameObject::usesFreezeAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    void usesFreezeAnimation();
public:
    
private:
    [[deprecated("GameObject::usesSpecialAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    void usesSpecialAnimation();
public:
    int m_someOtherIndex;
    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    cocos2d::ccColor3B m_maybeGroupColor;
    bool m_unk280;
    bool m_unk281;
    float m_blackChildRelated;
    bool m_unk288;
    bool m_editorEnabled;
    bool m_isGroupDisabled;
    bool m_unk28B;
    bool m_unk28c;
    int m_activeMainColorID;
    int m_activeDetailColorID;
    bool m_baseUsesHSV;
    bool m_detailUsesHSV;
    float m_positionXOffset;
    float m_positionYOffset;
    float m_rotationXOffset;
    float m_unk2A8;
    float m_rotationYOffset;
    float m_unk2B0;
    float m_scaleXOffset;
    float m_scaleYOffset;
    float m_unk2BC;
    float m_unk2C0;
    bool m_tempOffsetXRelated;
    bool m_isFlipX;
    bool m_isFlipY;
    cocos2d::CCPoint m_customBoxOffset;
    bool m_boxOffsetCalculated;
    cocos2d::CCPoint m_boxOffset;
    OBB2D* m_orientedBox;
    bool m_shouldUseOuterOb;
    cocos2d::CCSprite* m_glowSprite;
    int m_unk2F8;
    float m_width;
    float m_height;
    bool m_hasSpecialChild;
    bool m_isActivated;
    bool m_isDisabled2;
    cocos2d::CCParticleSystemQuad* m_particle;
    gd::string m_particleString;
    bool m_hasParticles;
    bool m_particleUseObjectColor;
    bool m_hasColorSprite;
    cocos2d::CCPoint m_unk31c;
    bool m_isSomeSpriteScalable;
    cocos2d::CCRect m_textureRect;
    bool m_isDirty;
    bool m_isObjectPosDirty;
    bool m_isUnmodifiedPosDirty;
    float m_unk33C;
    cocos2d::CCRect m_objectRect;
    bool m_isObjectRectDirty;
    bool m_isOrientedBoxDirty;
    bool m_colorSpriteLocked;
    bool m_unk353;
    bool m_canRotateFree;
    bool m_isMirroredByScale;
    int m_linkedGroup;
    int m_unk35C;
    short m_colorType;
    short m_childColorType;
    bool m_shouldBlendBase;
    bool m_shouldBlendDetail;
    bool m_hasCustomChild;
    bool m_unk367;
    cocos2d::CCSprite* m_colorSprite;
    bool m_unk370;
    float m_objectRadius;
    bool m_isRotationAligned;
    float m_spriteWidthScale;
    float m_spriteHeightScale;
    int m_uniqueID;
    GameObjectType m_objectType;
    GameObjectType m_savedObjectType;
    int m_unk390;
    float m_unmodifiedPositionX;
    float m_unmodifiedPositionY;
    double m_positionX;
    double m_positionY;
    cocos2d::CCPoint m_startPosition;
    bool m_unk3b8;
    bool m_hasNoAudioScale;
    bool m_isDisabled;
    float m_startRotationX;
    float m_startRotationY;
    float m_startScaleX;
    float m_startScaleY;
    float m_customScaleX;
    float m_customScaleY;
    bool m_startFlipX;
    bool m_startFlipY;
    bool m_unk3ee;
    bool m_isInvisible;
    int m_unk3D8;
    short m_unk3DC;
    bool m_unk3DE;
    short m_unk3E0;
    short m_unk3E2;
    short m_enterChannel;
    short m_objectMaterial;
    bool m_unk3E8;
    short m_parentMode;
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    bool m_unk3F8;
    bool m_isSolid;
    bool m_ignoreEnter;
    bool m_ignoreFade;
    bool m_unk3FC;
    bool m_unk3FD;
    bool m_customSpriteColor;
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    int m_defaultZOrder;
    bool m_unk40C;
    bool m_colorZLayerRelated;
    bool m_unk40E;
    float m_unk410;
    float m_unk414;
    bool m_particleLocked;
    int m_property53;
    bool m_gmUnkBool4Related;
    bool m_unk421;
    bool m_unk422;
    bool m_cantColorGlow;
    float m_opacityMod;
    bool m_slopeBugged;
    int m_slopeDirection;
    bool m_maybeShouldFixSlopes;
    float m_opacityMod2;
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    bool m_unk448;
    ZLayer m_defaultZLayer;
    bool m_zFixedZLayer;
    ZLayer m_zLayer;
    int m_zOrder;
    bool m_unk45c;
    bool m_isSelected;
    float m_unk460;
    cocos2d::CCPoint m_unk464;
    bool m_shouldUpdateColorSprite;
    bool m_unk46d;
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    int m_enabledGroupsCounter;
    bool m_unk4ac;
    bool m_unk4ad;
    bool m_isNoTouch;
    cocos2d::CCSize m_unk4b0;
    cocos2d::CCPoint m_lastPosition;
    int m_unk4C0;
    int m_unk4C4;
    int m_unk4C8;
    int m_unk4CC;
    int m_unk4D0;
    bool m_unk4D4;
    bool m_unk4D5;
    bool m_unk4D6;
    bool m_unk4D7;
    bool m_unk4D8;
    bool m_unk4D9;
    bool m_unk4DA;
    bool m_isHighDetail;
    ColorActionSprite* m_unk4E0;
    ColorActionSprite* m_unk4E8;
    GJEffectManager* m_goEffectManager;
    bool m_unk4F8;
    bool m_isDecoration;
    bool m_isDecoration2;
    bool m_unk4fb;
    bool m_maybeNotColorable;
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    bool m_unk507;
    bool m_unk508;
    float m_unk50C;
    float m_pixelScaleX;
    float m_pixelScaleY;
    int m_property155;
    int m_property156;
    GLubyte m_areaOpacityRelated;
    float m_areaOpacityRelated2;
    int m_areaOpacityRelated3;
    int m_unk52C;
    bool m_unk530;
    bool m_unk531;
    bool m_unk532;
};
