#include <iostream>
using namespace std;

int main()
{
const int NUM_ROW = 4;
const int NUM_COLUMN = 4;
const int NUM_DEPTH = 3;
float maxValue =0.0;
float minValue = 1000.0;
int i;
int j;
int k;
int count = 0;
float total = 0.0;
float avg;

double value[NUM_ROW][NUM_COLUMN][NUM_DEPTH] =
{ 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2,
2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 3.1, 3.2,
3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4.0, 4.1, 4.2,
4.1, 4.2, 4.3, 4.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 3.1, 3.2};




	
	for(i=0; i<NUM_ROW; i++)
	{
		for(j=0; j<NUM_COLUMN;j++)
		{
			for(k=0; k<NUM_DEPTH;k++)
			{
				if (value[i][j][k]<minValue)
				{
					minValue = value[i][j][k];
				}
				if (value[i][j][k]>maxValue)
				{
					maxValue = value[i][j][k];
				}
				
				total+=value[i][j][k];
				count++;
				
			}
		}
	}
	
	avg = total/count;	
	
	cout<<"The minimum value is "<<minValue<<"\n";
	cout<<"The maximum value is "<<maxValue<<"\n";
	cout<<"The average value is "<<avg<<"\n";
}
