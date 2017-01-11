#include "BasicLayer.h"

BasicLayer::BasicLayer()
	: _doEvent(nullptr)
	, _doUI(nullptr)
	, _removeEvent(nullptr)
{}
BasicLayer::~BasicLayer()
{}

bool BasicLayer::init()
{
	if (!cocos2d::Layer::init())
	{
		return false;
	}
	return true;
}
void BasicLayer::onEnter()
{
	cocos2d::Layer::onEnter();
	if (_doEvent)	_doEvent();
	if (_doUI)		_doUI();
}
void BasicLayer::onExit()
{
	cocos2d::Layer::onExit();
	if (_removeEvent)		_removeEvent();

}