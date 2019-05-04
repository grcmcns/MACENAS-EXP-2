#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int choice, hours, Totalamount, additional; 
	
	cout << "Packages: \n";
	cout << "1. Package A\n";
	cout << "2. Package B\n";
	cout << "3. Package C\n";
	cout << "Enter the package you purchased: (1-3): ";
	cin >> choice;
	
	cout << "Enter how many hours used:"; 
	cin >> hours; 
	
	switch(choice)
	
	{
	case 1:
		if (hours <= 10)
		{
			Totalamount = 995;
			cout <<"Total amount due:" << " " << "P" << Totalamount << endl;
		}
		else 
		{
			additional = ( hours - 10) * 20;
			Totalamount = 995 + additional;
			cout <<"Total amount due:" << " " << "P" << Totalamount << endl;
		}
		break;
		
	case 2:
		if (hours <= 20)
		{
			Totalamount = 1495;
			cout <<"Total amount due:" << " " << "P" << Totalamount << endl;
		}
		else 
		{
			additional = ( hours - 20) * 10;
			Totalamount = 1495 + additional;
			cout <<"Total amount due:" << " " << "P" << Totalamount << endl;
		}
		break;
		
	case 3:
			Totalamount = 1995;
			cout <<"Total amount due:" << " " << "P" << Totalamount << endl;
			break;
			
	default:
		cout << "You must enter a number between 1 and 3. \n";
   }
			
	
  _getch();
  return 0; 
  	
}
