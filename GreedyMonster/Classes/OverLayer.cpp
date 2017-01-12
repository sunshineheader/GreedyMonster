#include "LoginScene.h"
#include "GameScene.h"
#include "OverScene.h"
#include "OverLayer.h"

OverLayer* OverLayer::create(OverScene* overScene)
{
	OverLayer* overLayer = new (std::nothrow) OverLayer();
	if (overLayer && overLayer->init(overScene))
	{
		overLayer->autorelease();
		return overLayer;
	}
	CC_SAFE_DELETE(overLayer);
	return nullptr;
}

bool OverLayer::init(OverScene* overScene)
{
	if (!BasicLayer::init())
	{
		return false;
	}
	m_overScene = overScene;
	this->_doUI = std::bind(&OverLayer::doUI, this);
	return true;
}
void OverLayer::doUI()
{
	auto rootNode = CSLoader::createNode("OverScene/OverLayer.csb");
	addChild(rootNode);


	Button* backBtn = static_cast<Button*>(GameHelper::seekNodeByName(rootNode, "backBtn"));
	backBtn->addClickEventListener(CC_CALLBACK_1(OverLayer::backBtnCallBack, this));

	Button* restratBtn = static_cast<Button*>(GameHelper::seekNodeByName(rootNode, "restratBtn"));
	restratBtn->addClickEventListener(CC_CALLBACK_1(OverLayer::restratBtnCallBack, this));

}

void OverLayer::backBtnCallBack(cocos2d::Ref* ref)
{
	m_overScene->onReplaceScene(GameScene::create(), true);
}
void OverLayer::restratBtnCallBack(cocos2d::Ref* ref)
{
	m_overScene->onReplaceScene(LoginScene::create(), true);
}