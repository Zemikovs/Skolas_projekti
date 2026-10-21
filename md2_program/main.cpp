#include <iostream>
#include <string>
#include "Enemy.h"
#include "Hero.h"

using namespace std;

int main() {
	
	
	
	Hero h1 ("Ben",50, 2);
	h1.	Print();
	
	Hero h2 ("Ren",25, 8);
	h2.	Print();
	
	Hero h3 ("Leo",40, 5);
	h3.	Print();
	
	
	
	Enemy e1 ("Skeli",50, 2);	
	e1.Print();
	
	Enemy e2 ("Slime",15, 5);	
	e1.Print();	
	
	Enemy e3 ("Spoks",35, 7);	
	e1.Print();	
	
	
	
	for (char X;true;)
	{
		cout << "Ko daram ?" << endl;
		cout << "s = stats, m = kustîba" << endl << endl;
		cin >> X;
		switch (X)
		{
			case 's':
				h1.Print();
				break;
			case 'm':
				h1.MakeMove(X);
				break;
			default:
				cout << "???" << endl << endl;
				break;
		}
	}
}
