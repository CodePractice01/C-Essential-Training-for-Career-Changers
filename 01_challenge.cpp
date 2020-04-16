#include <iostream>
using namespace std;
//
//argc-represents the number of value pointed to by the second variable),)
//args -stands for an argument vector that contains wither zero or more value that are neede by the program

int main (int argc, char** argv)
{
	/*
	 * varianta 1
	 */
	/*double principal;
	float interest;
	double rate;
	int time;
	
	cout <<"Hello add value for: \n";
	cout <<"principaL - ";
	cin >> principal;
	
	cout <<"\n RATE: ";
	cin >> rate;
	
	cout << "\n time";
	cin >> time;
	
	interest = principal * rate * time;
	
	cout << "\n\n Result of interest = "<< interest;
	*/
	
	/*varianta 2*/
	
	double principal{500};
	double rate {.02};
	double time{5};
	double interest;
	
	interest = principal * rate * time;
	
	cout << " Result of interest = "<< interest <<endl;
	
	return 0; 
}
