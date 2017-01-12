#ifndef __OVER__LAYER__H__H__
#define __OVER__LAYER__H__H__
#include "BasicLayer.h"

class OverScene;
class OverLayer :public BasicLayer{
public:
	static OverLayer* create(OverScene* overScene);
private:
	virtual bool init(OverScene* overScene);
	void doUI();
private:
	void backBtnCallBack(cocos2d::Ref* ref);
	void restratBtnCallBack(cocos2d::Ref* ref);

private:
	OverScene* m_overScene;
};
#endif