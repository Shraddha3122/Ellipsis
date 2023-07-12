// C++ program to demonstrate the
// use of Ellipsis
#include <cstdarg>
#include <iostream>
using namespace std;

// Function accepting variable number
// of arguments using Ellipsis
double average(int count, ...)
{
	// va_list found in <cstdarg> and
	// list is its type, used to
	// iterate on ellipsis
	va_list list;

	// Initialize position of va_list
	va_start(list, count);

	double avg = 0.0;

	// Iterate through every argument
	for (int i = 0; i < count; i++) {
		avg += static_cast<double>(va_arg(list, int))
			/ count;
	}

	// Ends the use of va_list
	va_end(list);

	// Return the average
	return avg;
}

// Driver Code
int main()
{
	// Function call
	double avg = average(6, 1, 2, 3, 4, 5, 6);

	// Print Average
	cout << "Average is " << avg;
	return 0;
}
