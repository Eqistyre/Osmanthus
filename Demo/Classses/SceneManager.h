//
//  SceneManager.h
//  
//
//  Created by 张仲昊 on 15/11/29.
//
//

#ifndef ____SceneManager__
#define ____SceneManager__

#include "cocos2d.h"

using namespace cocos2d;

class SceneManager : public Ref {
public:
    
    enum EnumSceneType
    {
        en_OsmanthusBeginner,
        en_GameRunning,
    };
    
    static SceneManager* sharedSceneManager();;
    
    void changeScene(EnumSceneType enScenType);
    
    void changeScene(EnumSceneType enScenType, bool isTrans);
    
    void changeScene(EnumSceneType enScenType, bool isTrans, float time);
    
    void pushScene(EnumSceneType enSceneType);
    
    void popScene();
private:
    
    static SceneManager* mSceneManager;
    
    Scene* getSceneByType(EnumSceneType enSceneType);
};

#endif
