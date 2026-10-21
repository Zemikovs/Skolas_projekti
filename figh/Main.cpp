#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "sword.h"
#include "shield.h"
#include "char.h"

using namespace std;

int main()
{
	char Key[2];
	bool IsGameOn = true;
	string name;
	int hp=0,str=0,sq=0,ss=0,shs=0,shd=0,op=0;
	
	srand(time(0));
	int rob[2];
	
	
	cout << "Input number what want: " << endl;
	cout << "P1 vs P2 = 1" << endl;
	cout << "P1 vs rng = 2" << endl;
	cout << "rng vs rng = 3" << endl;
	
	for (bool con = true; con;)
	{
		cin >> op;
		if (op > 0 && op < 4)
			con = false;
		else
			cout << "???" << endl;
	}
	
	cout << "Fighter 1 Name: " << endl;
	cin >> name;
	cout << "Health (1-100) and streang (1-10): " << endl;
	cin >> hp >> str;
	cout << "Sword sharp (2-5) and durrability (1-6): " << endl;
	cin >> sq >> ss;
	cout << "Shield Size (0-4) and durrability (1-4): " << endl;
	cin >> shs >> shd;
	
	Chara P1(name,hp,str,sq,ss,shs,shd);
	
	cout << "Fighter 2 Name: " << endl;
	cin >> name;
	cout << "Health (1-100) and streang (1-10): " << endl;
	cin >> hp >> str;
	cout << "Sword sharp (2-5) and durrability (1-6): " << endl;
	cin >> sq >> ss;
	cout << "Shield Size (0-4) and durrability (1-4): " << endl;
	cin >> shs >> shd;
	
	Chara P2(name,hp,str,sq,ss,shs,shd);
	

for (int i;IsGameOn;i++)
{
	if (i%2==1)
	{
		cout << endl << "Fighter 1 action" << endl << endl;
// =======================================================================//

		for (int turn = 1;turn == 1 && op >=1 && op <= 2;)
			{
				cout << "What is move fighter 1 ?" << endl;
				cout << "a = attak, h = heal,r = repair, m = move, c = check " << endl;
				cin >> Key[0];
				switch (Key[0]){
					case 'a':
						turn--;
						break;
					case 'h':
						P1.Heal();
						turn--;
						break;
					case 'r':
						while (true)
						{
							cout << "What repair?" << endl << "Sword = 1, shield = 2, atcelt = n" << endl;
							cin >> Key [0];
							if (Key [0] == '1')
							{
								P1.SwordRep();
								break;
							}
							else if (Key[0] == '2')
							{
								P1.ShieldRep();
								break;
							}
							else if (Key[0] == 'n')
								break;
							else
								cout << "???" << endl;
						}
						break;
					case 'm':
						P1.Move();
						break;
					case 'c':
						cout << "Who want to check?" << endl;
						cout << "Fighter 1 = 1, Fighter 2 = 2, cancel = n"<< endl;
						for (char in ;true;)
						{
							cin >> in;
							if (in == '1')
							{
								P1.Stats();
								break;
							}
							else if (in == '2')
							{
								P2.Stats();
								break;
							}
							else if (in == 'n')
								break;
							else
								cout << "???" << endl;
						}
						break;
					default:
						cout << "???" << endl;
				}
			}
			
		for (int turn = 1;turn == 1 && op == 3;)
			{
				rob[0] = rand()%4+1;
					if (rob[0]==1)
						cout << "Deafend" << endl;
					else if (rob[0]==2)
						P2.Heal();
					else if (rob[0]==3)
						P2.SwordRep();
					else if (rob[0]==4)
						P2.ShieldRep();
					turn--;
			}
			
			
//========================================================================//							

		cout << endl << "Fighter 2 action" << endl << endl;

			for (int turn = 1;turn == 1 && op == 1;)
			{
				cout << "What is move fighter 2 ?" << endl;
				cout << "d = defend, h = heal, r = repair, m = move, c = check" << endl;
				cin >> Key[1];
				switch (Key[1]){
					case 'd':
						turn--;
						break;
					case 'h':
						P2.Heal();
						turn--;
						break;
					case 'r':
						while (true)
						{
							cout << "What repair?" << endl << "Sword = 1, shield = 2, atcelt = n" << endl;
							cin >> Key [1];
							if (Key [1] == '1')
							{
								P1.SwordRep();
								break;
							}
							else if (Key[1] == '2')
							{
								P1.ShieldRep();
								break;
							}
							else if (Key[1] == 'n')
								break;
							else
								cout << "???" << endl;	
						}
						break;
					case 'm':
						P2.Move();
						break;						
					case 'c':
						cout << "Who want to check?" << endl;
						cout << "Fighter 1 = 1, Fighter 2 = 2, cancel = n"<< endl;
						for (char in ;true;)
						{
							cin >> in;
							if (in == '1')
							{
								P1.Stats();
								break;
							}
							else if (in == '2')
							{
								P2.Stats();
								break;
							}
							else if (in == 'n')
								break;
							else
								cout << "???" << endl;
						}
						break;
					default:
						cout << "???" << endl;
				}
			}
			
			for (int turn = 1;turn == 1 && op >=2;)
			{
				rob[1] = rand()%4+1;
				if (rob[1]==1)
					cout << "Deafend" << endl;
				else if (rob[1]==2)
					P2.Heal();
				else if (rob[1]==3)
					P2.SwordRep();
				else if (rob[1]==4)
					P2.ShieldRep();
				turn--;
			}
			
			
			
	if ((Key[0] == 'a' && Key[1] == 'd') || (Key[0] == 'a' && rob[1] == 1) || (rob[0] == 1 && rob[1] == 1))
		{
			if(!P2.Hit(P1.Attak()-P2.Defence()))
			{
				IsGameOn = false;
				P2.~Chara();
				break;
			}
		}
		
	else if (Key[0] == 'a' || Key[0] == 'a' || rob[0] == 1)
		{
			if(!P2.Hit(P1.Attak()))
			{
				IsGameOn = false;
				P2.~Chara();
				break;
			}	
		}	
	}
	
//=============================================================//
	
		else if (i%2!=1)
		
//================================================================//
	{
		
		cout << endl << "Fighter 2 action" << endl << endl;
		
			for (int turn = 1;turn == 1 && op == 1;)
			{
				cout << "What is move fighter 2 ?" << endl;
				cout << "a = attak, h = heal, r = repair, m = move, c = check" << endl;
				cin >> Key[1];
				switch (Key[1]){
					case 'a':
						turn--;
						break;
					case 'h':
						P2.Heal();
						turn--;
						break;
					case 'r':
						while (true)
						{
							cout << "What repair?" << endl << "Sword = 1, shield = 2, atcelt = n" << endl;
							cin >> Key [1];
							if (Key [1] == '1')
							{
								P1.SwordRep();
								break;
							}
							else if (Key[1] == '2')
							{
								P1.ShieldRep();
								break;
							}
							else if (Key[1] == 'n')
								break;
							else
								cout << "???" << endl;	
						}
						break;
					case 'm':
						P2.Move();
						break;
					case 'c':
						cout << "Who want to check?" << endl;
						cout << "Fighter 1 = 1, Fighter 2 = 2, cancel = n"<< endl;
						for (char in ;true;)
						{
							cin >> in;
							if (in == '1')
							{
								P1.Stats();
								break;
							}
							else if (in == '2')
							{
								P2.Stats();
								break;
							}
							else if (in == 'n')
								break;
							else
								cout << "???" << endl;
						}
						break;
					default:
						cout << "???" << endl;
				}
			}
			
			for (int turn = 1;turn == 1 && op > 1 ;)
			{
				rob[1] = rand()%4+1;
				if (rob[1]==1)
					cout << "Attak" << endl;
				else if (rob[1]==2)
					P2.Heal();
				else if (rob[1]==3)
					P2.SwordRep();
				else if (rob[1]==4)
					P2.ShieldRep();
				turn--;
			}
			
//=======================================================================//
			
		cout << endl << "Fighter 1 action" << endl << endl;
		
			for (int turn = 1;turn == 1 && op >=1 && op <= 2;)
			{
				cout << "What is move fighter 1 ?" << endl;
				cout << "d = defeand, h = heal, r = repair, m = move,  c = check" << endl;
				cin >> Key[0];
				switch (Key[0]){
					case 'd':
						turn--;
						break;
					case 'h':
						P1.Heal();
						turn--;
						break;
					case 'r':
						while (true)
						{
							cout << "What repair?" << endl << "Sword = 1, shield = 2, atcelt = n" << endl;
							cin >> Key [0];
							if (Key [0] == '1')
							{
								P1.SwordRep();
								break;
							}
							else if (Key[0] == '2')
							{
								P1.ShieldRep();
								break;
							}
							else if (Key[0] == 'n')
								break;
							else
								cout << "???" << endl;
						}
						break;
					case 'm':
						P1.Move();
						break;
					case 'c':
						cout << "Who want to check?" << endl;
						cout << "Fighter 1 = 1, Fighter 2 = 2, cancel = n"<< endl;
						for (char in ;true;)
						{
							cin >> in;
							if (in == '1')
							{
								P1.Stats();
								break;
							}
							else if (in == '2')
							{
								P2.Stats();
								break;
							}
							else if (in == 'n')
								break;
							else
								cout << "???" << endl;
						}
						break;
					default:
						cout << "???" << endl;
				}
			}

		for (int turn = 1;turn == 1 && op == 3;)
			{
				rob[0] = rand()%4+1;
				if (rob[0]==1)
					cout << "Deafend" << endl;
				else if (rob[0]==2)
					P2.Heal();
				else if (rob[0]==3)
					P2.SwordRep();
				else if (rob[0]==4)
					P2.ShieldRep();
				turn--;
			}
			
//=====================================================================//
			
	if ((Key[0] == 'd' && Key[1] == 'a') || (Key[0] == 'd' && rob[1] == 1) || (rob[0] == 1 && rob[1] == 1))
	{
		if(!P1.Hit(P2.Attak()-P1.Defence()))
		{
			IsGameOn = false;
			P1.~Chara();
			break;
		}
		
	}
		
	else if (Key[1] == 'a' || rob[1] == 1 || rob[1] == 1)
	{
		if(!P1.Hit(P2.Attak()))
		{
			IsGameOn = false;
			P1.~Chara();
			break;
		}
	}
	}
cout << "<<============================================>>" << endl << "Next round" << endl << "<<============================================>>" << endl;
}
cout << endl << "<<=======================================================================>>" << endl<< endl << endl;


return 0;
}
