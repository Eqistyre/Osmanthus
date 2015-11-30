//
//  SoundManager.cpp
//
//
//  Created by 张仲昊 on 15/11/26.
//
//

#include "SoundManager.h"
//#include "DataPool.h"

SoundManager* SoundManager::m_pSoundManager = NULL;
SoundManager::SoundManager():
m_bBgMusicStop(false),
m_bEffectStop(false),
m_bInited(false)
{
}

SoundManager::~SoundManager()
{
}

SoundManager* SoundManager::shareSoundManager()
{
    if (!m_pSoundManager)
    {
        m_pSoundManager = new SoundManager();
    }
    return m_pSoundManager;
}

void SoundManager::preloadBackgroundMusic(const char* file)
{
    SimpleAudioEngine::getInstance()->preloadBackgroundMusic(file);
}

void SoundManager::preloadEffect(const char* file)
{
    SimpleAudioEngine::getInstance()->preloadEffect(file);
}

void SoundManager::playBackgroundMusic(const char* file, bool loop)
{
    if (!isBackgroundMusicStop())
    {
        if (m_nBGMName != file)
        {
            m_nBGMName = file;
            SimpleAudioEngine::getInstance()->playBackgroundMusic(file, loop);
        }
    }
}

void SoundManager::playEffect(const char* file, bool loop)
{
    if (!isEffectStop())
    {
        SimpleAudioEngine::getInstance()->playEffect(file, loop);
    }
}

void SoundManager::stopBackgroundMusic()
{
    SimpleAudioEngine::getInstance()->stopBackgroundMusic();
    m_bBgMusicStop = true;
}

void SoundManager::resumeBackgroundMusic()
{
    SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
    m_bBgMusicStop = false;
}

void SoundManager::stopEffect()
{
    SimpleAudioEngine::getInstance()->stopAllEffects();
    m_bEffectStop = true;
}

void SoundManager::resumeEffect()
{
    SimpleAudioEngine::getInstance()->resumeAllEffects();
    m_bEffectStop = false;
}

void SoundManager::enterBackground()
{
    if (!isBackgroundMusicStop()) {
        SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
    }
}

void SoundManager::enterForeground()
{
    if (!isBackgroundMusicStop()) {
        SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
    }
}

void SoundManager::init()
{
    if (!m_bInited) {
        //		m_bBgMusicStop = getAllUserData().isBackgroundMusicStop();
        //		m_bEffectStop = getAllUserData().isEffectMusicStop();
        m_bInited = true;
    }
    
}