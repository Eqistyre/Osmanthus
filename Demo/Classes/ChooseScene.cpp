//
//  ChooseScene.cpp
//  Demo
//
//  Created by 张仲昊 on 15/12/12.
//
//

#include "ChooseScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "Global.h"
#include "SoundManager.h"
#include "OsmanthusMenu.h"
#include "CharacterLayer.h"
#include "SceneManager.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* ChooseScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    // 'layer' is an autorelease object
    auto layer = ChooseScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

bool ChooseScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    //in order to change it in the future.
    auto ChooseSceneNode = CSLoader::createNode("ChooseScene.csb");
    addChild(ChooseSceneNode);
    auto MenuClickLayerNode = CSLoader::createNode("MenuClickLayer.csb");
    addChild(MenuClickLayerNode);
    MenuClickLayerNode->setVisible(false);
    
    cocos2d::ui::Button* ChooseSettingBtn  = (cocos2d::ui::Button*)ChooseSceneNode->getChildByName("ChooseSettingBtn");
    ChooseSettingBtn->addTouchEventListener([=](Ref* pSender,cocos2d::ui::Widget::TouchEventType type) {
        switch(type) {
            case cocos2d::ui::Widget::TouchEventType::BEGAN:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::MOVED:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::ENDED:
                MenuClickLayerNode->setVisible(true);
                break;
                
            case cocos2d::ui::Widget::TouchEventType::CANCELED:
                break;
                
            default:
                break;
        }
    });

    //Code reuse from GameRunning.cpp
    cocos2d::ui::Button* ContinueBtn2  = (cocos2d::ui::Button*)MenuClickLayerNode->getChildByName("ContinueBtn2");
    ContinueBtn2->addTouchEventListener([=](Ref* pSender,cocos2d::ui::Widget::TouchEventType type) {
        switch(type) {
            case cocos2d::ui::Widget::TouchEventType::BEGAN:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::MOVED:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::ENDED:
                MenuClickLayerNode->setVisible(false);
                break;
                
            case cocos2d::ui::Widget::TouchEventType::CANCELED:
                break;
                
            default:
                break;
        }
    });
    
    //Code reuse from GameRunning.cpp
    cocos2d::ui::Button* BackBtn2  = (cocos2d::ui::Button*)MenuClickLayerNode->getChildByName("BackBtn2");
    BackBtn2->addTouchEventListener([=](Ref* pSender,cocos2d::ui::Widget::TouchEventType type) {
        switch(type) {
            case cocos2d::ui::Widget::TouchEventType::BEGAN:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::MOVED:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::ENDED:
                //changeScene in the future I think I should give some transitions
                SceneManager::sharedSceneManager()->changeScene(SceneManager::en_OsmanthusBeginner);
                //changeScene in the future I think I should give some transitions
                SoundManager::shareSoundManager()->stopBackgroundMusic();
                break;
                
            case cocos2d::ui::Widget::TouchEventType::CANCELED:
                break;
                
            default:
                break;
        }
    });
    
    //Code reuse from GameRunning.cpp
    cocos2d::ui::Button* ExitBtn2  = (cocos2d::ui::Button*)MenuClickLayerNode->getChildByName("ExitBtn2");
    ExitBtn2->addTouchEventListener([=](Ref* pSender,cocos2d::ui::Widget::TouchEventType type) {
        switch(type) {
            case cocos2d::ui::Widget::TouchEventType::BEGAN:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::MOVED:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::ENDED:
                exit(0);
                break;
                
            case cocos2d::ui::Widget::TouchEventType::CANCELED:
                break;
                
            default:
                break;
        }
    });
    
    cocos2d::ui::Button* GuoyeBtn = (cocos2d::ui::Button*)ChooseSceneNode->getChildByName("GuoyeBtn");
    GuoyeBtn->addTouchEventListener([=](Ref* pSender,cocos2d::ui::Widget::TouchEventType type) {
        switch(type) {
            case cocos2d::ui::Widget::TouchEventType::BEGAN:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::MOVED:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::ENDED:
                //changeScene in the future I think I should give some transitions
                SceneManager::sharedSceneManager()->changeScene(SceneManager::en_Result);
                //changeScene in the future I think I should give some transitions
                SoundManager::shareSoundManager()->stopBackgroundMusic();
                break;
                
            case cocos2d::ui::Widget::TouchEventType::CANCELED:
                break;
                
            default:
                break;
        }
    });
    return true;
}
