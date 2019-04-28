//	PARALLELOGRAM member functions
//	Syntax C++ 11 or later
#include "Parallelogram.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI {3.14};
// Constructors
// Default constructor
Parallelogram::Parallelogram () {
	length = 1.0, width = 1.0, angle = 90.0;
	type = "square";
};

Parallelogram::Parallelogram (double len, double wid) {
	length = len, width = wid, angle = 90.0;
	
	type = (length == width) ? "square" : "rectangle";
};

Parallelogram::Parallelogram (double len, double wid, double ang) {
	length = len, width = wid, angle = ang;

	if (length == width)
		type = (angle == 90.0) ? "square" : "rhombus";
	else
		type = (angle == 90.0) ? "rectangle" : "regular";
};

// Getters
double Parallelogram::get_length () const {
	return length;
};

double Parallelogram::get_width () const {
	return width;
};

double Parallelogram::get_angle () const {
	return angle;
};

string Parallelogram::get_type () const {
	return type;
}

// Member functions
double Parallelogram::Perimeter () {
	return 2 * (length + width);
};

// Extra credit
double Parallelogram::Area () {
	if (angle == 90.0)
		return length * width;
	else
		return sin((angle * PI)/180) * length * width;
};

double Parallelogram::MinorDiagonal () {
	double minorDiag;
	
	if (angle == 90.0)
		minorDiag = sqrt (pow (length, 2) + pow (width, 2)); // Square & Rectangle
	else {
		if (angle < 90.0) {
			minorDiag = sqrt (pow (length, 2) + pow (width, 2) - 2 * length * width * cos((angle * PI)/180));
		}
	}
	
	return minorDiag;
};

double Parallelogram::MajorDiagonal () {
	double majorDiag;
	
	if (angle == 90.0)
		majorDiag = sqrt (pow (length, 2) + pow (width, 2)); // Square & Rectangle
	else {
		if (angle < 90.0) {
			angle = (180 - angle);
			majorDiag = sqrt (pow (length, 2) + pow (width, 2) - 2 * length * width * cos((angle * PI)/180));
		}
	}
	
	return majorDiag;
};

void Parallelogram::ToString () {
	cout << left;
	cout << fixed << setprecision (1);
	cout << get_type () << " (" << get_length () << ", " << get_width () << ", " <<
		get_angle () << ") \t perimeter: " << Perimeter () << " \t area: " << Area () <<
		" \t minor: " << MinorDiagonal ()  << " \t major: " << MajorDiagonal () << endl;
};