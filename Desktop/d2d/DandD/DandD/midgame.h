#pragma once
#include <iostream>
#include "hero.h"
#include "battlefield.h"
#include "conio.h"
using namespace std;


void midgame(hero& char1)
{
	system("cls");
	battlefield arena();
	cout << "Out story began, when you got stacked in a strange hallway\n";
	cout << "Well, probably you have to find an exit first, looks simple\n\n";
	//arena.commands();
	int index1 = 0, index2 = 0;
	int input;
	//arena.showfield();
	while (1)
	{
		cout << "where?\n";
		input = _getch();
		switch (input)
		{
			case 72: // вверх
				char1.up();
				system("pause");
				break;
			case 80: //влево
				char1.left();
				system("pause");
				break;
			case 75: //вниз
				char1.down();
				system("pause");
				break;
			case 77: //вправо
				char1.right();
				system("pause");
				break;
			/*case 115:
			{
				char1.stat();
				system("pause"); 
				break;
			}
			case 104:
			{
				this->.rules();
				system("pause");
				break;
			}
			case 99:
			{
				arena.commands();
				system("pause");
				break;
			}
			case 109:
			{
				arena.minimap();
				system("pause");
				break;
			
		}
		arena.showfield(); */
	}
}
