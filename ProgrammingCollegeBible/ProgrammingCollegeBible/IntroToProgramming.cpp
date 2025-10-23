#include "IntroToProgramming.h"
//To Know use "\n" since endl makes things slower
Beginning::Beginning() {
    cout << "Welcome To Intro To Programming" << "\n";
    cout << "Please Select Anything Down Below On What You Would Like To Learn/Study" << "\n";
    do {
        cout << "1.Variables" << "\n";
        cout << "2.Expressions" << "\n";
        cout << "3.Syntax" << "\n";
        cout << "4.Decisions" << "\n";
        cout << "5.Loops" << "\n";
        cout << "6.File I/O's" << "\n";
        cout << "7.Function" << "\n";
        cout << "8.Arrays" << "\n";
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
    cout << "\n=================================" << "\n";
    cout << "Welcome To Variables" << "\n";
    cout << "Variables are containers for storing data. They also are storage locations inside computer's memory that hold values or data" << "\n";

    cout << "Here Are All The Variables In C++" << "\n";
    cout << "=================================\n" << "\n";

    //Integers
    cout << "1. Int(Integer)\n" << "\n";
    cout << "Defintion: An integer stores a whole number and only a whole number" << "\n";
    cout << "Size: 4 Bytes" << "\n";
    cout << "Range: -2,147,483,648 to 2,147,483,647" << "\n";
    cout << "Example: int age = 20;" << "\n";
    cout << "Other Exanmple: int debt = -100" << "\n";
    cout << "Output: 20" << "\n";
    cout << "Output: -100" << "\n";
    int age = 20;
    int debt = -100;
    cout << "age = " << age << "\n";
    cout << "debt = " << debt << "\n";


    cout << "Unsigned Int\n" << "\n";
    cout << "Defintion: A Whole Number In The Computer That Can Be Zero Or Positive It does not have a sign bit to represent negative numbers" << "\n";
    cout << "Size: 4 bytes" << "\n";
    cout << "Range: 0 to 4,294,967,295" << "\n";
    cout << "Example: unsigned int numberOfPeople = 10" << "\n";
    cout << "Example For Error: unsigned int NumberOfPeoples = -1" << "\n";

    unsigned int numberOfPeople = 10;
    unsigned int numberOfPeoples = -1;
    cout << "numberOfPeople = " << numberOfPeople << "\n";
    cout << "numberOfPeoples = " << numberOfPeoples << "\n";


    cout << "Longer Explination:\n" << "\n";
    cout << "What to know about a unsigned int is that it cant logically be a negative\n" << "\n";
    cout << "\nThe unsigned Int only holds non-negative values which aligns with real world meaning of the data it represents.It allows a larger positive range compared to a signed integer of the same size" << "\n";
    cout << "\nA Real World Example:" << "\n";
    cout << "Think About it this way -> A Store cant get a negative value of supplies since it would be unrealistic a store can get 0 to a random number of supplies with it being positive\n" << "\n";


    //Double
    cout << "2. Double\n" << "\n";
    cout << "Definition: Stores floating point numbers with decimals" << "\n";
    cout << "Size: 4 bytes" << "\n";
    cout << "Range: Will Work On Later" << "\n";
    cout << "Example: float dec = 12.55" << "\n";
    float dec = 12.55;
    cout << "dec = " << dec << "\n";

    //string
    cout << "3. String" << "\n";
    cout << "Definition: Stores Text" << "\n";
    cout << "Size: 8 bytes" << "\n";
    cout << "Range: Will Work On later" << "\n";
    cout << "Example: string name = Thomas" << "\n";
    string name = "Thomas";
    cout << "name = " << name << "\n";

    //Char
    cout << "4.Char\n";
    cout << "Definition: Stores only Characters\n";
    cout << "Size: 1 byte\n";
    cout << "Example: char grade = 'A'\n";
    char grade = 'A';
    cout << "grade = " << grade << "\n";

    //Bool
    cout << "5.Bool\n";
    cout << "Definition: Only Uses True Or False Statements\n";
    cout << "Size: 1 byte\n";
    cout << "Example: bool heads = true; \n";






}

void Beginning::Expressions()
{
    cout << "Welcome To Expressions" << "\n";


}

void Beginning::Syntax()
{
    cout << "Welcome To Syntax" << "\n";

}

void Beginning::Decisions()
{
    cout << "Welcome To Decisions" << "\n";

}

void Beginning::Loops()
{
    cout << "Welcome To Loops" << "\n";

}

void Beginning::FileIO()
{
    cout << "Welcome To FileIO" << "\n";

}

void Beginning::Functions()
{
    cout << "Welcome To Functions" << "\n";

}

void Beginning::Arrays()
{
    cout << "Welcome TO Arrays" << "\n";
}