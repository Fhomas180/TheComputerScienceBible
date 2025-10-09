#include "IntroToProgramming.h"

Beginning::Beginning() {
	cout << "Welcome To Intro To Programming" << endl;
	cout << "Please Select Anything Down Below On What You Would Like To Learn/Study" << endl;
	do {
		cout << "1.Variables" << endl;
		cout << "2.Expressions" << endl;
		cout << "3.Syntax" << endl;
		cout << "4.Decisions" << endl;
		cout << "5.Loops" << endl;
		cout << "6.File I/O's" << endl;
		cout << "7.Function" << endl;
		cout << "8.Arrays" << endl;
		cin >> select;
	} while (select < 1 || select > 8);

	switch (select) {
	case 1:
		Variables();
		break;



	}
}

Beginning::~Beginning()
{

}

void Beginning::Variables()
{
	cout << "\n=================================" << endl;
	cout << "Welcome To Variables" << endl;
	cout << "Here Are All The Variables In C++" << endl;
	cout << "=================================\n" << endl;
	//Integers
	cout << "1. Int(Integer)" << endl;
	cout << "Defintion: An integer stores a whole number and only a whole number" << endl;
	cout << "Size: 4 Bytes" << endl;
	cout << "Example: int age = 20;" << endl;
	cout << "Output: 20" << endl;
	int age = 20;
	cout << "age = " << age << "\n" << endl;
	cout << "Unsigned Int" << endl;
	cout << "Definition:A Whole Number In The Computer That Can Be Zero Or Positive It does not have a sign bit to represent negative numbers" << endl;


}

void Beginning::Expressions()
{
	cout << "Welcome To Expressions" << endl;

	return Expressions();
}

void Beginning::Syntax()
{
	cout << "Welcome To Syntax" << endl;

	return Syntax();
}

void Beginning::Decisions()
{
	cout << "Welcome To Decisions" << endl;

	return Decisions();
}

void Beginning::Loops()
{
	cout << "Welcome To Loops" << endl;

	return Loops();
}

void Beginning::FileIO()
{
	cout << "Welcome To FileIO" << endl;

	return FileIO();
}

void Beginning::Functions()
{
	cout << "Welcome To Functions" << endl;

	return Functions();
}

void Beginning::Arrays()
{
	cout << "Welcome TO Arrays" << endl;
	return Arrays();
}