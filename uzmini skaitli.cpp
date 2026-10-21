#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	srand(time(0));
	int trys,ran = rand()%102-1;
	
	cout << "Uzmini skaitli manu skaitli no 0-100" << endl;
	cout << "Raksti tikai ciparus!" << endl;
	
		for (int ans;ran!=ans && trys<=10;)
		{
			cin >> ans;
			if (ans<=100 && ans>=0)
				{
					if (ans > ran && trys<10 )
					{
						cout << "Skaitlis ir mazaks par iedoto" << endl;
						trys+=1;
					}
					else if (ans < ran && trys<10)
					{
						cout << "Skaitlis ir lielaks par iedoto" << endl;
						trys+=1;
					}
					else if (trys==10)
						trys+=1;
				}
			else 
				cout << "Nav sapratami, vai skaitlis nav taja diapazona" << endl;
		}
	
	if (trys<11)
		cout << "Tu uzminçji skaitli " << trys << " reizes = D";
	else
		cout << "Tev neizdevas uzminçt skaitli, skaitlis bija " << ran << " ;-;";
	
	return 0;
}
