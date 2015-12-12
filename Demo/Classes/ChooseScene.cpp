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
    auto rootNode = CSLoader::createNode("OsmanthusBeginner.csb");
    
    addChild(rootNode);
    
    return true;
}
