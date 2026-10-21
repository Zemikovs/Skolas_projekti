#include <iostream>
using namespace std;

int main ()
{
	int x,y,iev,tep_y,tep_iev,gal=0;
	cout << "Ievadiet skaitli: ";
	cin >> iev;
	cout << endl;
	tep_iev=iev;

	x = tep_iev % 10;
	gal +=x;
	tep_iev = tep_iev /10;
	
	for (int xtem;tep_iev>=1;)
	{
		gal = gal * 10;
		x = tep_iev % 10;
		gal +=x;
		tep_iev = tep_iev /10;
	}
	
	if (iev == gal)
		cout << "Tas ir palindromu";
	else
		cout << "Tas nav palindromu";
}
