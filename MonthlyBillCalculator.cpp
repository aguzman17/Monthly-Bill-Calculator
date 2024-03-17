// July 27, 2019
// Purpose: This program calculates a customer's montly bill.
// Input: Name, packagen and how many minutes were used
// Output: A bill the includes the information given before, and a total amount due. and how much the customer would save if the customer has a different package.

#include <iostream>
using namespace std; 

int main()
{
	char package;
	const double packA = 39.99;
	const double packB = 59.99;
	const double packC = 69.99;
	double bill = 0.0;
	double minutes; 
	string name;
	
	cout << "Please insert your name: ";
	cin >> name;

	cout << "What package did you purchase, please insert only the letter and in capslock A,B or C: ";
	cin >> package; 

	cout << "How many minutes did you use: ";
	cin >> minutes;
	cout << "\n";

	if (package == 'A' && minutes <= 450)
	
		cout << "Customer " << name << " Your total due is: $" << packA;
	else if (package == 'A' && minutes > 450)
				bill = ((minutes - 450) * 0.45) + packA;
			cout << "Customer " << name << " Your total due is: $" << bill << "\n"
				 << "You can change to Package C, you would get unlimited minutes for only $69.99.\n";
	
	if  (package == 'B' && minutes <= 900)
	
		cout << "Customer " << name << " Your total due is: $" << packB;
	else if (package == 'B' && minutes > 900)
				bill = ((minutes - 900) * 0.40) + packB;
			cout << "Customer " << name << " Your total due is: $" << bill << "\n";
			cout << "If you change your plan to Package A, you would save $20, but you would have less minutes. \n\n";

	if (package == 'C')
	{
		cout << "Customer " << name << " Your total due is: $" << packC << "\n";
		cout << "If you purchase Package A, you would save $30, but you would get only 450 minutes.";
		cout << "If you purchase Package B, you would save $10, and you would get 900 minutes. \n\n";
		
	}
	return 0;
}
