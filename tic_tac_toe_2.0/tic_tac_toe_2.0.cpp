#include <iostream>
#include <string>
using namespace std;

// declaration of global variables

char arr[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char cross1, zero2;
int countePL1 = 0, countePL2 = 0;
string name1, name2;

// function declaration

void writeplayers();
void repeat();
void display();
void resultgame();
void write();

// main program

int main()
{
	writeplayers();
	cout << "\033[2J\033[1;1H";
	write();

	return 0;
}

// the first function that requests and displays information about players

void writeplayers()
{
	cout << ">>>New Game\n\nEnter your names and symbols(x or o)\nFirst Player : ";
	cin >> name1 >> cross1;

	cout << "Second Player : "; cin >> name2 >> zero2;
}

// function displaying the game field

void display()
{
	int counter = 0;
	for (int j = 0; j < 9; j++)
	{
		++counter;
		cout << "[" << arr[j] << "]";

		if (counter == 3 || counter == 6)
			cout << '\n';
	}
}

// a function that checks whether players win or draw

void resultgame()
{
	////////////////// WIN - O       OR       WIN - X//////////////////////////

	if (arr[0] == arr[1] && arr[1] == arr[2])
	{
		if (arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O' || arr[0] == 'o' && arr[1] == 'o' && arr[2] == 'o')
		{
			if (cross1 == 'O' || cross1 == 'o')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if(zero2 == 'O' || zero2 == 'o')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL1++;
			repeat();
			write();
		}

		else if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X' || arr[0] == 'x' && arr[1] == 'x' && arr[2] == 'x')
		{
			if (cross1 == 'X' || cross1 == 'x')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'X' || zero2 == 'x')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL2++;
			repeat();
			write();
		}
	}
	else if (arr[3] == arr[4] && arr[4] == arr[5])
	{
		if (arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O' || arr[3] == 'o' && arr[4] == 'o' && arr[5] == 'o')
		{
			if (cross1 == 'O' || cross1 == 'o')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'O' || zero2 == 'o')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL1++;
			repeat();
			write();
		}

		else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X' || arr[3] == 'x' && arr[4] == 'x' && arr[5] == 'x')
		{
			if (cross1 == 'X' || cross1 == 'x')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'X' || zero2 == 'x')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL2++;
			repeat();
			write();
		}
	}
	else if (arr[6] == arr[7] && arr[7] == arr[8])
	{
		if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O' || arr[6] == 'o' && arr[7] == 'o' && arr[8] == 'o')
		{
			if (cross1 == 'O' || cross1 == 'o')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'O' || zero2 == 'o')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL1++;
			repeat();
			write();
		}

		else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X' || arr[6] == 'x' && arr[7] == 'x' && arr[8] == 'x')
		{
			if (cross1 == 'X' || cross1 == 'x')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'X' || zero2 == 'x')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL2++;
			repeat();
			write();
		}
	}
	else if (arr[0] == arr[3] && arr[3] == arr[6])
	{
		if (arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O' || arr[0] == 'o' && arr[3] == 'o' && arr[6] == 'o')
		{
			if (cross1 == 'O' || cross1 == 'o')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'O' || zero2 == 'o')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL1++;
			repeat();
			write();
		}

		else if (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X' || arr[0] == 'x' && arr[3] == 'x' && arr[6] == 'x')
		{
			if (cross1 == 'X' || cross1 == 'x')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'X' || zero2 == 'x')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL2++;
			repeat();
			write();
		}
	}
	else if (arr[1] == arr[4] && arr[4] == arr[7])
	{
		if (arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O' || arr[1] == 'o' && arr[4] == 'o' && arr[7] == 'o')
		{
			if (cross1 == 'O' || cross1 == 'o')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'O' || zero2 == 'o')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL1++;
			repeat();
			write();
		}

		else if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X' || arr[1] == 'x' && arr[4] == 'x' && arr[7] == 'x')
		{
			if (cross1 == 'X' || cross1 == 'x')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'X' || zero2 == 'x')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL2++;
			repeat();
			write();
		}
	}
	else if (arr[2] == arr[5] && arr[5] == arr[8])
	{
		if (arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O' || arr[2] == 'o' && arr[5] == 'o' && arr[8] == 'o')
		{
			if (cross1 == 'O' || cross1 == 'o')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'O' || zero2 == 'o')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL1++;
			repeat();
			write();
		}

		else if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X' || arr[2] == 'x' && arr[5] == 'x' && arr[8] == 'x')
		{
			if (cross1 == 'X' || cross1 == 'x')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'X' || zero2 == 'x')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL2++;
			repeat();
			write();
		}
	}
	else if (arr[0] == arr[4] && arr[4] == arr[8])
	{
		if (arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O' || arr[0] == 'o' && arr[4] == 'o' && arr[8] == 'o')
		{
			if (cross1 == 'O' || cross1 == 'o')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'O' || zero2 == 'o')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL1++;
			repeat();
			write();
		}

		else if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X' || arr[0] == 'x' && arr[4] == 'x' && arr[8] == 'x')
		{
			if (cross1 == 'X' || cross1 == 'x')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'X' || zero2 == 'x')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL2++;
			repeat();
			write();
		}
	}
	else if (arr[2] == arr[4] && arr[4] == arr[6])
	{
		if (arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O' || arr[2] == 'o' && arr[4] == 'o' && arr[6] == 'o')
		{
			if (cross1 == 'O' || cross1 == 'o')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'O' || zero2 == 'o')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL1++;
			repeat();
			write();
		}

		else if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X' || arr[2] == 'x' && arr[4] == 'x' && arr[6] == 'x')
		{
			if (cross1 == 'X' || cross1 == 'x')
				cout << "\n\nWinner - " << name1 << ' ' << cross1 << endl;
			else if (zero2 == 'X' || zero2 == 'x')
				cout << "\n\nWinner - " << name2 << ' ' << zero2 << endl;

			countePL2++;
			repeat();
			write();
		}
	}
}

// a function that displays the field again after a win or draw of one of the players

void repeat()
{
	int counter = 0;
	cout << "\n>>>New Game\n\n";

	for (int i = 0; i < 9; i++)
	{
		counter++;
		arr[i] = ' ';
	}
}

// a function in which players fill the field with symbols

void write()
{
	signed int a;
	signed char b;
	display();

	for (int i = 0; i < 9; i++)
	{
		cout << "\n\nPlayer1 : " << name1 << ' ' 
		<< cross1 << "\nPlayer2 : " << name2 << ' ' << zero2 << endl;
		
		if (cross1 == 'O' || cross1 == 'o')
		{
			cout << "\nScore : \n" << name1 << " = " << countePL1 << endl << name2 << " = " << countePL2 << endl;
		}
		else
		{
			cout << "\nScore : \n" << name2 << " = " << countePL1 << endl << name1 << " = " << countePL2 << endl;
		}

		cout << "\nEnter index(0 - 8) and symbol : ";
		cin >> a >> b;
		arr[a] = b;
		cout << endl;
		cout << "\033[2J\033[1;1H";
		display();
		resultgame();
	}
	cout << "\n\nDraw\n";
	repeat();
	write();
}