// ConsoleApplication78.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class contribution {
public:
	long double cash;
	static double s_procetn ;
	contribution() {}
	contribution(long double cash) {
		this->cash = cash;
	}
};
double contribution :: s_procetn = 1;

class contributor : public contribution {
public:
	string name;
	vector <contribution> cont;
	void addCont(contribution Cont) {
		cont.push_back(Cont);
		s_procetn++;
	}
};
int main()
{
	contributor Vasya; 
	Vasya.name = "Vasyan";
	contribution pivo(100);
	contribution gus(100);
	contribution just_money_about_which_the_wife_does_not_know(100);
	Vasya.addCont(pivo);
	Vasya.addCont(gus);
	Vasya.addCont(just_money_about_which_the_wife_does_not_know);
	cout << Vasya.s_procetn;
	Vasya.s_procetn = 3;
	cout <<endl<< Vasya.s_procetn;
}
