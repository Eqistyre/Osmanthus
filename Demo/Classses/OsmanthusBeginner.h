//This is the game beginner,not the menu
#ifndef _OSMANTHUS_BEGINNER_H_
#define _OSMANTHUS_BEGINNER_H_

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"

class OsmanthusBeginner : public cocos2d::Layer
{
public:
    void onClick(Ref*, cocos2d::ui::TouchEventType type);
    
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(OsmanthusBeginner);
};

#endif // __HELLOWORLD_SCENE_H__

