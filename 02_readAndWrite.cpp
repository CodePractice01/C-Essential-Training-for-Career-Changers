#include <iostream>
#include <string>
using namespace std;

	 
int main (int argc, char** argv)
{
	string name;
	int year;
	
	cout<<"Enter the year you were born, and your full name: ";
	cin>>year;
	cin.ignore(); //ignore enter..and waited to add next variable
	getline(cin,name); //read the full name
	
	//cout<<"Enter your full name: ";
	//--read until it hits the first white space character
	//cin>>name;
	//getline(cin,name); //read de full name
	
	
	
	cout<<name<<",you will be "<<2020-year<<"years old this year."<<endl;
	
	return 0; 
}
