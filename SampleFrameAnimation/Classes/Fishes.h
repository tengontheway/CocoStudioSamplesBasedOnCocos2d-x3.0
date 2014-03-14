#ifndef __FISHES_H__
#define __FISHES_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "CocosGUI.h"

class Fishes : public cocos2d::CCLayer
{
public:
	virtual void onExit();
	virtual void onEnter();

	cocos2d::CCSize size;
};

class Fish01 : public Fishes
{
public:
	virtual void onEnter();
};

class Fish02 : public Fishes
{
public:
	virtual void onEnter();
};

class Fish03 : public Fishes
{
public:
	virtual void onEnter();
};

class Fish04 : public Fishes
{
public:
	virtual void onEnter();
private:
	void callback();
	cocostudio::Armature* armature;
};

class Fish05 : public Fishes
{
public:
	virtual void onEnter();
};

class Fish06 : public Fishes
{
public:
	virtual void onEnter();
};

class Fish07 : public Fishes
{
public:
	virtual void onEnter();
private:
	void callback();
	void removeSelf();
	cocostudio::Armature* armature;
};
#endif