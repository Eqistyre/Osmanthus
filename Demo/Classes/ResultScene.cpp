//
//  ResultScene.cpp
//  Demo
//
//  Created by 张仲昊 on 15/12/13.
//
//

#include "ResultScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "Global.h"
#include "SoundManager.h"
#include "OsmanthusMenu.h"
#include "CharacterLayer.h"
#include "SceneManager.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* ResultScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    // 'layer' is an autorelease object
    auto layer = ResultScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

bool ResultScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto ResultSceneNode = CSLoader::createNode("ResultScene.csb");
    addChild(ResultSceneNode);
    return true;
}
