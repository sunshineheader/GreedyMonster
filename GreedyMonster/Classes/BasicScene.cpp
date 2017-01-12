#include "BasicScene.h"

BasicScene::BasicScene()
	: _doEvent(nullptr)
	, _doUI(nullptr)
	, _removeEvent(nullptr)
{}
BasicScene::~BasicScene()
{}

bool BasicScene::init()
{
	if (!cocos2d::Scene::init())
	{
		return false;
	}
	return true;
}
void BasicScene::onEnter()
{
	cocos2d::Scene::onEnter();
	if (_doEvent)	_doEvent();
	if (_doUI)		_doUI();
}
void BasicScene::onExit()
{
	cocos2d::Scene::onExit();
	if (_removeEvent)		_removeEvent();

}

void BasicScene::onReplaceScene(Scene* basic, bool isRandom)
{
	Scene* target = nullptr;
	if (isRandom) {
		target = GameHelper::onRandomScene(basic);
	}
	else {
		target = basic;
	}
	Director::getInstance()->replaceScene(target);
}

void BasicScene::onPauseGame()
{
	Director::getInstance()->pause();
}
void BasicScene::onResumeGame()
{
	Director::getInstance()->resume();
}
