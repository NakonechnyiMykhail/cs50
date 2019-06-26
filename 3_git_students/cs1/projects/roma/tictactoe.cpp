#include <iostream>
#include <chrono>
#include <cctype>

using namespace std;

// basic game-logic

char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' }; // game board
char player = 'X'; // current playing team

// aditional stuff for single player

char botteam = 'O';           // team of the bot
char playerteam = 'X';        // team of the player
string gamemode = ("none");   // multiplayer or singleplayer
string difficulty = ("none"); // difficulty on which bot depends how to move



void Draw()  // function to draw the board and extra information
{
	cout << endl;
	cout << "Tic Tac Toe v1.0" << endl;
	cout << "Gamemode is " << gamemode << endl;
	if (gamemode == "singleplayer")
		cout << "Difficulty is " << difficulty << endl;
	cout << endl;

	for (int i = 0; i < 3; i++) // drawing game board
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void MakeMatrix() // make matrix for the begining of game
{
	for (int i = 0; i < 9; i++)
	{
		matrix[i / 3][i % 3] = (i + 1) + '0';
	}
}

bool isEmptyField(int field, char matrix[3][3]) // return true if field is empty
{
	if (matrix[field / 3][field % 3] != 'X' && matrix[field / 3][field % 3] != 'O')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Win(char p, char matrix[3][3]) // return true if someone won
{
	for (int i = 0; i < 3; i++) // rows
	{
		if (matrix[i][0] == p && matrix[i][1] == p && matrix[i][2] == p) { return true; }
	}
	for (int i = 0; i < 3; i++) // columns
	{
		if (matrix[0][i] == p && matrix[1][i] == p && matrix[2][i] == p) { return true; }
	}

	// obliques
	if (matrix[0][0] == p && matrix[1][1] == p && matrix[2][2] == p) { return true; }
	if (matrix[2][0] == p && matrix[1][1] == p && matrix[0][2] == p) { return true; }
	return false;
}

int PlayerMove() // function to get player move
{

	while (1)
	{
		int a;

		cout << "The turn is for " << player << ", press the number of the field: ";
		cin >> a;

		a--;

		if (cin.fail()) // if player write not an int
		{
			cin.clear();
			cin.ignore();
			cout << "Invalid answer." << endl;
		}
		else
		{
			if (isEmptyField(a, matrix))
			{
				return a;
				break;
			}
			else
			{
				if ((a < 0) || (a > 8)) // if player write not existing number of the field
				{
					cout << "Write number between 1 and 9." << endl;
				}
				else
				{
					cout << "Field is used." << endl;
				}
			}
		}
	}
}

int BotMove() // function to get bot move
{
	while (1)
	{
		// easy
		if (difficulty == "easy")
		{
			for (int i = 0; i < 9; i++) // if bot can win by placing one symbol
			{
				char matrixcopy[3][3];
				for (int j = 0; j < 9; j++)
				{
					matrixcopy[j / 3][j % 3] = matrix[j / 3][j % 3];
				}
				if (isEmptyField(i, matrixcopy))
				{
					matrixcopy[i / 3][i % 3] = botteam;
					if (Win(botteam, matrixcopy))
					{
						srand(time(NULL));
						int random = rand() % 3 + 0;
						if (random != 0)
						{
							return i;
							break;
						}
					}
				}
			}


			for (int i = 0; i < 9; i++) // if player can win by placing one symbol
			{
				char matrixcopy[3][3];
				for (int j = 0; j < 9; j++)
				{
					matrixcopy[j / 3][j % 3] = matrix[j / 3][j % 3];
				}
				if (isEmptyField(i, matrixcopy))
				{
					matrixcopy[i / 3][i % 3] = playerteam;
					if (Win(playerteam, matrixcopy))
					{
						srand(time(NULL));
						int random = rand() % 3 + 0;
						if (random == 0)
						{
							return i;
							break;
						}
					}
				}
			}

			// random placement
			srand(time(NULL));
			int m = rand() % 8 + 0;
			if (isEmptyField(m, matrix))
			{
				return m;
				break;
			}
		}

		// normal
		if (difficulty == "normal")
		{
			if (isEmptyField(4, matrix)) // place symbol at center
			{
				srand(time(NULL));
				int random = rand() % 1 + 0;
				if (random == 0)
				{
					return 4;
					break;
				}
			}
			for (int i = 0; i < 9; i++) // if bot can win by placing one symbol
			{
				char matrixcopy[3][3];
				for (int j = 0; j < 9; j++)
				{
					matrixcopy[j / 3][j % 3] = matrix[j / 3][j % 3];
				}
				if (isEmptyField(i, matrixcopy))
				{
					matrixcopy[i / 3][i % 3] = botteam;
					if (Win(botteam, matrixcopy))
					{
						srand(time(NULL));
						int random = rand() % 7 + 0;
						if (random != 0)
						{
							return i;
							break;
						}
					}
				}
			}


			for (int i = 0; i < 9; i++) // if player can win by placing one symbol
			{
				char matrixcopy[3][3];
				for (int j = 0; j < 9; j++)
				{
					matrixcopy[j / 3][j % 3] = matrix[j / 3][j % 3];
				}
				if (isEmptyField(i, matrixcopy))
				{
					matrixcopy[i / 3][i % 3] = playerteam;
					if (Win(playerteam, matrixcopy))
					{
						srand(time(NULL));
						int random = rand() % 2 + 0;
						if (random == 0)
						{
							return i;
							break;
						}
					}
				}
			}

			// random placement
			srand(time(NULL));
			int m = rand() % 8 + 0;
			if (isEmptyField(m, matrix))
			{
				return m;
				break;
			}
		}

		// hard
		if (difficulty == "hard")
		{
			if (isEmptyField(4, matrix)) // place symbol at center
			{
				return 4;
				break;
			}
			for (int i = 0; i < 9; i++) // if bot can win by placing one symbol
			{
				char matrixcopy[3][3];
				for (int j = 0; j < 9; j++)
				{
					matrixcopy[j / 3][j % 3] = matrix[j / 3][j % 3];
				}
				if (isEmptyField(i, matrixcopy))
				{
					matrixcopy[i / 3][i % 3] = botteam;
					if (Win(botteam, matrixcopy))
					{
						srand(time(NULL));
						int random = rand() % 11 + 0;
						if (random != 0)
						{
							return i;
							break;
						}
					}
				}
			}


			for (int i = 0; i < 9; i++) // if player can win by placing one symbol
			{
				char matrixcopy[3][3];
				for (int j = 0; j < 9; j++)
				{
					matrixcopy[j / 3][j % 3] = matrix[j / 3][j % 3];
				}
				if (isEmptyField(i, matrixcopy))
				{
					matrixcopy[i / 3][i % 3] = playerteam;
					if (Win(playerteam, matrixcopy))
					{
						srand(time(NULL));
						int random = rand() % 5 + 0;
						if (random != 0)
						{
							return i;
							break;
						}
					}
				}
			}

			// random placement
			srand(time(NULL));
			int m = rand() % 8 + 0;
			if (isEmptyField(m, matrix))
			{
				return m;
				break;
			}
		}
	}
}

void MakeMove() // function to make next move
{
	int m; // variable to make move
	if (gamemode == "singleplayer") // scenario for singleplayer
	{
		if (botteam == player)
		{
			m = BotMove();
		}
		else
		{
			m = PlayerMove();
		}
	}
	else if(gamemode == "multiplayer") // scenario for multiplayer
	{
		m = PlayerMove();
	}
	matrix[m / 3][m % 3] = player;
}

void ChooseTeam() // function to choose team for the player
{
	while (1)
	{
		char temp;
		cout << "Do you want to be as X or O?: ";
		cin >> temp;
		temp = toupper(temp);
		cout << endl;
		if ((temp != 'X') && (temp != 'O')) // if player wrote not X or O
		{
			cout << "Invalid answer." << endl;
		}
		else
		{
			if (temp == 'X')
			{
				botteam = 'O';
				playerteam = 'X';
			}
			else
			{
				botteam = 'X';
				playerteam = 'O';
			}
			Draw();
			break;
		}
	}
}

void ChooseDifficulty() // function to choose difficulty for the game
{
	while (1)
	{
		char temp;
		cout << "Which difficulty do you want? Easy(e), Normal(n), Hard(h):";
		cin >> temp;
		temp = tolower(temp);
		if ((temp != 'e') && (temp != 'n') && (temp != 'h'))
		{
			cout << "Invalid answer." << endl;
		}
		else
		{
			if (temp == 'e')
				difficulty = "easy";
			else if (temp == 'n')
				difficulty = "normal";
			else if (temp == 'h')
				difficulty = "hard";
			Draw();
			break;
		}
	}
}

void TogglePlayer() // toggle current move-making team
{
	if (player == 'X') {
		player = 'O';
	}
	else {
		player = 'X';
	}
}

bool PlayAgain() // return true if player want to player again in current gamemode
{
	char a;
	cout << "Do you want to play again? ('y' or 'n'): ";
	cin >> a;
	a = tolower(a);
	if (a == 'y')
	{
		return true;
	}
	return false;
}

void Multiplayer() // multiplayer mode
{
	int n = 0;
	MakeMatrix();
	gamemode = "multiplayer";
	player = 'X';
	Draw();
	while (1)
	{
		MakeMove();
		Draw();
		n++;
		if (Win(player,matrix))
		{
			cout << player << " wins!" << endl;
			break;
		}

		if (n >= 9)
		{
			cout << "White flag! Nobody wins!" << endl;
			break;
		}
		TogglePlayer();
	}

	if (PlayAgain() == true) {
		Multiplayer();
	}
}

void Singleplayer() // singleplayer move
{
	int n = 0;
	MakeMatrix();
	gamemode = "singleplayer";
	player = 'X';
	Draw();
	ChooseDifficulty();
	ChooseTeam();
	while (1)
	{
		MakeMove();
		Draw();
		n++;
		if (Win(player,matrix))
		{
			cout << player << " wins!" << endl;
			break;
		}

		if (n >= 9)
		{
			cout << "White flag! Nobody wins!" << endl;
			break;
		}
		TogglePlayer();
	}
	if (PlayAgain() == true) {
		Singleplayer();
	}
}

void Menu() // menu
{
	while (1)
	{
		bool stop = false;
		char temp;
		cout << endl;
		cout << "Tic Tac Toe v1.0" << endl;
		cout << "If you want to exit write(e)" << endl;
		cout << "Do you want to play in multiplayer(m) or in singleplayer(s)?: ";
		cin >> temp;
		temp = tolower(temp);
		while (1)
		{
			temp;
			if (temp == 'm')
			{
				Multiplayer();
				break;
			}
			else if(temp == 's')
			{
				Singleplayer();
				break;
			}
			else if (temp == 'e')
			{
				stop = true;
				break;
			}
			else
			{
				cout << "Invalid symbol." << endl;
				cout << "If you want to exit write(e)" << endl;
				cout << "Do you want to play in multiplayer(m) or in singleplayer(s)?: ";
				cin >> temp;
				temp = tolower(temp);
			}
		}
		if(stop == true)
		{
			break;
		}
	}
}

int main()
{
	Menu();
	return 0;
}