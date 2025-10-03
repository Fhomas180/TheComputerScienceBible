#include "IntroToProgramming.h"

Beginning::Beginning() {
	cout << "Welcome To Intro To Programming" << endl;
	cout << "Please Select Anything Down Below On What You Would Like To Learn/Study" << endl;
	do {
		cout << "1.Variables"<< endl;
		cout << "2.Expressions" << endl;
		cout << "3.Syntax" << endl;
		cout << "4.Decisions" << endl;
		cout << "5.Loops" << endl;
		cout << "6.File I/O's" << endl;
		cout << "7.Function" << endl;
		cout << "8.Arrays" << endl;



	} while (select > 0 && select < 8);
	cin >> select;
	switch (select) {
	case 1:
		Variables();
	}

}
Beginning::~Beginning() {

}

int Beginning::Variables()
{
	cout << "Welcome To Variables" << endl;

	return 0;
}

int Beginning::Expressions()
{
	cout << "Welcome To Expressions" << endl;

	return 0;
}

int Beginning::Syntax()
{
	cout << "Welcome To Syntax" << endl;

	return 0;
}

int Beginning::Decisions()
{
	cout << "Welcome To Decisions" << endl;

	return 0;
}

int Beginning::Loops()
{
	cout << "Welcome To Loops" << endl;

	return 0;
}

int Beginning::FileIO()
{
	cout << "Welcome To FileIO" << endl;

	return 0;
}

int Beginning::Functions()
{
	cout << "Welcome To Functions" << endl;

	return 0;
}

int Beginning::Arrays()
{
	cout << "Welcome TO Arrays" << endl;
	return 0;
}
