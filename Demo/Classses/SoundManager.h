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
private:
	void init();
};

#endif // _SOUND_MANAGER_H_