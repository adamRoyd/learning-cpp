#pragma once
#include <iostream>
#include <string>

#include "Tweeter.h"
#include "status.h"
#include "Utility.h";


int main()
{
    int x;
    std::cout << "Enter a number" << std::endl;
    std::cin >> x;

    if (IsPrime(x)) {
        std::cout << x << " is prime" << std::endl;
    }
    else {
        std::cout << x << " is not prime" << std::endl;
    }

    if (Is2MorePrime(x)) {
        std::cout << x << " is prime" << std::endl;
    }
    else {
        std::cout << x << " is not prime" << std::endl;
    }
    

    Person p1("Adam", "Boothroyd", 2);
    {
        Tweeter t("Someone", "Else", 3, "@yea");
        std::string name2 = t.getName();
        std::cout << "Name retrieved " << name2 << std::endl;
    }        

    FileError fe = FileError::notfound;
    fe = FileError::ok;
    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
