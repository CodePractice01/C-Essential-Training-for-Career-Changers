#include <iostream>
using namespace std;


void getRainFall(double r[12])
{
	for(int i=0;i<12;i++)
	{
		cout << "Enter rainfall for month: "<<i+1;
		cin >>r[i];
	}
}

int main (int argc, char** argv)
{
	double rain[12];
	getRainFall(rain);
	
	cout << "Jan\t Feb \t Mar \t Apr \t May \t Jun \t Jul \t Aug \t Sept \t Oct \tNov \tDec \n";
	
	for(double r:rain)
	{
			cout << r<< "\t";
	}
	return 0 ;
}


