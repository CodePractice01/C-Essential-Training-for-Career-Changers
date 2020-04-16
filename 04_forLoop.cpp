#include <iostream>

using namespace std;

	
int main (int argc, char** argv)
{
	cout << "Even no: \n\n";
	
	for(auto i=1; i<=100;i++)
	{
	
		if(i%2 != 0 )
		{
			cout << i << " ";
		}
		
	}
	
	return 0; 
}
