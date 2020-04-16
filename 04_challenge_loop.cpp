#include <iostream>
#include <string>

using namespace std;

	
int main (int argc, char** argv)
{
	int total = 0; 
	int goals;
	int game =1, numGames =0;
	
	cout << "How many games did you play ? ---" ;
	cin >> numGames;
	
	//v1
	for(int i = 1; i<=numGames; i++)
	{
		cout << "Enter goals for game" << game << ": (-1 to end )";
			cin >>  goals;
			
			if(goals < 0)
				break;
			
			total+= goals;
			game++;
		
	}
	
	
	/*
	 * v2 
	while (goals >=0)
	{
			cout << "Enter goals for game" << game << ": (-1 to end )";
			cin >>  goals;
			
			if(goals < 0)
				break;
			
			total+= goals;
			game++;
			
	}*/
	
	cout << "The total goals for your team this season was: " << total <<endl;
	
	return 0; 
}
