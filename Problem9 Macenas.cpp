#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	int r, c, i, j;
	
	cout << "How many rows: ";cin >> r;
	cout << "How many columns: "; cin >> c;
	 
	for ( i = 1; i <= r; i++)
	{
		for (j = 1; j <= c; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

_getch();
return 0;

}
