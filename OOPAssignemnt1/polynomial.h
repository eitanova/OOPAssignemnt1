#pragma once
#include <iostream>

using namespace std;

class Polynomial
{
private:
	const int degree; // i can work without degree, but the demend is to use a const degree
	int len = 0;
	double* nums;
	static int maxDegree;

public:

	Polynomial(int d = 0) : degree(d) {
		this->nums = new double[0];
		*nums = 0;
	};
	Polynomial(double* numbers, int degree);
	void copyObject(const Polynomial& p);
	
	static int getMaxDegree();
	int getDegree(bool whyDoINeedThis); // this bool term was written only because the source code, it's not necessary
	
	void setCoeff(int len, double num);

	friend ostream& operator<<(ostream& out, const Polynomial& p) {
		out << "Polynomial = ";
		if (p.len > 2)
		{
			out << p.nums[0];
			for (int i = 1; i < p.len; i++)
			{
				out << "+"  << p.nums[i] << "X^" << i ;
			}
		}
		else if (p.len > 0)
			out << p.nums[1];

		else
			out << 0;
		out << endl;

		return out;
	}
};
