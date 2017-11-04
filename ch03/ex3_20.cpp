#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums;
	int number;
	while(cin >> number) nums.push_back(number);
	for(decltype(nums.size()) i = 0; nums.size() > 0 && i < nums.size() - 1; ++i) cout << nums[i] + nums[i + 1] << endl;
}
