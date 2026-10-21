#include "Boss.h"
#include <string>
#include <iostream>

using namespace std;

Boss :: Boss (std::string Nam, int SetHp, int SetShield) : Enemy(Nam,SetHp,SetShield)
{
	Alive = true;
	ResetManyMove();
	ClearMove ();
	Head = 0;
}

Boss :: ~Boss ()
{
	
} 

void Boss :: Print()
{
	cout << "Boss " << Name << 
	cout << "Hp: " << Hp << "/" << MaxHp << endl;
	cout << "Shield: " << Shield << endl;
	cout << "kustibas: "; PrintMove(); cout << endl;
	cout << "Limens: " << Lv <<endl;
	cout << endl << endl;
}
