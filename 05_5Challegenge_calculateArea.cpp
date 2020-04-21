#include <iostream>
#include <iomanip>
using namespace std;


//prototypes/function signatures for my functions
double calcArea() 
{
	int l,w;
	cout << "enter the lenght and wisth of your room: ";
	cin >>l >> w;
	
	return l*w;
	
}

double cost(int area)
{
	if( area < 120)
		return 99;
	
	double additionalCharge;
	additionalCharge = (area - 120) * .25;
	
	return 99 + additionalCharge;
		
} 

int main (int argc, char** argv)
{
	int roomArea = calcArea();
	double totalCost =  cost(roomArea);
	
	cout << "the cost to carpet clean your room is : $"<<fixed<<setprecision(2)<<totalCost<<endl;
	return 0 ;
}


