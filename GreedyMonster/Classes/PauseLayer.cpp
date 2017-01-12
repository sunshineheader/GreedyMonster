#include "PauseLayer.h"


PauseLayer::PauseLayer()
{}
PauseLayer::~PauseLayer()
{}

PauseLayer*PauseLayer::create()
{
	PauseLayer* loginLayer = new (std::nothrow) PauseLayer();
	if (loginLayer && loginLayer->init())
	{
		loginLayer->autorelease();
		return loginLayer;
	}
	CC_SAFE_DELETE(loginLayer);
	return nullptr;
}

bool PauseLayer::init()
{
	if (!BasicLayer::init())
	{
		return false;
	}
	this->_doUI = std::bind(&PauseLayer::doUI, this);
	return true;
}

void PauseLayer::doUI()
{
	auto rootNode = CSLoader::createNode("LoginScene/PauseLayer.csb");
	addChild(rootNode);

	Button* contiueBtn = static_cast<Button*>(GameHelper::seekNodeByName(rootNode, "contine_button"));
	contiueBtn->addClickEventListener(CC_CALLBACK_1(PauseLayer::contiueBtnCallBack, this));

	Button* restartBtn = static_cast<Button*>(GameHelper::seekNodeByName(rootNode, "restart_button"));
	restartBtn->addClickEventListener(CC_CALLBACK_1(PauseLayer::restartBtnCallBack, this));
}

void PauseLayer::contiueBtnCallBack(cocos2d::Ref* ref)
{}
void PauseLayer::restartBtnCallBack(cocos2d::Ref* ref)
{}