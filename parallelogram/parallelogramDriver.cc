//	--------------------------------------------------
//	Deon Desir
//	CS 244 Audit, Fall 2017
//	This program is a parallelogram class and outputs the perimeter, area,
//	minor and major diagonals
//	C++ 11 or later
//	--------------------------------------------------

#include "Parallelogram.h"
#include <iostream>

using namespace std;

int main () {
	Parallelogram squ;						// Default square
	squ.ToString ();
	
	Parallelogram rect (5.0, 8.0);			// Rectangle
	rect.ToString ();
	
	Parallelogram reg (6.0, 12.0, 45.0);	// Rectangle
	reg.ToString ();
	
	Parallelogram rho (10.0, 10.0, 60.0);	// Rhombus
	rho.ToString ();
	
	return 0;
}