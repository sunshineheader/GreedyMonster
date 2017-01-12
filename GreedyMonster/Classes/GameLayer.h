#ifndef __GAME__LAYER__H__H__
#define __GAME__LAYER__H__H__
#include "BasicLayer.h"

class GameScene;
class GameLayer :public BasicLayer
{
public:
	static GameLayer* create(GameScene* gameScene);
private:
	virtual bool init(GameScene* gameScene);
	void doUI();
private:
	void onEnterGameStart(float delta);
	void onGameStart();
	void onGameEnd();
private:
	GameScene* m_gameScene;
};
#endif
