#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n, i, sum;
	sum = 0;

	do
	{
		cout << "Enter a postive number: ";
		cin >> n;
		
		if(n=!0)
		{
			for(i=1; i<=n; i++)
				{
					sum += i;
				}	
			cout << "The sum of numbers from 1 to " << n << " is " << sum;
		}
		
		else
			cout << "Thank you!";
	}	
		
	while(n=!0);
	
	getch();
	return 0;
}
