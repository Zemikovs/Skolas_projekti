#ifndef SWORD_H
#define SWORD_H

class Sword
{
	public:
		Sword(int,int);
		~Sword();
		int Dmg();
		void SetStatsSharp(int);
		void SetStatsDurr(int);
		void WearAndTear();
		void Sharp();
		void Stats();
		int SwoDur();
		int CheckSharp(int);
		int CheckDurr(int);
	protected:
		float SwordSharp,SwordDurr;
};
#endif
