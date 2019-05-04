#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	int i, n1, n2, nextnumber;
	
	n1 = 0;
	n2 = 1; 
	nextnumber = 0; 
	
	cout << "Fibonacci numbers: " << "\n\n"; 
	
	for (i =1; i <=22; ++i)
	{
		if (i == 1)
		{
			cout << n1;
			continue; 
		}
		if (i ==2)
		{
			cout << ", " << n2; 
			continue; 
		}
		
		nextnumber = n1 + n2; 
		n1 = n2; 
		n2 = nextnumber;
		
		cout << ", " << nextnumber;
	}
	
	
	
	_getch();
	return 0;
	
}
