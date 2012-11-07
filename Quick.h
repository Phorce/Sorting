#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class Quick {
	
	// The quick sort, divides the array into two steps,
	// Finding one of the elements of the array to form the "Pivot"
	// e.g. index = rand() % size 
	
	// The pivot is chosen, the array will be slit into two sets. 
	// One set will contain elements that are lower 
	// and another set with elements that are above
	
	// Use two selects (first, last):
	// the first move alongs the array until it reaches higher or equal to the pivot 
	// The second select moves along the array until it reaches lower or equal to the pivot
	// Once these are true; i.e. the (first) has a value that is >= to the pivot &&
	// the (second) has a value that is <= to the pivot, these values are then swapped.
	// Continue this process until both selectors point to the same element (pivot)
	// The pivot is in the correct location, and therefore the partician can take place.
	
	public:
		
		void Partition(vector<int> &values, int theSize)
		{
			if(values.size() <= 1)
			{
				return; 
			}
			// Initalise a pivot 
			int pivot = values[rand() % theSize];
			
			int lower = 0;
			int upper = theSize - 1;
			
			while(lower < upper) {
				while(values[lower] < pivot)
				{
					lower++;
				}
				
				while(values[upper] > pivot)
				{
					upper--;
				}
				
				// Swap the values
				int temp = values[lower];
				values[lower] = values[upper];
				values[upper] = temp;
				
				Partition(values, lower);

			}
			
		}
		
		void sort(vector<int> &values) {
			int size = values.size();
			srand((unsigned int)time(0));
			Partition(values, size);
			
		}
};