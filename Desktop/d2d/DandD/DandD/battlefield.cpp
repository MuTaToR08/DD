#include "battlefield.h"
#include <iostream>
#include "conio.h"


battlefield::battlefield()
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			field[i][j] = '0';
		
	field[0][0] = 's';
}
battlefield& battlefield::operator=(battlefield& bf)
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			this->field[i][j] = bf.field[i][j];
}
bool battlefield::checkroom(int index1, int index2)
{
	bool r = 1;
	if (index1 < 0 || index1 >SIZE)
		r = 0;
	if (index2 < 0 || index2 > SIZE)
		r = 0;
	return r;
}
void battlefield::showfield()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
			std::cout << field[i][j]<<" ";
		std::cout << "\n";
	}
}
void battlefield::setroom(int index1, int index2)
{
	this->field[index1][index2] = 's';
}
void battlefield::delroom(int index1, int index2)
{
	this->field[index1][index2] = '0';
}
void battlefield::setpos(int index1, int index2)
{
	this->field[index1][index2] = '1';
}
void battlefield::MoveHero()
{
	int a;
}
void battlefield::rules()
{
	cout << "\nWelcome to the Scrapyard! Rules are simple:\n";
	cout << "You are stacked in a cube. If you want to quit, you have to find a key first,\n";
	cout << "then find an exit. Beware of local mobsters.\n";
	cout << "Check rooms, beat the crap out of enemies, gain buffs,\n";
	cout << "use pure power and live only once.\n";
}
void battlefield::commands()
{
	cout << "Use arrows for moving, y/n to select an option\n";
	cout << "press 'h' for fast briefing, 's' for checking stats\n";
	cout << "press 'c' for command list, 'm' for minimap guide\n";

}
void battlefield::minimap()
{
	cout << "0 on minimap - unchecked rooms\n1 - revealed and looted\ns - your current position\n";
}
void battlefield::BackMoveHero()
{
	int a;
}
