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

void bubblesort()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(array[j+1]<array[j])
			{
				swap(array[j+1],array[j]);
			}
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
	bubblesort();
	display();
}
