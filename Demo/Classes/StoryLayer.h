//
//  StoryLayer.h
//  Demo
//
//  Created by 张仲昊 on 15/11/30.
//
//

#ifndef StoryLayer_h
#define StoryLayer_h

#include "cocos2d.h"
//#include "DataPool.h"

using namespace std;
USING_NS_CC;

class CStoryLayer:
public Layer
{
public:
    CStoryLayer();
    ~CStoryLayer();
    static CStoryLayer* create(int id);
    
private:
    virtual bool init(int id);
    virtual bool TouchBegan(Touch *pTouch, Event *pEvent);
    
    void showNextContext();
    
    //use hash table get the context
    int m_nID;
    int m_nIndex;
    LabelAtlas *m_pName;
    LabelAtlas *m_pContext;
};
#endif /* StoryLayer_h */
