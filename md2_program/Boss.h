#ifndef BOSS_H
#define BOSS_H

#include <string>
#include "Enemy.h"

class Boss : public Enemy
{
	public:
		Boss (std::string, int, int);
		~Boss ();
		float Head;
		virtual void Print ();
};

#endif
