#include <iostream>
#include <iomanip>
using namespace std;

	
int main (int argc, char** argv)
{
	
	string lName;
	const double commission{.06};
	const double listingAgent{.015};
	double salesprice, sellerCost, agentsCommission;
	
	cout<< "Enter last name";
	cin>>lName;
	
	cout<<"Sales price for the house:";
	cin>>salesprice;
	
	sellerCost = commission * salesprice;
	agentsCommission = listingAgent * salesprice;
	
	cout<<"\t Home owner \t Price of Home \t Seller's Cost \t Agent's Commisions\n";
	cout<< "\t " << left << setw(16) << lName << "$"<< salesprice << "\t\t $" << sellerCost << "\t\t $" << agentsCommission <<endl; 
	
	
	
	
	return 0; 
}
