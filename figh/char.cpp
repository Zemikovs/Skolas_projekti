#include <iostream>
#include <string>
#include "char.h"
#include "sword.h"
#include "shield.h"

using namespace std;

Chara :: Chara (string name,int Hp,int Str,int SQ,int SD,int ShS,int ShD) : SwordStat (SQ,SD), ShieldStat (ShS,ShD)
{
	Name = name;
	Health = CheackHp(Hp);
	Strenge = CheackStr(Str);
	for (int x=0;x<=10;x++)
		move[x] = '-';
}

Chara :: ~Chara() 
{
cout << "Player name " << Name << " lost." << endl;
}

bool Chara :: Hit (int dmg)
{;
	Health-=dmg;
	if (Health<1)
		{
		Health = 0;
		cout << "Fighter " << Name << " lost all heatlh." << endl;
		return false;
		}
	else
	 	{
	 	cout << "Fighter " << Name << " "<< Health << " health have left" << endl;
		return true;
	 	}
		
}

// ===============================================//

int Chara :: Attak()
{
	int x = Strenge + SwordStat.Dmg();
	SwordStat.WearAndTear();
	return x;
}
int Chara :: Defence()
{
	int x = ( Strenge / 2 ) + ShieldStat.Block();
	ShieldStat.WearAndTear();
	return x;
	
}



void Chara :: Heal ()
{
	Health+=10;
	if (Health>100)
	{
		Health = 100;
		cout << Name << " health is max" << endl;
	}
	else
		cout << Name << " health now is " << Health << endl;
}

void Chara :: Stats ()
{
	bool keep = true;
	for (char inp;keep;)
	{
		cout << "p = player stat, s = sword stat, h = shield stat, m = move history n = return" << endl;
		cin >> inp;
		switch (inp){
			case 'p':
				cout << "Name: " << Name << endl;
				cout << "Health: " << Health << endl;
				cout << "Streange: " << Strenge << endl;
				keep = false;
				break;
			case 's':
				SwordStat.Stats();
				keep = false;
				break;
			case 'h':
				ShieldStat.Stats() ;
				keep = false;
				break;
			case 'm':
				MovePrint();
				keep = false;
				break;
			case 'n':
				keep = false;
				break;
			default:
				cout << "???" << endl;
		}
	}
}

// ===============================================//

void Chara :: SwordRep()
{
	SwordStat.Sharp();
	cout << Name << " sword now durability is " << SwordStat.SwoDur()<< endl; 
}

void Chara :: ShieldRep()
{
	ShieldStat.Repair();
	cout << Name << " shield now durability is " << ShieldStat.ShDur()<< endl; 
}

// ===============================================//
void Chara :: Move ()
{
	cout << "Input move (w,s,d,a. n for exit)" << endl;
	MovePrint();
	for (char x; true;)
	{
		std::cin >> x;
		if (x == 'w' || x =='d'|| x =='s'|| x =='a')
		{
			Go(x);
			MovePrint();
		}
		else if (x =='n')
			break;
		else
			cout << "???" << endl;
	}
}

void Chara :: Go (char x)
{
	for (int y = 10; y>=1; y--)
	{
		if (y == 10)
		{
			move[y] = x;
			continue; 
		}
		x = move[y];
		move[y] = move[y+1];
		move[y+1] = x;
	}
}

void Chara :: MovePrint()
{
	for (int x = 1; x <= 10; x++)
		cout << move[x] << " , ";
	cout << endl;
}

// ===============================================//

int Chara :: CheackHp(int x)
{
	if (1 <= x && x <= 100)
		return x;
	else if (x > 100)
	{
		cout << "Health set 50. Nuber was higer then 100" << endl;
		return 50;
	}
	else if (x <1)
	{
		cout << "Shield size set 50. Nuber was lower then 1" << endl;
		return 50;
	}
}

int Chara :: CheackStr(int x)
{
	if (1 <= x && x <= 100)
		return x;
	else if (x > 100)
	{
		cout << "Health set 50. Nuber was higer then 100" << endl;
		return 50;
	}
	else if (x <1)
	{
		cout << "Shield size set 50. Nuber was lower then 1" << endl;
		return 50;
	}
}
