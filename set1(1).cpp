#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str;
	cout<<"Enter your string=";
	cin>>str;
	
	if(str>='0' && str<='9')
	{
		cout<<"the given string is numeric";
	}
	else
	{
		cout<<"the given string is not numeric";
	}
	return 0;
}
