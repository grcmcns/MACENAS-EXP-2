#include <iostream>
#include <conio.h>
using namespace std; 

int main()

{
	int f; 
	float balance, bill, gallons; 
	
	f = 35; 
	cout << "Enter how many gallons used = "; cin >> gallons;
	cout << "Enter unpaid balance = " << "P"; cin >> balance; 
	
	bill = f + (1.10 * gallons); 
	
	if (balance > 0)
	{
		cout << "The total water bill is = " << "P" << bill + balance + 20; 
	}
	else 
	{
		cout << "The total water bill is = " << "P" << bill;
	}
	
	_getch();
	return 0;

} 


