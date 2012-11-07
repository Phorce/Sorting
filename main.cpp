#include <iostream>
#include "Sort.h"

using namespace std;

void printSorted(vector<int> &values, string theName)
{
	cout << endl;
	cout << theName << endl;
	for(unsigned i=0; (i < values.size()); i++)
	{
		cout << values[i] << " ";
		
	}
	
	cout << endl << endl;
}

int main()
{
	// Initalise and fill array, to fill vector.
	int tempArr[] = {5,3,8,9,1,7,0,2,6,4};
	int size = sizeof tempArr / sizeof tempArr[0];
	vector<int> values(tempArr, tempArr+size);
	int count;
	printSorted(values, "Unsorted");
	
	// Create a new Object to form
	Sort<Insertion> Insertion;
	Sort<Bubble> Bubble;	
	Sort<Quick> Quick;
	
	Insertion.sort(values, count);
	
	printSorted(values, "Insertion");
	
	Bubble.sort(values, count);
	
	printSorted(values, "Bubble");
	cout << count;
	return 0;
}