#include <iostream>
using namespace std;

int i,j,n;
int array[100];

void getvalues()
{
	cout<<"How many values? ";
	cin>>n;
	cout<<"Enter the values: ";
	
	for (i=0;i<n;i++)
	{
		cin>>array[i];
	}
}

void insertionsort()
{
	for(i=0;i<n;i++)
	{
		j=i;
		while(array[j]<array[j-1])
		{
			swap(array[j],array[j-1]);
			j--;
		}
	}
}

void display()
{
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
}

int main()
{
	getvalues();
	insertionsort();
	display();
}
