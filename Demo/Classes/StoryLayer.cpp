//
//  StoryLayer.cpp
//  Demo
//
//  Created by 张仲昊 on 15/11/30.
//
//

#include "StoryLayer.h"
#include "Global.h"

CStoryLayer::CStoryLayer():
m_nIndex(0)
{
}

CStoryLayer::~CStoryLayer()
{
}

CStoryLayer* CStoryLayer::create(int id)
{
    CStoryLayer *pRet = new CStoryLayer();
    if (pRet && pRet->init(id))
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        delete pRet;
        pRet = NULL;
        return NULL;
    }
}

bool CStoryLayer::init(int id)
{

    return true;
}

void CStoryLayer::showNextContext()
{

}

bool CStoryLayer::TouchBegan(Touch *pTouch, Event *pEvent)
{
    return true;
}