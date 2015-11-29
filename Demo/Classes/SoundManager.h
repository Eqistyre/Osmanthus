//
//  SoundManager.h
//
//
//  Created by 张仲昊 on 15/11/26.
//
//

#ifndef _SOUND_MANAGER_H_
#define _SOUND_MANAGER_H_

#include "cocos2d.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;
using namespace CocosDenshion;
using namespace std;

class SoundManager
{
public:
    SoundManager();
    ~SoundManager();
    static SoundManager* shareSoundManager();
    
    void preloadBackgroundMusic(const char* file);
    void preloadEffect(const char* file);
    
    void playBackgroundMusic(const char* file, bool loop = true);
    void playEffect(const char* file, bool = false);
    
    bool isBackgroundMusicStop() const { return m_bBgMusicStop; }
    void stopBackgroundMusic();
    void resumeBackgroundMusic();
    
    bool isEffectStop() const { return m_bEffectStop; }
    void stopEffect();
    void resumeEffect();
    
    void enterBackground();
    void enterForeground();
    
private:
    void init();
    
    static SoundManager *m_pSoundManager;
    bool m_bBgMusicStop;
    bool m_bEffectStop;
    bool m_bInited;
    string m_nBGMName;
};

#endif // _SOUND_MANAGER_H_