#include <iostream>

using namespace std;


//prototypes/function signatures for my functions
double average(double& a, double& b, double& c) // pass by reference (&-is the address of variable)
{
	a+=3;
	b+=4;
	c+=5;
	cout << "a: "<<a<<endl;
	cout << "b: "<<b<<endl;
	cout << "c: "<<c<<endl;
	
		return (a+b+c)/3;
	
}

int main (int argc, char** argv)
{
	double x =5, y=10, z=15;
	double avg =average(x,y,z);
	
	cout << "The average is:" << avg <<endl;
	//when is used pass by referecnce, after call the function, the new values will be:
	
	cout << "x: "<<x<<endl; //r: 8
	cout << "y: "<<y<<endl; //r: 14
	cout << "z: "<<z<<endl; //r: 20
	return 0;
}


