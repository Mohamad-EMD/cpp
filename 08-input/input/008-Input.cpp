

#include <iostream>
#include <string>

int main()
{
    std::cout << "enter your name: "; 
    std::string name;
    std::cin >> name; // skipping a line is a terminal's input behavior
    std::cout << "enter a number: ";
    int number;
    std::cin >> number;
    

    std::cout << "enter your full name: ";
    std::string fullName;
    std::cin.ignore();
    std::getline(std::cin, fullName);

    std::cout << "name: " << name << std::endl;
    std::cout << "number: " << number << std::endl;
    std::cout << "full Name: " << fullName;
}


