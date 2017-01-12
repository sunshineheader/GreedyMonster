#include "GameScene.h"
#include "OverScene.h"
#include "GameLayer.h"

GameLayer* GameLayer::create(GameScene* gameScene)
{
	GameLayer* gameLayer = new (std::nothrow) GameLayer();
	if (gameLayer && gameLayer->init(gameScene))
	{
		gameLayer->autorelease();
		return gameLayer;
	}
	CC_SAFE_DELETE(gameLayer);
	return nullptr;
}
bool GameLayer::init(GameScene* gameScene)
{
	if (!BasicLayer::init())
	{
		return false;
	}
	m_gameScene = gameScene;
	this->_doUI = std::bind(&GameLayer::doUI, this);
	return true;
}
void GameLayer::doUI()
{
	auto rootNode = CSLoader::createNode("GameScene/GameLayer.csb");
	addChild(rootNode);

	scheduleOnce(schedule_selector(GameLayer::onEnterGameStart),10);
}

void GameLayer::onEnterGameStart(float delta)
{
	this->onGameStart();
}


void GameLayer::onGameStart()
{
	this->onGameEnd();
}

void GameLayer::onGameEnd()
{
	m_gameScene->onReplaceScene(OverScene::create(),true);
}