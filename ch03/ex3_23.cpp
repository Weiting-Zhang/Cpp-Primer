#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec(10, 1);
	for(auto b = vec.begin(); b != vec.end(); ++b) *b *= 2;
	for(auto b = vec.begin(); b != vec.end(); ++b) cout << *b << endl;
}
