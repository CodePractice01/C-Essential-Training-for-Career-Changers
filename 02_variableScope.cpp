#include <iostream>
#include <string>

using namespace std;

/*
 * the scope determines its visibility
 * every variable and function must be declared first
 * a variable declared outside any block is considered global scope
 * 
 * */
 
int global = 10;

void function1(int local3)
{
		int local1=20;
		local1+=global;
		cout<<"from function1 : "<<local1<<endl;
		cout <<"local3: "<<local3<<endl;
}
	
	 
int main (int argc, char** argv)
{
	int local2=30;
	
	local2+=global;
	
	cout<<"from main: "<<local2<<endl; 
	
	function1(100);
	
	
	return 0; 
}
