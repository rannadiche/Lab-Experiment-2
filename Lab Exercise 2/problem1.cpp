#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	char package;
	int hours, dueAmount;
	
	cout << "Enter package purchased: ";
	cin >> package;
	
	cout << "Enter number of hours used: ";
	cin >> hours;
	
	switch(package)
	{
		case 'A':
		case 'a':
			if(hours <= 10)
			cout << "Amount due is P995.";
			else
			cout << "Amount due is " << 995 + (hours - 10) * 20;
			break;
			
		case 'B':
		case 'b':
			if(hours <= 20)
			cout << "Amount due is P1495.";
			else
			cout << "Amount due is " << 1495 + (hours - 20) *10;
			break;
		
		case 'C':
		case 'c':
			cout << "Amount due is P1995.";
		
		default:
			cout << "Invalid input.";
		}
		
		getch();
		return 0;		
}


