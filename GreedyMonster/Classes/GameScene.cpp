#include "GameScene.h"

GameScene::GameScene()

{}
GameScene::~GameScene()
{}

GameScene* GameScene::create()
{
	GameScene* gameScene = new (std::nothrow) GameScene();
	if (gameScene && gameScene->init())
	{
		gameScene->autorelease();
		return gameScene;
	}
	CC_SAFE_DELETE(gameScene);
	return nullptr;
}

bool GameScene::init()
{
	if (!BasicScene::init())
	{
		return false;
	}
	this->_doUI = std::bind(&GameScene::doUI, this);
	return true;
}

void GameScene::doUI()
{
	auto rootNode = CSLoader::createNode("GameScene/GameScene.csb");
	addChild(rootNode);
}
