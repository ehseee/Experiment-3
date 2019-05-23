// Problem 1 : Experiment 3 //

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double num[10];
	int i, j, s,largest, smallest;
	double sum, average;
	
	cout << "Enter Ten integers: " << endl;
	for(i = 0; i < 10; i++)
		cin >> num[i];
	
	j = 0;
	for ( i = 1; i < 10; i++)
		if (num[j] < num[i])
			j = i;
			
	for (i = 1; i < 10; i++)
		if (num[s] > num[i])
			s = i;
				
	largest = num[j];
	smallest = num[s];
	
	cout << "The Smallest Integer is = " << smallest << endl;
	cout << "The Largest Integer is = " << largest << endl;
		
	sum = 0;
	for(i = 0; i < 10; i++)
		sum = sum + num[i];	
		average = sum/10;

	cout << "The Total is = " << sum << endl;
	cout << "The Average is = " << average << endl;
	
	_getch();
	return 0;
	
}
