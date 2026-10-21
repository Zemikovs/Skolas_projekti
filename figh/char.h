#ifndef CHAR_H
#define CHAR_h

#include "sword.h"
#include "shield.h"
#include <iostream>
#include <string>

class Chara
{
	public:
		Chara (std::string,int,int,int,int,int,int);
		~Chara ();
		bool Hit (int);
//===========================//
		void Heal ();
		void Move ();
		int Attak ();
		int Defence ();
		void Stats ();
//===========================//
		void SwordRep();
		void ShieldRep();
//===========================//
		void Go (char);
		void MovePrint ();
		int CheackHp (int);
		int CheackStr (int);
	protected:
		std::string Name;
		Sword SwordStat;
		Shield ShieldStat;
		float Health, Strenge;
		bool live;
		char move[11];
};

#endif
