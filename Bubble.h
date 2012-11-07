#include <iostream>
#include <vector>

using namespace std;

class Bubble {
	
	public:
				
		void sort(vector<int> &values, int count)
		{
			int flag = 1;
			int temp = 0;
			int Vlength = values.size();
			
			for(unsigned int i = 1; (i < Vlength) && flag; i++)
			{
				flag = 0;
				for(unsigned j=0; (j < Vlength - 1); j++)
				{
					if(values[j+1] > values[j])
					{
						temp = values[j];
						values[j] = values[j+1];
						values[j+1] = temp;
						flag = 1;
					}
				}
			}
		}
};