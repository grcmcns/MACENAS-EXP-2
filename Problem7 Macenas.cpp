#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int num, sum, i;
	num = 0; 

    do {
        cout<< "Enter a number: "; cin >> num;
        
        if(num > 0) 
		{
            for(i=1; i<num+1; i++)
			{
                sum = sum + i;
            }
        
        cout<<"The sum of all whole number from 1 to " << num <<" is " << sum << ". \n";
        sum = 0;
        }
        
        else
        {
        	cout << "Thank you!";
		}
		
    } while(num > 0);
    
    _getch();
    return 0;
}
