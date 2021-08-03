#include "polynomial.h"

class Rational
{
private:
	Polynomial pNom;
	Polynomial pDenom;

public:
	Rational();
	Rational(Polynomial p1,Polynomial p2) ;
	
	void print();
	
	Polynomial getNom();
	Polynomial getDenom();

	friend ostream& operator<<(ostream& out, const Rational& r) {
		out << r.pNom;
		out << "-------------------------" << endl;
		out << r.pDenom;
		return out;
	}
};