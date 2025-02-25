/*
Amerike University
Author: Ali Angel
Work #: 3
Date: 25/02/2025
Description: This program will ask the user to input the following data: Name and Last Name, Age and Height
*/

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main (){

    string usrName;
    string usrLastName;
    int usrAge;
    float usrHeight;

    cout << "Hello, the following program will ask you to input some of your personal info for out database\n";
    cout << "Write a name of your choosing: \n";
    getline(cin,usrName);
    cout << "Write one of your last names: \n";
    getline(cin,usrLastName);
    cout << "Now write your age: \n";
    cin >> usrAge;
    cout << "Input your height in centimeters: \n";
    cin >> usrHeight;
    cout << "We will now print your data \n";
    cout << "Press any key to continue ";
    getch();
    cout << "\nFirst name: " << usrName;
    cout << "\nLast name: " << usrLastName;
    cout << "\nAge: " << usrAge;
    cout << "\nHeight: " << usrHeight;

    return 0;
}