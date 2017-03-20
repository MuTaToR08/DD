#include "tutorial.h"
#include "hero.h"
#include "midgame.h"
#include "battlefield.h"

int main()
{
	int button1 = _getch();
	cout << "1: " << (int)button1;
	battlefield arena();
	hero char1(arena);
	tutorial(char1);
	midgame(char1);
	system("pause");
	return 0;
}