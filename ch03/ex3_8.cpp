#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str("all chars will be X");
	auto len = str.size();
	decltype (str.size()) i = 0;
    while(i < len) {	
        str[i] = 'X';
		i++;
	}
	cout << str << endl;
	return 0;
}
