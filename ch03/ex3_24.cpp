#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers;
	int num;
	while(cin >> num) numbers.push_back(num);
    for(auto beg = numbers.cbegin(); beg != numbers.cend() - 1; ++beg) cout << *beg + *(beg + 1) << endl;
}
