#include <iostream>
#include <vector>



using namespace std;

void instructions()
{
	cout << "Here is a classic game of Tic-Tac-Toe!\n";
	cout << "The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game\n.";
	cout << "Refer to the numbered spots to select your preferred move position.\n\n";

	cout << " 1 | 2 | 3 \n";
	cout << "------------\n";
	cout << " 4 | 5 | 6 \n";
	cout << "------------\n";
	cout << " 7 | 8 | 9 \n\n";

	cout << "User 1 will be 'X' and user 2 will be 'O'.\n";
	cout << "Good luck and have fun!'.\n\n\n";
}

void table_setup(vector<char> inputs)
{
	cout << " " << inputs[0] <<" | " << inputs[1] << " | " << inputs[2] << " \n";
	cout << "------------\n";
	cout << " " << inputs[3] << " | " << inputs[4] << " | " << inputs[5] << " \n";
	cout << "------------\n";
	cout << " " << inputs[6] << " | " << inputs[7] << " | " << inputs[8] << " \n";
}

int selection(int user)
{
	int user1;
	int user2;
	

	if (user % 2 == 0)
	{	
		
		cout << "\n User 1 make your position selection: ";
		cin >> user1;
		return user1;
	
	}
	else
	{
		cout << "\n User 2 make your position selection: ";
		cin >> user2;
		return user2;
			
	}

	
}


char select_out(int user)
{
	if (user % 2 == 0)
	{
		return 'X';
		
	}
	else
	{
		return 'O';
	}
}

bool check_winner(vector<char> inputs)
{
	//variables
	bool winner = false;

	if ((inputs[0] == 'X' && inputs[1] == 'X' && inputs[2] == 'X') ||
		(inputs[3] == 'X' && inputs[4] == 'X' && inputs[5] == 'X') ||
		(inputs[6] == 'X' && inputs[7] == 'X' && inputs[8] == 'X') ||
		(inputs[0] == 'X' && inputs[3] == 'X' && inputs[6] == 'X') ||
		(inputs[1] == 'X' && inputs[4] == 'X' && inputs[7] == 'X') ||
		(inputs[2] == 'X' && inputs[5] == 'X' && inputs[8] == 'X') ||
		(inputs[0] == 'X' && inputs[4] == 'X' && inputs[8] == 'X') ||
		(inputs[2] == 'X' && inputs[4] == 'X' && inputs[6] == 'X'))
	{
		winner = true;
		cout << "\n\n User 1 WIN!!\n";
	
		
		
	}
	else if ((inputs[0] == 'O' && inputs[1] == 'O' && inputs[2] == 'O') ||
		(inputs[3] == 'O' && inputs[4] == 'O' && inputs[5] == 'O') ||
		(inputs[6] == 'O' && inputs[7] == 'O' && inputs[8] == 'O') ||
		(inputs[0] == 'O' && inputs[3] == 'O' && inputs[6] == 'O') ||
		(inputs[1] == 'O' && inputs[4] == 'O' && inputs[7] == 'O') ||
		(inputs[2] == 'O' && inputs[5] == 'O' && inputs[8] == 'O') ||
		(inputs[0] == 'O' && inputs[4] == 'O' && inputs[8] == 'O') ||
		(inputs[2] == 'O' && inputs[4] == 'O' && inputs[6] == 'O'))
	{
		winner = true;
		cout << "\n\n USER 2 WIN!!\n";
	}
	return winner;
}