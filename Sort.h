#include <iostream>
#include <vector>
#include "Bubble.h"
#include "Insertion.h"
#include "Quick.h"
using namespace std;
template<typename Algorithm>

class Sort {
		
	public:
		void sort(vector<int>& values, int count) {
			
			Algorithm s; 
			s.sort(values, count);
		}
};
