#include <iostream>
#include <vector>
#include <fstream>

//vector<vector<int>> sodukuBoard = {};
using namespace std;

vector<vector<int>> sodukuBoard(9);


bool Valid()
{

	return false;
}

bool Solver()
{
	for (size_t row = 0; row < 9; row++)
	{
		for (size_t col = 0; col < 9; col++)
		{
			if (/*soduku square is empty*/true)
			{
				for (size_t i = 0; i < 10; i++)
				{
					if (Valid && Solver())
					{
						return true;
					}
				}
			}
		}
	}

	return false;
}

int main()
{
	ifstream inFile;
	int x;

	inFile.open("input.txt");
	if (!inFile)
	{
		cout << "Unable to open file";
		exit(1);
	}

	int counter = 0;
	while (inFile >> x)
	{
		//Add the stuff to the file.
		sodukuBoard.push_back(x);
	}

	inFile.close();
}