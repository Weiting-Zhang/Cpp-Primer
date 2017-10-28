#include <iostream>
#include <string>

using namespace std;

int main () 
{
	string str1, str2;
	cin >> str1 >> str2;
	if (str1 > str2) {
		cout << str1 << endl;
		return 0;
	}
	if (str1 < str2) {
		cout << str2 << endl;
		return 0;
	}
	else 
		cout << "equal string" << endl;
	return 0;
}
