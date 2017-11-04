#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums;
	int number;
	while(cin >> number) nums.push_back(number);
	if(nums.size() < 1) return -1;
	for(decltype(nums.size()) i = 0, j = nums.size() - 1; j > 1 && i < j; ++i, --j) cout << nums[i] + nums[j] << endl;
}
