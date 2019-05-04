#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter the first number: "; cin >> a;
	cout << "Enter the second number: "; cin >> b; 
	cout << "Enter the third number: "; cin >> c; 
	
	if (a > b && a > c)
	cout << "The LARGEST of the three numbers is " << a << "." << endl;
	
	else if (b > a && b > c)
	cout << "The LARGEST of the three numbers is " << b << "." << endl;
	
	else if ( c > a && c > b )
	cout << " The LARGEST of the three numbers is " << c << "." << endl;
	
	else 
	cout << "The three numbers are equal.";
	
_getch();
return 0;
}
