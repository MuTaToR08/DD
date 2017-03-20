#pragma once
#define SIZE 6
#include "hero.h"



class battlefield
{
private:
	char field[SIZE][SIZE];
public:
	battlefield& battlefield::operator=(battlefield& bf);
	battlefield();
	bool checkroom(int index1, int index2);
	void showfield();
	void setroom(int index1, int index2);
	void delroom(int index1, int index2);
	void setpos(int index1, int index2);
	void MoveHero();
	void BackMoveHero();
	void rules();
	void commands();
	void minimap();
};