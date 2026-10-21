#include "Stats.h"
#include <iostream>

using namespace std;

Stats :: ~Stats() {}

void Stats :: ClearMove ()
{
	for(int i = 1; i<11; i++)
		Move[i] = '-';
}

void Stats :: PrintMove () const
{
	for(int i = 1; i<=10; i++)
		std::cout << " [" << Move[i] << "] ";
}

void Stats :: ResetManyMove ()
{
	ManyMove = 5;
}

void Stats :: DidMove (char Y)
{
	for (int i = 10; i>=2; i--)
	{
		Move[i] = Move[i-1];
	}
	Move[1] = Y;
	ManyMove --;
}

void Stats :: Print()
{
	cout << "Hp: " << Hp << "/" << MaxHp << endl;
	cout << "Shield: " << Shield << endl;
	cout << "kustibas: "; PrintMove(); cout << endl;
	cout << "Limens: " << Lv <<endl;
	cout << endl << endl;
}
