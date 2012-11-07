#include <iostream>
#include <vector>

using namespace std;

class Insertion {
	
	public:
		
		void sort(vector<int> &values, int count)
		{
			int j=0, key = 0;
			
			for(int i=1; (i < values.size()); i++)
			{
				key = values[i]; // store the key;
				j = i - 1;
				while((j >= 0) && (values[j] < key))
				{
					values[j+1] = values[j];
					j -= 1;
					count++;
				}
				values[j+1] = key;
			}
		}
	
};