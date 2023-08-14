#include <iostream>
using namespace std;

int i,j,n;
int array[100];

//create array

void getvalues()
{
	cout<<"How many values?";
	cin>>n;
	cout<<"Enter the values";
	
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
}
//selection sort

void selectionsort()
{
	for(i=0;i<n;i++)
	{
		int minpos=i;
		for(j=i+1;j<n;j++)
		{
			if (array[j]<array[minpos])
			{
				minpos=j;
			}
		}
		swap(array[i],array[minpos]);
	}
}

//display

void display()
{
	for (i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
}

//create search

void binarysearch()
{
	int low=0;
	int high=n-1;
	int mid;
	int searchvalue;
	cout<<"Enter search value";
	cin>>searchvalue;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(searchvalue==array[mid])
		{
			cout<<searchvalue<<"Found at location"<<mid;
			break;
		}
		else if(searchvalue<array[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(low>high)
	{
		cout<<searchvalue<<"Cannot be found";
	}
}
int main()
{
	getvalues();
	//binarysearch();
	selectionsort();
	display();
	return 0;
}
