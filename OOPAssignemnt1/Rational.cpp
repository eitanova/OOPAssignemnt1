#include "rational.h"


// constructor's
Rational::Rational()
{
	pNom.setCoeff(0, 0);
	pDenom.setCoeff(1, 1);
}
Rational::Rational(Polynomial p1,Polynomial p2)
{
	pNom.copyObject(p1);
	pDenom.copyObject(p2);
}

void Rational::print()
{
	cout << *this;
}
Polynomial Rational::getNom()
{
	return pNom;
}
Polynomial Rational::getDenom()
{
	return pDenom;
}
