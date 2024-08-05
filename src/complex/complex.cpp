// complex.cpp
// Multiplying complex numbers
//Exercise 3.1

#include <iostream> // contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace

int main()
{
	auto num1 = complex<float>{2.0, 2.0};	 // use auto for type deduction
	auto num2 = complex<float>{4.0, -2.0}; // use uniform initialisation syntax (curly braces)

	auto answer = num1 * num2; // type deduced for 'answer' is: complex<float>

	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real()
			 << " + " << answer.imag() << "j"
			 << endl
			 << endl;

	// answer++;

	// Exercise 3.2

	// EXERCISE 3.2, I AM USING COMPLE(FLOAT)

	// EXERCISE 3.3
	// Thius line is important that it can .......
	return 0;
}

// Exercise 3.1
// Exercise 3.2