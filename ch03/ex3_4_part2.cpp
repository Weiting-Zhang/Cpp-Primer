#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string str1, str2;
	cin >> str1 >> str2;
	auto len1 = str1.size(), len2 = str2.size();
	if(len1 > len2) {
		cout << str1 << endl;
		return 0;
	}
	if(len1 < len2) {
		cout << str2 << endl;
		return 0;
	}
	else 
		cout << "equal length" << endl;
	return 0;
}
