#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "Stats.h"

class Enemy : public Stats 

{
	public:
		Enemy (std::string, int, int);
		~Enemy ();
		//paòemtie
		virtual void TakeDmg (float);
		virtual void MakeMove (char);
		virtual void Print ();
		//pievienots
		void GetLevel ();
};

#endif

