#include "polynomial.h"

int Polynomial::maxDegree = 0;

Polynomial::Polynomial(double* numbers, int degree) : degree(degree)
{
	this->len = degree + 1;
	
	if (degree > maxDegree)
		maxDegree = degree;

	this->nums = new double[len];// was len + 1 
	for (int i = 0; i < len; i++) // was len + 1
	{
		nums[i] = *numbers;
		numbers++;
	}
}
void Polynomial::copyObject(const Polynomial& p) 
{
	nums = p.nums;
	len = p.degree + 1;
}
void Polynomial::setCoeff(int len, double num)
{
	if (num)
	{
		nums = new double[len + 1];
		this->len = len + 1;
		for (int i = 0; i < len; i++)
			nums[i] = 0;
		nums[len] = num;
	}
	else
	{
		this->len = 0;
	}

}
int Polynomial::getMaxDegree() {
	return maxDegree;
}
int Polynomial::getDegree(bool whyDoINeedThis)
{
	return this->degree;
}
