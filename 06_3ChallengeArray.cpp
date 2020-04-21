#include <iostream>
#include <string>
using namespace std;



int main (int argc, char** argv)
{
	string rainbow[7];
	string raibowColors[] = {"red", "orange", "Yellow", "Green", "Blue", "indigo", "Violet"};
	
	rainbow[0]="red";
	rainbow[1]="orange";
	rainbow[2]="Yellow";
	rainbow[3]="Green";
	rainbow[4]="Blue";
	rainbow[5]="indigo";
	rainbow[6]="Violet";
	
	for(int i = 0;i< 7;i++)
	{
		cout << rainbow[i] << " ";
		
	}
	cout <<endl;
	cout <<"-------------------------------";
	cout <<endl;
	for(string s:raibowColors)
	{
			cout << s << " ";
			
	}
	cout <<endl;
	return 0 ;
}


