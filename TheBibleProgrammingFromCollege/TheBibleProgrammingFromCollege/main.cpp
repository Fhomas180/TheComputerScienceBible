#include <iostream>
#include "IntroToProgramming.h"
using namespace std;


int main() {
	int pick = 0;
	cout << "Welcome To Computer Science Notes\n" << endl;
	cout << "Objective: To Note Anything From Freshmen Year To Senior Year\n" << endl;
	do {
		cout << "Choose One By Putting In A Number" << endl;
		cout << "1. Intro To Programming" << endl;
		cout << "2. Advanced Programming" << endl;
		cout << "3. Data Structures & Algorithms" << endl;
		cout << "4. Database Mangement Systems" << endl;
		cout << "5. Intro To Modern Graphics" << endl;
		cout << "6. Game Architecture" << endl;
		cout << "7. Computer Architecture" << endl;
		cout << "8. Artifical Intelligence For Games" << endl;
		cout << "9. Quit" << endl;

	} while (pick < 1 && pick > 9);
	cin >> pick;
	switch (pick) {
	case 1:
		Beginning(); 

	}




}