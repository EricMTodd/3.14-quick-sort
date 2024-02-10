#include <fstream>
#include <iostream>
#include <time.h>
#include <vector>

#include "SortTester.h"

using namespace std;

typedef unsigned int uint;

uint partition(SortTester &tester, uint start, uint end) {
////
//insert partition function here
////
return 0;
}

void quickSort(SortTester &tester, uint start, uint end) {
   ////
   //insert QuickSort here
   ////
}

int main() {
	uint size = 20;
	SortTester tester = SortTester(size);
	cout<<"Unsorted"<<endl;
	tester.print();
	quickSort(tester, 0, size-1);
	if (tester.isSorted()) {
		cout<<"PASSED List Sorted (5 pts)"<<endl;
	}
	else {
		tester.print();
		cout<<"FAILED List not Sorted"<<endl;
	}

}