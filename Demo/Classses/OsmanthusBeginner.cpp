//This is the game beginner,not the menu
#include "OsmanthusBeginner.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
USING_NS_CC;

using namespace cocostudio::timeline;

Scene* OsmanthusBeginner::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = OsmanthusBeginner::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool OsmanthusBeginner::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    //create a rootNode and add the rootNode as the first root
    auto rootNode = CSLoader::createNode("OsmanthusBeginner.csb");
    addChild(rootNode);
    
    cocos2d::ui::Button*  BeginnerStartBtn = (cocos2d::ui::Button*)rootNode->getChildByName("BeginnerStartBtn");
    
    BeginnerStartBtn->addTouchEventListener([](Ref* pSender,cocos2d::ui::Widget::TouchEventType type) {
        switch(type) {
            case cocos2d::ui::Widget::TouchEventType::BEGAN:
                CCLOG("BEGAN");
                break;
                
            case cocos2d::ui::Widget::TouchEventType::MOVED:
                CCLOG("MOVED");
                break;
                
            case cocos2d::ui::Widget::TouchEventType::ENDED:
                CCLOG("ENDED");
                break;
                
            case cocos2d::ui::Widget::TouchEventType::CANCELED:
                CCLOG("CANCELED");
                break;
                
            default:
                break;
        }
    });
    return true;
}

