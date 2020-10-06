#include <iostream>
using namespace std;

float average(float[],int);

int main()
{
	float array[4];
	int i;
	float userEntry;
	float numAverage;
	
	cout<<"Please enter 4 floats: \n\n";
	for(i=0; i<4; i++)
	{
		cin>>userEntry;
		array[i] = userEntry;
	}
	
	numAverage = average(array, 4);
	cout<<"The average value of the array is "<<numAverage;
	
}

float average (float array[], int length)
{
	float average;
	float total = 0.0;
	int i;
	float decLength = length;
	
	for(i=0; i<length; i++)
	{
		total+=array[i];
	}
	
	average = total/decLength;
	
	
}
