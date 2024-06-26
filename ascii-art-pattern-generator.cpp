#include<iostream>
#include<string>
using namespace std;
int main ()
{
	float scale;
	int i=0;
	const int width=11;
	cout<<"Enter scale ";
	cin>>scale;
	cout<<"  *********** "<<endl;
	cout<<"--***********--"<<endl;
	for(i;i<(scale*width);i++)
	{
		cout<<"  ";

	for(int j=0;j<width;j++)
	{
		cout<<"*";
	}
	cout<<endl;
	}
	
	for(int i=0;i<(scale*18);i++)
	{
		cout<<"  ";
		for(int j=0;j<width;j++)
		{
			if(j==2||j==7)
				cout<<"|";
			else
				cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<(scale*4);i++)
	{
		cout<<"||";
		for(int j=0;j<width;j++)
		{
			if(j==2||j==7)
		{
			
			cout<<"|";
		}
		else
		cout<<"*";
	}
	cout<<"||"<<endl;
	}
	cout<<" _____________"<<endl;
	cout<<" ^^^^^^^^^^^^^"<<endl;
	cout<<" ^^^^^^^^^^^^^"<<endl;
	cout<<" ^^^^^^^^^^^^^"<<endl;
}