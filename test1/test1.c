// test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	
	string TypeofDrink;
	double AmountofCaffeine;
	int ShowHours;
	double RemainingCaffeine;
	const double N = 0.13;
	char ans='Y';

	do {
		cout << "Which drink do you want to check?\t";
		//cin >> TypeofDrink;
		getline(cin, TypeofDrink);
		cin.clear();
		cout << "What is the amount of caffein in miligram?\t";
		cin >> AmountofCaffeine;

		while (!cin || AmountofCaffeine < 0 || AmountofCaffeine > 350)
		{
			cin.clear();
			cin.ignore(200, '\n');
			cout << "Please enter the correct number between 1 and 350. " << endl;
			cin >> AmountofCaffeine;
		}

		cout << "How many hours do you want to check?\t";
		cin >> ShowHours;

		while (!cin || ShowHours < 1 || ShowHours > 14)
		{
			cin.clear();
			cin.ignore(200, '\n');
			cout << " Please enter hours between 1 and 14" << endl;
			cin >> ShowHours;
		}



		//while (!cin || ShowHours >= 1 || ShowHours <= 14|| ans=='Y')
		//	while (!cin )
			//{
		//	cin.clear();
		//	cin.ignore(200, '\n');
			cout << fixed << showpoint << setprecision(2);
			cout << "TypeofDrink\t\t\t" << setw(10) << TypeofDrink << endl;
			cout << "Hours to see\t\t" << setw(14) << ShowHours << " hour(s)" << endl;
			cout << "Amount of Caffeine\t\t" << setw(10) << AmountofCaffeine << " mg" << endl;
			
			int i;
			for (i = 1; i <= ShowHours; i++)
			{
				RemainingCaffeine = AmountofCaffeine - (N*AmountofCaffeine);
				cout << "Hour " << i << ":\t" << setw(5) << "Remaining Caffeine\t" << setw(10) << RemainingCaffeine << "mg" << endl;
				cout << fixed << showpoint << setprecision(2);
				if (RemainingCaffeine > 0)
				{
					AmountofCaffeine = RemainingCaffeine;
				}
				else
				{
					AmountofCaffeine = 0;
				}
			}
			cout << endl;
			
	//	}
		
		cout << " Do you want to continue (Y/N)?\t";
		cin >> ans;
		}
	 	
	while (ans == 'Y' );
	return 0;
}

