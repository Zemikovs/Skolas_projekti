#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main ()
{
	srand(time(0));
	string ans;
	int trys,x,min,max,guess = 100,ran = rand()%102-1;
	
	cout << "Es meiginasu uzminçt tavu skaitli mazâk par 10 reizem" << endl;
	cout << "Atbildi tikai (maz,liel,ists)" << endl;
	cout << endl;
	cout << "Vai skaitlis " << ran << " ir?" << endl;

	cin >> ans;

	for (; ans != "ists" && trys <1 ;)
	{
		if (ans == "maz")
		{	
			max = guess - ran;
			x = (guess - max) / 2;
			trys+=1;
			cout << "Vai skaitlis " << x << " ir?" << endl;
			cin >> ans;
		}
		else if(ans == "liel")
		{
			min = ran;
			guess = guess - min;
			x = guess / 2 + min;
			trys+=1;
			cout << "Vai skaitlis " << x << " ir?" << endl;
			cin >> ans;
		}
		else
		{
			cout << "Nesparatu" << endl;
			cin >> ans;
		}
		if (guess%2!=1)
			guess+=1;
	}	
	for (;ans != "ists" && trys <11 ;)
	{
		if (ans == "maz")
			{
				max = max + (max - (x-min));
				guess = guess + min - x;
			}
			else if(ans == "liel")
			{
				min = max + (max - (x-min));
			}
			else
			{
				cout << "Nesparatu" << endl;
				cin >> ans;
			}
	}
}
