#ifndef STATS_H
#define STATS_H

#include <string>

class Stats	
{
	public:
		virtual ~Stats();
		// Base stats
		virtual std :: string GetName() {const std:: string Name;}
		virtual float GetHp () const {return Hp;}
		virtual float GetShield () const {return Shield;}
		virtual float GetExp () const {return Exp;}
		virtual float GetLv () const {return Lv;}
		virtual float GetMove () const {return 0;}
		virtual float GetAlive () const {return Alive;}	
		// Funkcijas
		virtual void TakeDmg (float amount) = 0;
		virtual void MakeMove (char X) = 0;
		void Hit ();
		void DidMove (char X);
		void ClearMove ();
		void PrintMove () const;
		void ResetManyMove ();
		// Bossa darbîba
		virtual float GetHead () const {return 0;}
		// Print
		virtual void Print ();
		
	protected:
		float Hp, Shield, Lv, Exp, ManyMove,MaxHp;
		bool Alive;
		char Move[11];
		std :: string Name;
		
		
};

#endif

