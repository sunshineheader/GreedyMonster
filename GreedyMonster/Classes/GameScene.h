#ifndef __GAME__SCENE__H__H__
#define __GAME__SCENE__H__H__
#include "BasicScene.h"
class GameLayer;
class GameScene :public BasicScene
{
public:
	static GameScene* create();
protected:
	GameScene();
	~GameScene();
private:
	virtual bool init() override;
	void doUI();
private:
	GameLayer* m_gameLayer;
};
#endif

