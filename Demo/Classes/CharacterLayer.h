#ifndef CharacterLayer_h
#define CharacterLayer_h

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"

class CharacterLayer : public cocos2d::Layer {
public:
    //add character shake
    void Shake();
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(CharacterLayer);
};
#endif /*CharacterLayer_h */