#include <iostream>
#include <string>
using namespace std;



int main (int argc, char** argv)
{
	string seasons[] = {"Fall", "Winter","Spring","Summer"};
	int numbers[10];
	
	for(int i =0 ;i <10;i++)
	{
			cout << "Enter a number "<<i+1<<": ";
			cin >>numbers[i];
	}
	
	//printf array
	for(int z=0;z<10;z++)
	{
		cout << numbers[z]<<endl;
	}
	
	//show the min value from array
	int min = numbers[0];
	for(int y = 1;y <10 ;y++)
	{
		if(numbers[y] < min)
			min = numbers[y];
			
	}
	
	cout << "The smallest number enteres was: "<<min<<endl;
	cout << "Season : " <<seasons[3]; //r: Summer
	return 0 ;
}


