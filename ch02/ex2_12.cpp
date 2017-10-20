#include <istream>
int main() {
	int double = 3.14; // error: expected unqualified-id before ‘=’ token
	int _;
	int catch-22; //error: expected unqualified-id before "catch"
	double Double = 3.14;
	int 1_or_2 = 1; // error: error: expected unqualified-id before numeric constant
}
