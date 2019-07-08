#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int gallonsUsed;
	float balance, billCost;

	cout << "Enter amount of gallons consumed: ";
	cin >> gallonsUsed;

	cout << "Enter unpaid amount from the last month: ";
	cin >> balance;
	
	if(balance > 0)
	{
		billCost = 35 + (1.15 * gallonsUsed) + balance + 20;
		cout << "Your total water bill costs: " << billCost;
	}
	
	else if (balance == 0)
	{
		billCost = 35 + (1.15 * gallonsUsed);
		cout << "Yout total water bill costs: " << billCost;
	}
	
	else
	{
		cout << "Invalid input.";
	}

	getch();
	return 0;
}
