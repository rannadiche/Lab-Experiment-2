#include <iostream>
#include <conio.h>

using namespace std;

int main()
{	
	int n, x, y, z;
	x = 0;
	y = 1;
	
	cout << "Enter number of terms: ";
	cin >> n;
	
	for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << x << " ";
            continue;
        }
        if(i == 2)
        {
            cout << y << " ";
            continue;
        }
        z = x + y;
        x = y;
        y = z;
        
        cout << z << " ";
    }
    return 0;
}
