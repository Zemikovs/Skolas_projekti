#ifndef HERO_H
#define HERO_H

#include "Stats.h"
#include <string>


class Hero : public Stats 

{
	public:
		Hero (std::string, int, int);
		~Hero ();
		//paòemtie
		virtual void TakeDmg (float amount);
		virtual void MakeMove (char X);
		virtual void Print ();
		//pievienotie
		void Heal ();
		float ExpReq () const {return (100.00 * Lv);}
};

#endif
