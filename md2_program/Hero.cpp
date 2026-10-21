#include <iostream>
#include "Stats.h"
#include "Hero.h"
#include <string>

using namespace std;

//Sâkums

Hero :: Hero (std::string Nam, int SetHp, int SetShield)
{
	Name = Nam;
	Hp = MaxHp = SetHp;
	Shield = SetShield;
	Alive = true;
	ResetManyMove();
	Lv = 1;
	Exp = 0;
	ClearMove ();
}

Hero :: ~Hero()
{
	
}

//Notikumi (parasite)

void Hero :: Print ()
{
	cout << "Hero " << Name << " :" << endl ;
	cout << "Hp: " << Hp << "/" << MaxHp << endl;
	cout << "Shield: " << Shield << endl;
	cout << "kustibas: "; PrintMove(); cout << endl;
	cout << "Limens: " << Lv <<endl;
	cout << "Exp: " << Exp << "/" ; ExpReq(); cout << endl;
	cout << endl << endl;
}

void Hero :: TakeDmg (float X)
{
	if (Hp-X <= 0)
		Alive = false;
	else
		Hp -= X ;
}

void Hero :: Heal ()
{
	Hp+=(MaxHp*0.2);
	if (Hp > MaxHp)
		Hp = MaxHp;
}

//Notikumi (Move)

void Hero :: MakeMove (char X)
{
	do
	{
		bool out = false;
		if (ManyMove>0)
		{
			cout << "Uz kurieni? [ir vel " << ManyMove << " gajieni]" << endl;
			cout << "[w,s,d,a] = kustçðanas virzieni, [x] = beigt" << endl;
			cin >> X;
			switch(X)
			{
				case'w':
				case's':
				case'd':
				case'a':
					DidMove(X);
					break;
				case'x':
					out = true;
					break;
				default:
					cout << "???" << endl;
			}
		}
		else
			cout << "Tev beidzâs gâjienu"<< endl;
		if (out == true)
			break;
	} while (ManyMove>0);
	cout << endl;
}


