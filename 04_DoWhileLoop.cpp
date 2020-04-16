#include <iostream>

using namespace std;

	
int main (int argc, char** argv)
{
	
	int choice;
	bool invalidChoice;
	
	do
	{
		invalidChoice= false;
		
		cout<<"\t Choose one: \n";
		cout<<"\t\t 1. Hot dog \t\t $1.95 \n";
		cout<<"\t\t 2. Chili Dog \t\t $2.50 \n";
		cout<<"\t\t 3. Hamburger \t\t $2.95 \n";
		cout<<"\t\t 4.Cheesburger \t\t $3.50 \n";
		cout<<"\t\t 5.Water \t\t $1.50 \n";
		
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "You chose a hotDog";
				break;
			case 2:
				cout << "You chose a Chili Dog";
				break;
			case 3:
				cout << "You chose a Hamburger";
				break;
			case 4:
				cout << "You chose a Cheesburger";
				break;
			case 5:
				cout << "You chose a Water";
				break;
			default:
			{
				cout << "Invalid choice"; 
				invalidChoice= true;
				break;
			}
		}

	
	}while(invalidChoice);
	
	
	
	return 0; 
}
