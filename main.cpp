#include <iostream>
#include "IntroToProgramming.h"
#include "AdvancedProgramming.h"
#include "DataStructuresAlgorithms.h"
#include "DatabaseManagmentSystems.h"
#include "IntrotoModernGraphics.h"
#include "GameArchitecutre.h"
#include "ComputerArchitecture.h"
#include "AIForGames.h"

using namespace std;


int main() {
    int pick = 0;
    cout << "Welcome To Computer Science Notes\n" << endl;
    cout << "Objective: To Note Anything From Freshmen Year To Senior Year\n" << endl;
    while (pick != 10) {


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
            cout << "9.Go Back" << endl;
            cout << "10. Quit" << endl;
            cin >> pick;
        } while (pick < 1 || pick > 10);
        switch (pick) {
        case 1:
            Beginning::Beginning();
            break;
        case 2:
            Advanced::Advanced();
            break;
        case 3:
            DataStructuresAlgorithms::DataStructuresAlgorithms();
            break;
        case 4:
            DatabaseMangementSystems::DatabaseMangementSystems();
            break;
        case 5:
            IntroToModernGraphics::IntroToModernGraphics();
            break;
        case 6:
            GameArchitecture::GameArchitecture();
            break;
        case 7:
            ComputerArchitecture::ComputerArchitecture();
            break;
        case 8:
            AIForGames::AIForGames();
            break;
        case 9:

            break;
        case 10:
            cout << "Goodbye!" << endl;

        }
    }




}