#include "GameScene.h"
#include "LoginScene.h"
#include "LoginLayer.h"


LoginLayer::LoginLayer()

{}
LoginLayer::~LoginLayer()
{}


LoginLayer*LoginLayer::create( LoginScene* loginScene)
{
	LoginLayer* loginLayer = new (std::nothrow) LoginLayer();
	if (loginLayer && loginLayer->init(loginScene))
	{
		loginLayer->autorelease();
		return loginLayer;
	}
	CC_SAFE_DELETE(loginLayer);
	return nullptr;
}


bool LoginLayer::init( LoginScene* loginScene)
{
	if (!BasicLayer::init())
	{
		return false;
	}
	m_loginScene = loginScene;
	this->_doUI = std::bind(&LoginLayer::doUI, this);
	return true;
}

void LoginLayer::doUI()
{
	auto rootNode = CSLoader::createNode("LoginScene/LoginLayer.csb");
	addChild(rootNode);
	
	Button* startBtn = static_cast<Button*>(GameHelper::seekNodeByName(rootNode, "startBtn"));
	startBtn->addClickEventListener(CC_CALLBACK_1(LoginLayer::startBtnCallBack, this));

	auto scaleBig   = ScaleTo::create(0.1, 0.9);
	auto scaleSmall = ScaleTo::create(0.1, 0.8);
	auto seqence = Sequence::create(scaleBig,DelayTime::create(0.3),scaleSmall, nullptr);
	auto action  = RepeatForever::create(seqence);
	startBtn->runAction(action);
}
void LoginLayer::startBtnCallBack(cocos2d::Ref* psender)
{
	m_loginScene->onReplaceScene(GameScene::create(),true);
}

