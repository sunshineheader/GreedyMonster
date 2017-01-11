#ifndef __BASIC__LAYER__H__H__
#define __BASIC__LAYER__H__H__

#include "GameHelper.h"

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"

using namespace cocos2d;
using namespace cocos2d::ui;
using namespace cocostudio::timeline;

class BasicLayer:public cocos2d::Layer 
{
protected:
	BasicLayer();
	~BasicLayer();
protected:
	virtual bool init();
	virtual void onEnter();
	virtual void onExit();
protected:
	std::function<void()>_doEvent;
	std::function<void()>_doUI;
	std::function<void()>_removeEvent;
protected:
};

#endif
