#include <iostream>
#include <string>

using namespace std;

	
int main (int argc, char** argv)
{
	
	char accountType;
	bool checking = false;
	bool savings = false;
	double balance, deposits, withdrawals;
	
	cout << "Checking or savings account? Enter: c or s  >>>>> ";
	cin >> accountType;
	
	if(accountType == 'c' || accountType == 'C')
	{
		checking = true;
	}
	else if(accountType == 's' || accountType == 'S')
	{
		savings = true;
	}
	else {
		cout << "Invalid account type";
		return 1 ; // program end;
	}
	
	cout << "Current balance: ";
	cin >> balance;
	cout << "enter deposits: ";
	cin >> deposits;
	
	cout << "withdrawals: ";
	cin >> withdrawals;
	
	balance = balance + deposits - withdrawals;
	
	if(checking == true)
	{
		cout << "Balance: $" << balance <<endl;
	}
	else if(savings) {
		cout << "Savings account balance is noe:$"<<balance <<endl;
	}
	
	return 0; 
}
