#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str("all chars will be X");
	for(auto &c : str) 
        c = 'X';
	cout << str << endl;
	return 0;
}
