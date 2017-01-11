#ifndef __LOGIN__SCENE__H__H__
#define __LOGIN__SCENE__H__H__
#include "BasicScene.h"

class LoginLayer;
class MenuLayer;

class LoginScene :public BasicScene
{
public:
	static LoginScene* create();
protected:
	LoginScene();
	~LoginScene();
private:
	virtual bool init() override;
	void doUI();
private:
	LoginLayer* m_loginLayer;
	MenuLayer*  m_menuLayer;

};

#endif
