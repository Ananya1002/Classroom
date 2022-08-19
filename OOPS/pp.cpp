

#include <iostream>
#include <math.h>

using namespace std;

// Function to calculate sum
int findSum(int n)
{
	// Return sum
	return (pow(10, n + 1) * (9 * n - 1) + 10) /pow(9, 3) - n * (n + 1) / 18;
}

// Driver code
int main()
{
	int n = 3;

	cout << findSum(n);
	
	return 0;
}

