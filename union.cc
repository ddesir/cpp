//	--------------------------------------------------
//	Deon Desir
//	Project 1: Union
//	CS 246-001, Fall 2017
//	This program generates two randomly populated integer arrays of different
//	sizes, deletes the numbers that appear in them more than once, generates a
//	third array that is the Union of the first two arrays, and sorts the output
//	Compile against C++11 and later
//	--------------------------------------------------

/*	Given:	int A [8] {1 ... 45}
			int B [11] {1 ... 45}
			Either read in random input via std::cin or random # generator
			
			Output should be an int array [size (A) + size (B)] (19) and consist
			of the integers in the set A union B. The set requires that an int
			may only appear once in the output array.
			
	Algorithm:
	1. Read random numbers into A [8] and B [11]
		- for loop to read rand into set A and one to read rand int set B
	2. Add B to U
	3. Compare elements in A to elements in U
		- If A does not exist in U, add A to U
	
 */

#include <cstdlib>		// rand ()
#include <iostream>		// std::cout
using namespace std;

// Accepts array and populates array with random numbers
void randArr (int *arr) {
	for (int i {0}; i < sizeof(arr); i++)
		arr[i] = rand() % 46 + 1;
}

int main () {
	// Variable declaration / Initialization
	// Sets A & B, global k iterator, union array
	int A[8], B[11], U[19], k {0}, exists;
	
	// Passes arrays to function to populate with random numbers
	randArr(A);
	randArr(B);
	
	// Prints out A & B
	cout << "The numbers in set A are: ";
	for (int i : A) {
		cout << i << " ";
	}
	
	cout << endl;

	cout << "The numbers in set B are: ";
	for (int i : B) {
		cout << i << " ";
	}
	
	cout << endl;
	// End printing of A & B
	
	// Add B to U
	for (int i : B) {
		U[k] = i;
		k++;
	}
	
	// Iterate through elements in A and check if they exist in U
	// If A exists, break out of the inner loop
	// If A does not exist add A to U
	for (int i : A){
        exists = 0;
        
        for (int j : U){
            if (i == j){
                exists = 1;
                break;
            }
        }
        
        if (!exists) {
            U[k] = i;
            k++;
        }
    }
	
	// Print out U
	cout << "The Union of A & B is: ";
	for (int i {0}; i < k; i++)
		cout << U[i] << " ";
	
	cout << endl;
 
	return 0;
}


