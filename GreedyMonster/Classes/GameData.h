#ifndef __GAME__DATA__H__H__
#define __GAME__DATA__H__H__
#include "cocos2d.h"

class GameData 
{
public:
	GameData();
	~GameData();
private:
	bool m_fristLogin;
	int  m_gameLevel;
	int  m_hp;
	int  m_coin;
};
#endif
