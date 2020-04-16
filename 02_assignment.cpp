#include <iostream>
#include <string>

using namespace std;

int main (int argc, char** argv)
{
	int a= 5, b=7, c=11;
	double average = (a +b + c) /3.0;
	
	cout << average<<endl;
	a +=3;
	cout <<"a = "<<a<<endl; //a:8 >>>> 5+3
	
	int r;
	r=c%2;
	cout <<"remainder r= "<<r<<endl; //r: 1
	
	return 0; 
}
