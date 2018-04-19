#include <iostream>
using namespace std;
int main()
{
	// Bitwise operation
	char a = -1;
	char b = 2;

	char c = a | b; // OR: At least 1 exist -> 1, else 0
	char d = a & b; // AND: Both sides are 1 -> 1, else 0
	char e = a ^ b; // XOR: Both 1 and 0 exist -> 1, else 0
	char f = ~a;		// NOT: Flip 1 to 0 & 0 to 1

	cout << static_cast<int>(c) << '\n';
	cout << static_cast<int>(d) << '\n';
	cout << static_cast<int>(e) << '\n';
	cout << static_cast<int>(f) << '\n';


	// MSB: Most Significant Bit
	// For signed type, computer use it for sign expression.
	// For un-signed type, just for size of number.

	// Computer calculate -(minus) operation by adding negative value
	// Then, how to to get one's negative value?
	// Answer: Two's complement
	// Change sign: ~Value + 1
	char negA = ~a + 1;
	cout << static_cast<int>(negA) << '\n'; 

	return 0;
}