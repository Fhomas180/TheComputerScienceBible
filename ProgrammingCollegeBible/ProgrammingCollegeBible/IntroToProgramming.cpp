#include "IntroToProgramming.h"
//To Know use "\n" since endl makes things slower
Beginning::Beginning() {
    cout << "Welcome To Intro To Programming" << "\n";
    cout << "Please Select Anything Down Below On What You Would Like To Learn/Study" << "\n";
    while (select != 10) {

        do {
            cout << "1.Starter Data Types" << "\n";
            cout << "2.Other DataTypes" << endl;
            cout << "3.Expressions" << "\n";
            cout << "4.Syntax" << "\n";
            cout << "5.Decisions" << "\n";
            cout << "6.Loops" << "\n";
            cout << "7.File I/O's" << "\n";
            cout << "8.Function" << "\n";
            cout << "9.Arrays" << "\n";
            cout << "10.Go Back To Menu" << "\n";
            cin >> select;
        } while (select < 1 || select > 10);

        switch (select) {
        case 1:
            StartDataTypes();
            break;
        case 2:
            OtherDataTypes();
            break;
        case 3:
            Expressions();
            break;
        case 4:
            Syntax();
            break;
        case 5:
            Decisions();
            break;
        case 6:
            Loops();
            break;
        case 7:
            FileIO();
            break;
        case 8:
            Functions();
            break;
        case 9:
            Arrays();
            break;
        case 10:
            break;
        }
    }
}

Beginning::~Beginning()
{

}

void Beginning::StartDataTypes()
{
    cout << "\n=================================" << "\n";
    cout << "Welcome To Data Types" << "\n";
    cout << "=================================\n" << "\n";

    //Integers
    cout << "1. Int(Integer)\n" << "\n";
    cout << "Defintion: An integer stores a whole number and only a whole number" << "\n";
    cout << "Size: 4 Bytes" << "\n";
    cout << "Range: -2,147,483,648 to 2,147,483,647" << "\n";
    cout << "Example: int age = 20;" << "\n";
    cout << "Other Example: int debt = -100" << "\n";
    cout << "Output: 20" << "\n";
    cout << "Output: -100" << "\n";
    int age = 20;
    int debt = -100;
    cout << "age = " << age << "\n";
    cout << "debt = " << debt << "\n";

    //Double
    cout << "2. Double\n" << "\n";
    cout << "Definition: Stores floating point numbers with double precision" << "\n";
    cout << "Size: 8 bytes" << "\n";
    cout << "Range: 1.7E +/- 308 (fifteen to seventeen significant digits)" << "\n";
    cout << "Example: double dec = 12.55" << "\n";
    double dec = 12.55;
    cout << "dec = " << dec << "\n";

    

    //string
    cout << "3. String" << "\n";
    cout << "Definition: Stores Text" << "\n";
    cout << "Size: Variable (depends on text length)" << "\n";
    cout << "Range: doesnt have a range" << "\n";
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
    cout << "Range: Only uses True and False\n";
    cout << "Example: bool heads = true; \n";

    //Void

    cout << "6. Void\n";
    cout << "Definition: Serves multiple purposes primarily indicating the absence of a value or an unsepcified type\n";
    cout << "Note: They Dont return anything\n";
    cout << "Size: No Size\n";
    cout << "Range: Doesn't have a range\n";
    cout << "Example void theExample(){}\n";

    //Float

    cout << "7. Float\n";
    cout << "Definition: Floats only store decimals\n";
    cout << "Size: 4 bytes\n";
    cout << "Range:±1.4E-45 to ±3.4E+38\n";
    cout << "Example: float decc = 12.22\n";
    float decc = 12.22;
    cout << "decc = " << decc<<"\n";

    //Short
    cout << "8. Short\n";
    cout << "Definition: A short is used to store whole numbers in a small amount of memory compared to a int\n";
    cout << "Size: 2 bytes\n";
    cout << "Range: -32,767 to 32,767\n";
    cout << "Example short smallnum = 12345\n";
    short smallnum = 12345;
    cout << "smallnum = " << smallnum<<"\n";

    //Long 
    cout << "9.Long\n";
    cout << "Definition: A long is used to store whole numbers to hold a large amount of memory\n";
    cout << "Size: 4 bytes\n";
    cout << "Range:-2,147,483,648 to 2,147,483,647\n";
    cout << "Example long largenum = 123456677877\n";
    long long largenum = 123456677877;
    cout << "largenum = " << largenum << "\n";

    cout << "10. Long Long\n";
    cout << "Definition: Used to store very large whole numbers\n";
    cout << "Size: 8 bytes\n";
    cout << "Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807\n";
    cout << "Example: long long hugenum = 9000000000000\n";
    long long hugenum = 9000000000000;
    cout << "hugenum = " << hugenum << "\n";
    cout << "===========================================================\n";
    cout << "End\n";
}
void Beginning::OtherDataTypes() {
    cout << "\n===================================" << "\n";
    cout << "Welcome To The Other DataTypes" << "\n";
    cout << "Definition Of A Data Type: Is a classification that specifies the type of value a variable or piece of data can hold in computer programming it dictates how the data should be interpreted and processed by the comptuer\n.";
    cout << "\n======================================" << "\n";

    cout << "1. Unsigned Int\n" << "\n";

    cout << "Defintion: A Whole Number In The Computer That Can Be Zero Or Positive It does not have a sign bit to represent negative numbers" << "\n";
    cout << "Size: 4 bytes" << "\n";
    cout << "Range: 0 to 4,294,967,295" << "\n";
    cout << "Example: unsigned int numberOfPeople = 10" << "\n";
    cout << "Example For Error: unsigned int NumberOfPeoples = -1" << "\n";

    unsigned int numberOfPeople = 10;
    unsigned int numberOfPeoples = -1;
    cout << "numberOfPeople = " << numberOfPeople << "\n";
    cout << "numberOfPeoples = " << numberOfPeoples << "\n";
    cout << "\nA Real World Example:" << "\n";
    cout << "Think About it this way -> A Store cant get a negative value of supplies since it would be unrealistic a store can get 0 to a random number of supplies with it being positive\n" << "\n";

    cout << "Unsigned Char\n";

    cout << "Definition: a character type in C++ that represents a numerical value" << "\n";
    cout << "Size: 1 byte" << "\n";
    cout << "Range: 0 to 255" << "\n";
    cout << "Example unsigned char score = A" << "\n";
    unsigned char score = 'A';
    cout << "Score: " << static_cast<int>(score) << "\n";


    cout << "Unsigned Short\n";
    cout << "Definiton: use to store non-negative whole numbers\n";
    cout << "Size: 2 bytes" << "\n";
    cout << "Range: 0 to 65,535" << "\n";
    cout << "Example: unsigned short aVariable = 1" << "\n";
    unsigned short aVariable = 1;
    cout << "Example Answer: " << aVariable << "\n";

    cout << "Unsigned Long\n";
    cout << "Definition: use to store non negative whole numbers\n";
    cout << "Size: 4 bytes\n";
    cout << "Range Two differnt ones: for 32bit 0 to 4,294,967,295 (2^32 - 1) for 64 bit systems 8 bytes 0 to 18,446,744,073,709,551,615 (2^64 − 1)\n";
 
    cout << "Example: unsigned long lVariable = 1234\n";
    unsigned long lVariable = 1234;
    cout << "Answer: " << lVariable << "\n";



}

void Beginning::Expressions()
{
    cout << "=======================================" << "\n";
    cout << "Welcome To Expressions" << "\n";
    cout << "=======================================" << "\n";

    cout << "1. Arithmetic \n";
    cout << "Addition(+)\n";
    cout << "Example int a = 5; int b = 10;a + b\n";
    int a = 5;
    int b = 10;
    cout << "Example Answer: " << a + b << "\n";
    cout << "Subtraction(-)\n";
    cout << "Example int c = 5; int d = 10;c - d\n";
    int c = 5;
    int d = 10;
    cout << "Example Answer: " << c - d << "\n";
    cout << "Multiplication(*)\n";
    cout << "Example int e = 5; int f = 10; e * f\n";
    int e = 5;
    int f = 10;
    cout << "Example Answer: " << e * f << "\n";
    cout << "Division (/)\n";
    cout << "Example int adiv = 5; int bdiv = 10; adiv / bdiv\n";
    int adiv = 5;
    int bdiv = 10;
    cout << "Example Answer: " << adiv / bdiv << "\n";
    cout << "Remainder(%)\n";
    cout << "Example int arem = 5; int brem = 10; arem % brem\n";
    int arem = 5;
    int brem = 10;
    cout << "Example Answer: " << arem % brem << "\n";
    cout << "BitWise NOT(From Descrete Math(~))\n";
    cout << "Bitwise AND(From Descrete Math(&))\n";
    cout << "BitWise OR(From Descrete Math(|))\n";
    cout << "Bitwise XOR(^)\n";
    cout << "Bitwise Shift Left(<<)\n";
    cout << "Bitwise Shift Right(>>)\n";
    


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