//ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//create a simple calculator.

#include <iostream>
using namespace std;

int main()
{
	string name;
	char op;
	double num1, num2;

	cout << "Please enter your name! \a"<<endl;
	cin >> name;
	cout << "Name: " << name << endl;

	cout << "Please select a operator either + or - or * or / for your calculation!\a" << endl;
	cin >> op;

	cout << "Please enter two number in your calculation!\a" << endl;
	cin >> num1 >> num2;

	switch (op)
	{
	case'+':
		cout << num1 + num2;
		break;

	case'-':
		cout << num1 - num2;
		break;

	case'*':
		cout << num1 * num2;
		break;

	case'/':
		cout << num1 / num2;
		break;

	default:
		//If the operator is other than + or - or * or/,error message is shown
		cout << "Syntax Error!\a\a\a\a\a\a" << endl;

	}
	return 0;

}
