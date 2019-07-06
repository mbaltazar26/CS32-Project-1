#include "Before.h"
#include <iostream>

using namespace std;

Before::Before(int nRows, int nCols)
{
	m_row = --nRows;
	m_col = --nCols; 
	for (int r = 0; r < m_row; r++)
	{
		for (int c = 0; c < m_col; c++)
		{
			m_grid[r][c] = '.';
		}
	}
}

bool Before::keepTrack(int r, int c)
{
	if (r < 0)							//is r too small? 
		return false;
	if (r > MAXROWS || r == MAXROWS)	//is r too big?
		return false;
	if (c < 0)							//is c too small?
		return false;	
	if (c > MAXCOLS || c == MAXCOLS)	//is c too big?
		return false;	
										//if you reach this point r and c are within boundaries y e e t 
	char posi = m_grid[r - 1][c - 1];
	if (posi == '.')
	{
		posi = 'A';
	}
	else if (posi == 'Z')
	{ 
		return true;					//the function dies here if there's a robot 
	}
	else
	{
		posi++;
	}
	return true;						// will only be reached if r and c are valid and if posi doesn't have a robot
}

void Before::printWhatWasBefore() const
{
	clearScreen();
	for (int row = 0; row < m_row; row++)
	{
		for (int col = 0; col < m_col; col++)
		{
			cout << m_grid[row][col];			//prints the row
		}	
		cout << endl;							//skips to next line before printing next row
	}
	cout << endl;								//u have now entered the void 
	return;
}


