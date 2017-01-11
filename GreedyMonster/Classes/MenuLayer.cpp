#include "MenuLayer.h"
MenuLayer::MenuLayer()
{}
MenuLayer::~MenuLayer()
{}

MenuLayer*MenuLayer::create()
{
	MenuLayer* loginLayer = new (std::nothrow) MenuLayer();
	if (loginLayer && loginLayer->init())
	{
		loginLayer->autorelease();
		return loginLayer;
	}
	CC_SAFE_DELETE(loginLayer);
	return nullptr;
}


bool MenuLayer::init()
{
	if (!BasicLayer::init())
	{
		return false;
	}
	this->_doUI = std::bind(&MenuLayer::doUI, this);
	return true;
}

void MenuLayer::doUI()
{
	auto rootNode = CSLoader::createNode("LoginScene/MenuLayer.csb");
	addChild(rootNode);

	Button* pauseBtn = static_cast<Button*>(GameHelper::seekNodeByName(rootNode, "pauseBtn"));
	pauseBtn->addClickEventListener(CC_CALLBACK_1(MenuLayer::pauseBtnCallBack, this));

	Button* shopBtn = static_cast<Button*>(GameHelper::seekNodeByName(rootNode, "shopBtn"));
	shopBtn->addClickEventListener(CC_CALLBACK_1(MenuLayer::shopBtnCallBack, this));

}

void MenuLayer::pauseBtnCallBack(cocos2d::Ref* psender)
{
}

void MenuLayer::shopBtnCallBack(cocos2d::Ref* psender)
{
}