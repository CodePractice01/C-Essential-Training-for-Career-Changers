#include <iostream>
#include <iomanip>
using namespace std;

	
/*
 *  \t - tab
 *  \n - newline
 *  \b - backspace
 *  \r - return
 *  \" - double quotes
 *  \' - single quote
 * 
 * */ 
int main (int argc, char** argv)
{
	
	cout << "AL" <<  setw(15) << left << "\tAlabama" << fixed << setprecision(2) << 4.00 << "%" <<endl;
	cout << "AZ" <<  setw(15) << "\tArizona" << 5.60 << "%" <<endl;
	cout << "AR" <<  setw(15) << "\tArkansas" << 6.50 << "%" <<endl;
	cout << "CA" <<  setw(15) << "\tCalifornia" << 6.00 << "%" <<endl;
	cout << "CO" <<  setw(15) << "\tColorado" << 2.90 << "%" <<endl;
	
	return 0; 
}
