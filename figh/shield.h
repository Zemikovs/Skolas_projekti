#ifndef SHIELD_H
#define SHIELD_H

class Shield
{
	public:
		Shield(int,int);
		~Shield();
		int Block();
		void SetStatsSize(int);
		void SetStatsDurr(int);
		void WearAndTear();
		void Repair();
		void Stats();
		int ShDur();
		int CheckSize(int);
		int CheckDurr(int);
	protected:
		float ShieldSize,ShieldDurr;
};
#endif
