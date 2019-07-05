#ifndef BEFORE_H
#define BEFORE_H

class Arena; 

class Before
{
public:
	Before(int nRows, int nCols);
	bool keepTrack(int r, int c);
	void printWhatWasBefore() const;
};
#endif BEFORE_H