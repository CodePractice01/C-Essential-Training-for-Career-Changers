#include <iostream>
#include <string>
using namespace std;

	 
int main (int argc, char** argv)
{
	double x{45.765}; //like double x = 45.765
	int y = static_cast<int>(x);//function to convert double to int
	int b = true;
	int c = 'a';
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	cout<<"b: "<<b<<endl;
	cout<<"c: "<<c<<endl;// return 97
	return 0; 
}
