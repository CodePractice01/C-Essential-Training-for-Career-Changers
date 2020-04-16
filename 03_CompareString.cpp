#include <iostream>
#include <string>

using namespace std;

/*
 * the compare function returns three values:
 *  <0  then the first string comes before
 *  =0  then the strings are the same 
 *  >0  the second strings comes first
 * */
	
int main (int argc, char** argv)
{
	
	string s1, s2, s3;
	
	cout << "Enter three words-  ";
	
	cin >> s1;
	cin >> s2;
	cin >> s3;
	
	if(s1.compare(s2) < 0)
	{
		if(s2.compare(s3) < 0)
		{
				cout<<s1<<", " << s2 << ", " << s3 << endl;
		}
		
		cout << s1 << ", " << s3 << ", " << s2 << endl;
	}	
	
	else if(s2.compare(s3) < 0)
	{
		if(s1.compare(s3) < 0)
		{
			cout << s2 << ", " << s1 << ", " << s3 << endl;
		}
		cout << s2 << ", " << s3 << ", " << s1 << endl;
	}
	
	else {
		
		cout << "\n\n" << s3 << ", " << s2 << ", " << s1 << endl;
	}
	return 0; 
}
