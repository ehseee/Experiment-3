// Problem 3 : Experiment 3//

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

	char arr[50], i, j, temp;
	int size;
	
	cout << "Enter array size : ";
	cin >> size;
	
	cout << "Enter array elements : \n";
	for(i = 0; i < size; i++)
		cin >> arr[i];
		
	for(i = 1; i < size; i++)
	{
		for(j = 0; j < (size-i); j++)
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
	}	
	
	cout << "Displaying value : \n";
	for(i = 0; i < size; i++)
	{
		cout << arr[i] << "";
	}
	getch();
}
