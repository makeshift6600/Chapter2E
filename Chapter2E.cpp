/*
File name: Chapter2E.cpp
Date: 9/2025
Programmer name: Jamen Cannady
Requirements: Takes two numbers and adds and displays the sum.
*/

#include <iostream>

using namespace std;



int main()
{
	int number1;
	int number2;

	cout << "Please enter your first number: ";
	cin >> number1;

	cout << "Please enter your second number: ";
	cin >> number2;

	int sum = number1 + number2;

	cout << "The sum of " << number1 << " and " << number2 << " is " << sum;
}

