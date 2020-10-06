#include <iostream>
using namespace std;

int Sum(int[10][10],int,int);

const int NUM_ROW = 10;
const int NUM_COLUMN = 10;

int main()
{

	int userRow;
	int userCol;
	int i;
	int j;
	int A[NUM_ROW][NUM_COLUMN] = {0};
	
	cout<<"Enter an integer for row: \n";
	cin>>userRow;
	cout<<"Enter an integer for column: \n";
	cin>>userCol;
	
	for(i=0; i<userRow; i++)
	{
		for(j=0; j<userCol;j++)
		{
			int userInput;
			cout<<"Enter an integer: \n";
			cin>>userInput;
			A[i][j] = userInput;
		}
	}
	
	int total = Sum(A,userRow,userCol);
	
	cout<<"The sum of all elements in your array is "<<total;
	
}

int Sum(int A[][10],int length, int width)
{
	int i;
	int j;
	int total;
	for(i=0; i<length; i++)
	{
		for(j=0; j<width;j++)
		{
			total+=A[i][j];
		}
	}
	
	return total;
}
