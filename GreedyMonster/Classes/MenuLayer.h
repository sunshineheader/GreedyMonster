#ifndef __MENU__LAYER__H__H__
#define __MENU__LAYER__H__H__
#include "BasicLayer.h"

class MenuLayer :public BasicLayer
{
public:
	static MenuLayer* create();
protected:
	MenuLayer();
	~MenuLayer();
private:
	void pauseBtnCallBack(cocos2d::Ref* psender);
	void shopBtnCallBack(cocos2d::Ref* psender);
private:
	virtual bool init() override;
	void doUI();

};

#endif
