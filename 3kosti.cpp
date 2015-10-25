#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Напишите игру в кости между человеком и компьютером. Они по очереди кидают по два кубика. Побеждает тот, у кого сумма больше.
int main()
{
	int  igrok = 0, comp = 0, igrok1 = 0, igrok2 = 0, comp1 = 0, comp2 = 0;
	char f;
	while (1 > 0) {
		cout << "Press (f) to start ";
		cin >> f;
		cout << endl;
		if (f == 'f' || f == 'F') {
			srand(time(0));
			igrok1 = rand() % 6 + 1;
			igrok2 = rand() % 6 + 1;
			cout << "It's your turn " << endl;
			switch (igrok1) {
			case 1:
				cout << " ------- " << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << " ------- " << endl;
				break;
			case 2:
				cout << " ------- " << endl;
				cout << "| o     |" << endl;
				cout << "|       |" << endl;
				cout << "|     o |" << endl;
				cout << " ------- " << endl;
				break;
			case 3:
				cout << " ------- " << endl;
				cout << "| o     |" << endl;
				cout << "|   o   |" << endl;
				cout << "|     o |" << endl;
				cout << " ------- " << endl;
				break;
			case 4:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			case 5:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			case 6:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			}
			switch (igrok2) {
			case 1:
				cout << " ------- " << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << " ------- " << endl;
				break;
			case 2:
				cout << " ------- " << endl;
				cout << "| o     |" << endl;
				cout << "|       |" << endl;
				cout << "|     o |" << endl;
				cout << " ------- " << endl;
				break;
			case 3:
				cout << " ------- " << endl;
				cout << "| o     |" << endl;
				cout << "|   o   |" << endl;
				cout << "|     o |" << endl;
				cout << " ------- " << endl;
				break;
			case 4:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			case 5:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			case 6:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			}
			igrok = igrok1 + igrok2;
			cout << "Your result: " << igrok1 << " + " << igrok2 << " = " << igrok << endl;
			comp1 = rand() % 6 + 1;
			comp2 = rand() % 6 + 1;
			cout << "It's my turn" << endl;
			switch (comp1) {
			case 1:
				cout << " ------- " << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << " ------- " << endl;
				break;
			case 2:
				cout << " ------- " << endl;
				cout << "| o     |" << endl;
				cout << "|       |" << endl;
				cout << "|     o |" << endl;
				cout << " ------- " << endl;
				break;
			case 3:
				cout << " ------- " << endl;
				cout << "| o     |" << endl;
				cout << "|   o   |" << endl;
				cout << "|     o |" << endl;
				cout << " ------- " << endl;
				break;
			case 4:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			case 5:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			case 6:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;

			}
			switch (comp2) {
			case 1:
				cout << " ------- " << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << " ------- " << endl;
				break;
			case 2:
				cout << " ------- " << endl;
				cout << "| o     |" << endl;
				cout << "|       |" << endl;
				cout << "|     o |" << endl;
				cout << " ------- " << endl;
				break;
			case 3:
				cout << " ------- " << endl;
				cout << "| o     |" << endl;
				cout << "|   o   |" << endl;
				cout << "|     o |" << endl;
				cout << " ------- " << endl;
				break;
			case 4:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			case 5:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			case 6:
				cout << " ------- " << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << " ------- " << endl;
				break;
			}
			comp = comp2 + comp1;
			cout << "My result: " << comp1 << " + " << comp2 << " = " << comp << endl;
			if (igrok == comp) { 
				cout << "Friendship wins!" << endl; }
			else {
				if (igrok > comp) { 
					cout << "Congratulations, you're lucky man!" << endl; }
				else { 
					cout << "Sorry, but even the computer is more lucky than you." << endl; }}
		}}
			return 0;
		}
