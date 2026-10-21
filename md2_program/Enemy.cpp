#include <iostream>
#include "Stats.h"
#include "Enemy.h"
#include <string>
#include <cstdlib>
#include <ctime>
  
using namespace std;

//Sâkums

Enemy :: Enemy (std::string Nam, int SetHp, int SetShield)
{
	Name = Nam;
	Hp = MaxHp = SetHp;
	Shield = SetShield;
	Alive = true;
	ResetManyMove();
	ClearMove ();
}

Enemy :: ~Enemy ()
{
	
}

// Print

void Enemy :: Print()
{
	cout << "Enemy " << Name << ":" << endl;
	cout << "Hp: " << Hp << "/" << MaxHp << endl;
	cout << "Shield: " << Shield << endl;
	cout << "kustibas: "; PrintMove(); cout << endl;
	cout << "Limens: " << Lv <<endl;
	cout << endl << endl;
}

// Notikumi

void Enemy :: TakeDmg (float X)
{
	if (Hp-X <= 0)
		Alive = false;
	else
		Hp -= X ;
}

void Enemy :: MakeMove (char X)
{
	
}
