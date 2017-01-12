#include "OverLayer.h"

#include "OverScene.h"

OverScene::OverScene()
{}
OverScene::~OverScene()
{}

OverScene* OverScene::create()
{
	OverScene* overScene = new (std::nothrow) OverScene();
	if (overScene && overScene->init())
	{
		overScene->autorelease();
		return overScene;
	}
	CC_SAFE_DELETE(overScene);
	return nullptr;
}

bool OverScene::init()
{
	if (!BasicScene::init())
	{
		return false;
	}
	this->_doUI = std::bind(&OverScene::doUI, this);
	return true;
}

void OverScene::doUI()
{
	auto rootNode = CSLoader::createNode("OverScene/OverScene.csb");
	addChild(rootNode);

	m_overLayer = OverLayer::create(this);
	addChild(m_overLayer);
}
