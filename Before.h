#ifndef BEFORE_H
#define BEFORE_H
#include "globals.h"

class Before
{
public:
	Before(int nRows, int nCols);
	bool keepTrack(int r, int c);
	void printWhatWasBefore() const;

private:
	int m_row;								// rows
	int m_col;								// cols
	char m_grid[MAXROWS][MAXCOLS];			// p diddy? more like p griddy!
};
#endif BEFORE_H