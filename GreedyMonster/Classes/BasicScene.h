#ifndef __BASIC__SCENE__H__H__
#define __BASIC__SCENE__H__H__
#include "GameHelper.h"

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"

using namespace cocos2d;
using namespace cocos2d::ui;
using namespace cocostudio::timeline;

class BasicScene :public cocos2d::Scene
{
protected:
	BasicScene();
	~BasicScene();
protected:
	virtual bool init();
	virtual void onEnter();
	virtual void onExit();
public:
	void onReplaceScene(Scene* basic, bool isRandom = false);
	void onPauseGame();
	void onResumeGame();
protected:
	std::function<void()>_doEvent;
	std::function<void()>_doUI;
	std::function<void()>_removeEvent;
protected:
};

#endif
