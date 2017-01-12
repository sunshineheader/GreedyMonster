#include "LoginLayer.h"
#include "MenuLayer.h"

#include "LoginScene.h"

LoginScene::LoginScene()
{}

LoginScene::~LoginScene()
{}

LoginScene* LoginScene::create()
{
	LoginScene* loginScene = new (std::nothrow) LoginScene();
	if (loginScene && loginScene->init())
	{
		loginScene->autorelease();
		return loginScene;
	}
	CC_SAFE_DELETE(loginScene);
	return nullptr;
}

bool LoginScene::init()
{
	if (!BasicScene::init())
	{
		return false;
	}
	this->_doUI = std::bind(&LoginScene::doUI, this);
	return true;
}

void LoginScene::doUI()
{
	auto rootNode = CSLoader::createNode("LoginScene/LoginScene.csb");
	addChild(rootNode);
	
	m_menuLayer = MenuLayer::create();
	addChild(m_menuLayer);

	m_loginLayer = LoginLayer::create(this);
	addChild(m_loginLayer);
}
