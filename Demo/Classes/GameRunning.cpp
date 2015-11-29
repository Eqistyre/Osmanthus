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
    
    return true;
}