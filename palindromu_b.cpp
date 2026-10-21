#include <iostream>
using namespace std;

int main ()
{
	int x,y,iev=999999,tep_y,tep_iev,gal;
	for (;iev>=1;iev-=1)
	{
		tep_iev=iev;
		
		while (tep_iev>=1)
		{
			tep_iev=tep_iev/10;
			y+=1;	
		}
	
		tep_iev=iev;
		tep_y = y;
		
		x = tep_iev % 10;
		gal +=x;
		tep_iev = tep_iev /10;
		y-=1;
	
		for (int xtem;tep_y>=1;tep_y-=1)
		{
			if (tep_y==1)
				continue;
			gal = gal * 10;
			x = tep_iev % 10;
			gal +=x;
			tep_iev = tep_iev /10;
			y-=1;
		}
	
		if (iev == gal)
			cout << gal << ", " ;
		gal = 0; y = 0;
	}
}
