#ifndef __OVER__SCENE__H__H__
#define __OVER__SCENE__H__H__
#include "BasicScene.h"

class OverLayer;
class OverScene :public BasicScene
{
public:
	static OverScene* create();
protected:
	OverScene();
	~OverScene();
private:
	virtual bool init() override;
	void doUI();
private:
	OverLayer* m_overLayer;
};
#endif

