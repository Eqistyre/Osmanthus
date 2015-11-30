//
//  CharacterLayer.cpp
//  Demo
//
//  Created by 张仲昊 on 15/11/30.
//
//

#include "CharacterLayer.h"

//Use the layer in order tp get a new Character
cocos2d::Scene* CharacterLayer::createScene() {
    auto CharacterScene = cocos2d::Scene::create();
    auto CharacterNode = cocos2d::CSLoader::createNode("CharacterLayer.csb");
    auto CharacterLayer = Layer::create();
    CharacterLayer->addChild(CharacterNode);
    CharacterScene->addChild(CharacterLayer);
    return CharacterScene;
};

bool CharacterLayer::init() {
    if( !Layer::init() ) {
        return false;
    }
    
    auto CharacterNode = cocos2d::CSLoader::createNode("CharacterLayer.csb");
    auto CharacterLayer = Layer::create();
    CharacterLayer->addChild(CharacterNode);
    
    return true;
};