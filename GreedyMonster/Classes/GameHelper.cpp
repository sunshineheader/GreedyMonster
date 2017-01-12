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

cocos2d::Scene* GameHelper::onRandomScene(cocos2d::Scene* scene)
{
	cocos2d::Scene* target = nullptr;
	int onRandom = cocos2d::random() % 40;
	log("onRandom is %d", onRandom);
	if (onRandom == 0 ) {
		target = TransitionCrossFade::create(0.2, scene);
	}
	else if (onRandom == 1){
		target = TransitionScene::create(0.2, scene);
	}
	else if (onRandom == 2){
		target = TransitionFade::create(0.2, scene);
	}
	else if (onRandom == 3){
		target = TransitionFadeBL::create(0.2, scene);
	}
	else if (onRandom == 4){
		target = TransitionFadeDown::create(0.2, scene);
	}
	else if (onRandom == 5){
		target = TransitionFadeDown::create(0.2, scene);
	}
	else if (onRandom == 6){
		target = TransitionFadeTR::create(0.2, scene);
	}
	else if (onRandom == 7){
		target = TransitionFadeUp::create(0.2, scene);
	}
	else if (onRandom == 8){
		target = TransitionFlipAngular::create(0.2, scene);
	}
	else if (onRandom == 9){
		target = TransitionFlipX::create(0.2, scene);
	}
	else if (onRandom == 10){
		target = TransitionFlipY::create(0.2, scene);
	}
	else if (onRandom == 11){
		target = TransitionJumpZoom::create(0.2, scene);
	}
	else if (onRandom == 12){
		target = TransitionMoveInB::create(0.2, scene);
	}
	else if (onRandom == 13){
		target = TransitionMoveInL::create(0.2, scene);
	}
	else if (onRandom == 14){
		target = TransitionMoveInR::create(0.2, scene);
	}
	else if (onRandom == 15){
		target = TransitionMoveInT::create(0.2, scene);
	}
	else if (onRandom == 16){
		target = TransitionPageTurn::create(0.2, scene,false);
	}
	else if (onRandom == 17){
		target = TransitionPageTurn::create(0.2, scene, true);
	}
	else if (onRandom == 18){
		target = TransitionScene::create(0.2, scene);
	}
	else if (onRandom == 19){
		target = TransitionProgressHorizontal::create(0.2, scene);
	}
	else if (onRandom == 20){
		target = TransitionProgressInOut::create(0.2, scene);
	}
	else if (onRandom == 21){
		target = TransitionProgressOutIn::create(0.2, scene);
	}
	else if (onRandom == 22){
		target = TransitionProgressRadialCCW::create(0.2, scene);
	}
	else if (onRandom == 23){
		target = TransitionProgressRadialCW::create(0.2, scene);
	}
	else if (onRandom == 24){
		target = TransitionProgressVertical::create(0.2, scene);
	}
	else if (onRandom == 25){
		target = TransitionSceneOriented::create(0.2, scene, cocos2d::TransitionScene::Orientation::UP_OVER);
	}
	else if (onRandom == 26){
		target = TransitionSceneOriented::create(0.2, scene, cocos2d::TransitionScene::Orientation::DOWN_OVER);
	}
	else if (onRandom == 27){
		target = TransitionSceneOriented::create(0.2, scene, cocos2d::TransitionScene::Orientation::LEFT_OVER);
	}
	else if (onRandom == 28){
		target = TransitionSceneOriented::create(0.2, scene, cocos2d::TransitionScene::Orientation::RIGHT_OVER);
	}
	else if (onRandom == 29){
		target = TransitionShrinkGrow::create(0.2, scene);
	}
	else if (onRandom == 30){
		target = TransitionSlideInB::create(0.2, scene);
	}
	else if (onRandom == 31){
		target = TransitionSlideInL::create(0.2, scene);
	}
	else if (onRandom == 32){
		target = TransitionSlideInR::create(0.2, scene);
	}
	else if (onRandom == 33){
		target = TransitionSlideInT::create(0.2, scene);
	}
	else if (onRandom == 34){
		target = TransitionSplitCols::create(0.2, scene);
	}
	else if (onRandom == 35){
		target = TransitionSplitRows::create(0.2, scene);
	}
	else if (onRandom == 36){
		target = TransitionTurnOffTiles::create(0.2, scene);
	}
	else if (onRandom == 37){
		target = TransitionZoomFlipAngular::create(0.2, scene);
	}
	else if (onRandom == 38){
		target = TransitionZoomFlipX::create(0.2, scene);
	}
	else if (onRandom == 39){
		target = TransitionZoomFlipY::create(0.2, scene);
	}
	return target;
}

cocos2d::Action* GameHelper::onRandomAction()
{
	cocos2d::Action* target = nullptr;
	int onRandom = cocos2d::random() % 10;
	if (onRandom == 0) {
	}
	else if (onRandom == 1){
	}
	return target;
}
