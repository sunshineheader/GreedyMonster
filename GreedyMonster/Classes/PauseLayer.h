#ifndef __PAUSE__LAYER__H__H__
#define __PAUSE__LAYER__H__H__

#include "BasicLayer.h"
class PauseLayer :public BasicLayer
{
public:
	static PauseLayer* create();
protected:
	PauseLayer();
	~PauseLayer();

private:
	virtual bool init() override;
	void doUI();
};
#endif