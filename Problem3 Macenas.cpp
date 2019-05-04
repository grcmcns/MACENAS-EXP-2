#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>


using namespace std; 
int main()

{
	int x, y;
	float z, V; 
	z = 2.5;
	
	cout << "Values of x: " << "\n\n";
	
	cout << "1. x = 1" << "\n";
	cout << "2. x = 2" << "\n";
	cout << "3. Other values of x" << "\n\n"; 
	cout << "Enter your chosen value of x: (1-3): ";
	cin >> x; 
	
	cout << "Enter a value for y= "; 
	cin >> y;

	switch(x)
	{
	case 1:
		if ( 1 < y && y < 5)
		{
			V = x * y * z;
			cout << setw(10) << setprecision(2) << "V = " << V; 
		}
		else
		{
			V = x + y / z;
			cout << setw(10) << setprecision(2) << "V = " << V; 
		}
		break;
		
	case 2:
		if (y <= 5)
		{
			V = abs(( x - y )/z);
			cout << setw(10) << setprecision(2) << "V = " << V; 
		}
		else if (y >= 6)
		{
			V = x - sqrt(y + z);
			cout << setw(10) << setprecision(2) << "V = " << V; 
		}
		break;
		
	case 3:
		if ( x >= 3)
			cout << "Enter a value of x= "; cin >> x; 
			V = x + y + z;
			cout << setw(10) << setprecision(2) << "V = " << V; 
			break;	
				
	default:
			cout << "\n" << "You must enter a number between 1 and 3!! \n";

   }
	
	_getch();
	return 0; 
}
