#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // use array
	int arr[10];
	for(int i = 0; i < 10; i++) arr[i] = i;
	int arr2[10];
	for(int i : arr) arr2[i] = arr[i];
	for(int i : arr2) cout << i << endl;

	// use vector
	vector<int> vec(10);
	for(auto iter = vec.begin(); iter != vec.end(); ++iter)	*iter = iter - vec.begin();
	vector<int> vec2(vec);
	for(auto item : vec2) cout << item << endl;
	return 0;
}	
