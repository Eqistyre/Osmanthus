//
//  ResultScene.h
//  Demo
//
//  Created by 张仲昊 on 15/12/13.
//
//

#ifndef ResultScene_h
#define ResultScene_h

#include "cocos2d.h"

class ResultScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(ResultScene);
};

#endif /* ResultScene_h */
