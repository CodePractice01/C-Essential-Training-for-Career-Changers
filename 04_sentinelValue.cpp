#include <iostream>
#include <string>

using namespace std;

	
int main (int argc, char** argv)
{
	string input;
	
	cout << "Enter the name of the first student: ";
	cin >>input;
	
	while(input != "q")
	{
			cout << "You entered " << input << ".\n Enter the next name(q-quit): ";
			cin >> input;
	}
	
	return 0; 
}
