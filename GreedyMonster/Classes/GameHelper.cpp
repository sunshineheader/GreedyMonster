#include "GameHelper.h"

GameHelper::GameHelper()
{}

GameHelper::~GameHelper()
{}

Node* GameHelper::seekNodeByName(Node* root, const std::string& name) {
	if (!root) {
		return nullptr;
	}
	if (root->getName() == name) {
		return root;
	}
	const auto& arrayRootChildren = root->getChildren();
	for (auto& subWidget : arrayRootChildren) {
		Node* child = dynamic_cast<Node*>(subWidget);
		if (child) {
			Node* res = seekNodeByName(child, name);
			if (res != nullptr) {
				return res;
			}
		}
	}
	return nullptr;
}

cocos2d::Scene* GameHelper::onRandomScene()
{
	cocos2d::Scene* target = nullptr;
	int onRandom = cocos2d::random() % 5;
	if (onRandom == 0 ) {
	}
	else if (onRandom == 1){
	}
	else if (onRandom == 2){
	}
	else if (onRandom == 3){
	}
	else if (onRandom == 4){
	}
	return target;
}