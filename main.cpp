#include <fstream>
#include <iostream>
#include <time.h>
#include <vector>

#include "SortTester.h"

using namespace std;

typedef unsigned int uint;

uint partition(SortTester &tester, uint start, uint end) {
    int pivot = end;
    int i = start - 1;

    for (uint j = start; j <= end - 1; j++) {
        if (tester.compare(j, pivot) < 0) {
            i++;
            tester.swap(i, j);
        }
    }
    i++;
    tester.swap(i, end);

    tester.print();
    return i;
}

void quickSort(SortTester &tester, uint start, uint end) {
    if (end <= start) {
        return;
    }

    uint pivot = partition(tester, start, end);
    quickSort(tester, start, pivot - 1);
    quickSort(tester, pivot + 1, end);
}

int main() {
    uint size = 20;
    SortTester tester = SortTester(size);
    cout << "Unsorted" << endl;
    tester.print();
    quickSort(tester, 0, size - 1);
    if (tester.isSorted()) {
        cout << "PASSED List Sorted (5 pts)" << endl;
    }
    else {
        tester.print();
        cout << "FAILED List not Sorted" << endl;
    }
}