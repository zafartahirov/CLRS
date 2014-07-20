#include "../support/myincludes.hpp"

using namespace std;

#include "../support/myFunctions.hpp"	// For swap, printVector, etc.
#include "./heapSort.hpp"	// For heapsort


int main() {
	int ar[12] = {15, 13, 9, 5, 12, 8, 7, 4, 0, 6, 2, 1};
	vector<int> A;
	A.insert(A.begin(), ar, ar + 12);
	
	for (int i = 0; i < 12; i++) {
		cout << i << ": " << heapExtractMax(&A) << endl;
		printVector(A);
	}
}