#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	int counter; 
	
	cout << "Counting ... \n\n";

	for (counter = 1; counter <= 9; counter++)
	{
		cout << counter << ", ";
	}
	
	counter = 10; 
	while (counter <= 30)
	{
		cout << counter << ", ";
		counter += 2; 
	}
	
	_getch(); 
	return 0;
	
}

