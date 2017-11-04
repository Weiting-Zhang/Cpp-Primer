#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto beg = scores.begin();
	while(cin >> grade) {
		if(grade <= 100)
			++(*(beg + grade / 10));
	}
	for(auto gpa : scores) cout << gpa << endl;
	return 0;
}
