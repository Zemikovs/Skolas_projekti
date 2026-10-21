#include <iostream>
#include "sword.h"

using namespace std;

Sword :: Sword(int partA,int partB)
{
	SwordSharp = CheckSharp(partA);
	SwordDurr = CheckDurr(partB);
}
Sword :: ~Sword(){
}

int Sword :: Dmg()
{
	return SwordSharp*SwordDurr;
}
void Sword :: SetStatsSharp(int partA)
{
	SwordSharp = CheckSharp(partA);
}

void Sword :: SetStatsDurr(int partA)
{
	SwordDurr = CheckDurr(partA);
}

void Sword :: WearAndTear()
{
	if (SwordDurr>1)
		SwordDurr-=1;	
}

void Sword :: Sharp()
{
	SwordDurr+=2;
	if (SwordDurr>5)
		SwordDurr = 5;
}

void Sword :: Stats()
{
	cout << "Sword quality: " << SwordSharp << endl;
	cout << "Sword sharpnes: " << SwordDurr << endl;
}

int Sword :: SwoDur()
{
	return SwordDurr;
}

int Sword :: CheckSharp(int x)
{
	if (2 <= x && x <= 5)
		return x;
	else if (x > 5)
	{
		cout << "Sword quality set 2. Nuber is higer then 5" << endl;
		return 2;
	}
	else if (x <2)
	{
		cout << "Sword quality set 2. Nuber is lower then 1" << endl;
		return 2;
	}
}

int Sword :: CheckDurr(int x)
{
	if (1 <= x && x <= 6)
		return x;
	else if (x > 6)
	{
		cout << "Sword sharpnes set 1. Nuber is higer then 6" << endl;
		return 1;
	}
	else if (x <1)
	{
		cout << "Sword sharpnes set 1. Nuber is lower then 1" << endl;
		return 1;
	}
}
