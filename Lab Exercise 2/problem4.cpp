#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int counter;

	for(counter=1; counter<=10; counter++)
		cout << counter << ", ";
	
	for(counter=12; counter<=30; counter+=2)
		cout << counter << ", ";	
		
	getch();
	return 0;
}

