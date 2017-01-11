#ifndef __LOGIN__LAYER__H__H__
#define __LOGIN__LAYER__H__H__
#include "BasicLayer.h"
class LoginScene;
class LoginLayer :public BasicLayer
{
public:
	static LoginLayer* create();

protected:
	LoginLayer();
	~LoginLayer();
private:
	virtual bool init();
	void doUI();
private:
	void startBtnCallBack(cocos2d::Ref* psender);
private:
	LoginScene* m_loginScene;
};

#endif
