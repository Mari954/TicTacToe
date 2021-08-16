
//Libraries
#include <iostream>
#include <vector>
#include <string>

#include "C:\Users\mario\source\repos\TicTacToe\TicTacToe\ttt_functions.h"

using namespace std;

//Global variables
vector<char>input_values{ ' ' ,' ' ,' ' ,' ',' ',' ',' ', ' ', ' ' };



int main()
{	
	//variables

	instructions();
	table_setup(input_values);

	for (int turn_count = 0; turn_count < 9; turn_count++)
	{
	
		
		input_values[selection(turn_count) - 1] = select_out(turn_count);

		cout << "\n";
		table_setup(input_values);
		
		check_winner(input_values);
		if (turn_count < 9 && check_winner(input_values) == true)
		{
			break;
					
		}
		
	}
	if (check_winner(input_values) == false)
	{
		cout << "\n It's a tie.";
	}
	

}

