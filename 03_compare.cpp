#include <iostream>
#include <cmath>
using namespace std;

	
int main (int argc, char** argv)
{
	
	float x {.7};
	
	if(abs(x-.7) < .001) //toleranse method
	{
		cout << "They are the same";
	}
	else
	{
		cout << "The numbers are different"<<endl;
		cout<<x;
	}
	
	
	
	return 0; 
}
