//	PARALLELOGRAM header file
#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include <string>
using namespace std;

class Parallelogram {
	public:
		double length, width, angle; // Compact declaration
		string type;
		
		// Constructors
		// Default constructor
		Parallelogram ();
		Parallelogram (double len, double wid);
		Parallelogram (double len, double wid, double ang);
		
		// Getters
		double get_length () const;
		double get_width () const;
		double get_angle () const;
		string get_type () const;
		
		// Member functions
		double Perimeter ();
		void ToString ();
		// Extra credit
		double Area ();
		double MajorDiagonal ();
		double MinorDiagonal ();
};

#endif