#include <iostream>

using namespace std;

void function()
{
	int i,j;
	int outerloop=1;
	int innerloop=1;
	
	for(i=0;i<10;i++)
	{
		cout<<"Number of outer loops executed: "<<"\n"<<outerloop++;
		
		for(j=0;j<10;j++)
		{
			cout<<"Richie"<<innerloop++<<"\n"
		}
	}
	
}

void display()
{
	cout<<innerloop;
	cout<<outerloop;
}

int main()
{
	function();
	display();
}
