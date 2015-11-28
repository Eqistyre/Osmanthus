//This is the game beginner,not the menu

#ifndef _OSMANTHUS_MENU_H_
#define _OSMANTHUS_MENU_H_

#include "cocos2d.h"

class OsmanthusMenu : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(OsmanthusMenu);
};

#endif