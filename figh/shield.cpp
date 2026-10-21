#include <iostream>
#include "shield.h"
using namespace std;

Shield :: Shield(int partA,int partB)
{
	ShieldSize = CheckDurr(partA);
	ShieldDurr = CheckDurr(partB);
}

Shield :: ~Shield() {}

Shield :: Block()
{
	return ShieldSize*ShieldDurr;
}

void Shield :: SetStatsSize(int partA)
{
	ShieldSize = CheckDurr(partA);
}

void Shield :: SetStatsDurr(int partB)
{
	ShieldDurr = CheckDurr(partB);
}

void Shield :: WearAndTear()
{
	if (ShieldDurr>=1)
	ShieldDurr-=1;
}

void Shield :: Repair()
{
	ShieldDurr+=2;
	if (ShieldDurr>4)
		ShieldDurr = 4;
}
void Shield :: Stats()
{
	cout << "Shield quality: " << ShieldSize << endl;
	cout << "Shield durrability: " << ShieldDurr << endl;
}

int Shield :: ShDur()
{
	return ShieldDurr;
}

int Shield :: CheckSize(int x)
{
	if (0 <= x && x <= 4)
		return x;
	else if (x > 4)
	{
		cout << "Shield Size set 0. Nuber was higer then 4" << endl;
		return 0;
	}
	else if (x <0)
	{
		cout << "Shield size set 0. Nuber was lower then 0" << endl;
		return 0;
	}
}
int Shield :: CheckDurr(int x)
{
	if (1 <= x && x <= 4)
		return x;
	else if (x > 4)
	{
		cout << "Shield Size set 1. Nuber was higer then 4" << endl;
		return 1;
	}
	else if (x <1)
	{
		cout << "Shield size set 1. Nuber was lower then 1" << endl;
		return 1;
	}
}
