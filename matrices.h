#ifndef MATRICES_H
#define MATRICES_H

class Matrices
{
public:
	void setArrays();
	void printArray() const;
	void addArrays();
	void subtractArrays();

private:
	int firstArray[3][4] = { 0 };
	int secondArray[3][4] = { 0 };
	int addedArray[3][4] = { 0 };
	int subtractedArray[3][4] = { 0 };
};

#endif
