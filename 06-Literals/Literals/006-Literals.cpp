

#include <iostream>
using namespace std;

int main()
{
    int number = 10;
    int octalNumber = 013;
    int hexadecimalNumber = 0xab;

    float floatNumber = 3.14;
    double doubleNumber = 23.53;

    char character = 'a';
    string text = "hello there";

    bool situation = true;

    string* nullPOINTER = nullptr;

    cout << "********** literal types **********" << "\n";
    cout << "number: " << number << endl;
    cout << "octalNUmber: " << octalNumber << endl;
    cout << "hexadecimalNumber: " << hexadecimalNumber << endl;
    cout << "floatNumber: " << floatNumber << endl;
    cout << "doubleNumber: " << doubleNumber << endl;
    cout << "character: " << character << endl;
    cout << "text: " << text << endl;
    cout << "situation: " << situation << endl;

    cout << "\n\********** nescape sequences **********" << endl;
    cout << "back slash: " << "\\" << endl;
    cout << "tab: " << "\t" << endl;
    cout << "new Line" << "\n";
    cout << "double quote: " << "\"" << endl;
    cout << "single quote: " << "\'" << endl;\
    cout << "audio bell: " << "\a" << endl;

}
