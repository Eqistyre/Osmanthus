//
//  GameRunning.cpp
//  
//
//  Created by 张仲昊 on 15/11/29.
//
//

#include "GameRunning.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "Global.h"
#include "SoundManager.h"
#include "OsmanthusMenu.h"
#include "CharacterLayer.h"
#include "SceneManager.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* GameRunning::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    // 'layer' is an autorelease object
    auto layer = GameRunning::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

bool GameRunning::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto RootNode = CSLoader::createNode("GameRunning.csb");
    auto GameRunningScene = Scene::create();
    GameRunningScene->addChild(RootNode);
    
    auto GameRunningLayerNode = CSLoader::createNode("GameRunningLayer.csb");
    auto GameRunningLayer = Layer::create();
    GameRunningLayer->addChild(GameRunningLayerNode);;
    GameRunningScene->addChild(GameRunningLayer);
    this->addChild(GameRunningScene);
    
    auto BeginnerNode = CSLoader::createNode("BeginnerLayer.csb");
    auto BeginnerLayer = Layer::create();
    BeginnerLayer->addChild(BeginnerNode);
//    CharacterLayer *CharacterLayer = CharacterLayer::create();
//    this->addChild(CharacterLayer);
//    auto CharacterNode = cocos2d::CSLoader::createNode("CharacterLayer.csb");
//    auto CharacterLayer = Layer::create();
//    CharacterLayer->addChild(CharacterNode);
//    this->addChild(CharacterLayer);
    
    auto MenuClickLayerNode = CSLoader::createNode("MenuClickLayer.csb");
    auto MenuClickLayer = Layer::create();
    MenuClickLayer->addChild(MenuClickLayerNode);
    this->addChild(MenuClickLayer);
    MenuClickLayer->setVisible(false);
    
    //Addd menuClick backevent
    cocos2d::ui::Button* SettingBtn  = (cocos2d::ui::Button*)GameRunningLayerNode->getChildByName("SettingBtn");
    SettingBtn->addTouchEventListener([=](Ref* pSender,cocos2d::ui::Widget::TouchEventType type) {
        switch(type) {
            case cocos2d::ui::Widget::TouchEventType::BEGAN:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::MOVED:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::ENDED:
                MenuClickLayer->setVisible(true);
                break;
                
            case cocos2d::ui::Widget::TouchEventType::CANCELED:
                break;
                
            default:
                break;
        }
    });
    
    cocos2d::ui::Button* ContinueBtn2  = (cocos2d::ui::Button*)MenuClickLayerNode->getChildByName("ContinueBtn2");
    ContinueBtn2->addTouchEventListener([=](Ref* pSender,cocos2d::ui::Widget::TouchEventType type) {
        switch(type) {
            case cocos2d::ui::Widget::TouchEventType::BEGAN:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::MOVED:
                break;
                
            case cocos2d::ui::Widget::TouchEventType::ENDED:
                MenuClickLayer->setVisible(false);
                break;
                
            case cocos2d::ui::Widget::TouchEventType::CANCELED:
                break;
                
            default:
                break;
        }
    });

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
    
    return true;
}