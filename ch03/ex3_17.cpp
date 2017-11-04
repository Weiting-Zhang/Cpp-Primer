#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string word;
	vector<string> text;
	while(cin >> word) {
		text.push_back(word);
	}
	for(auto &w : text) 
		for(auto &c : w) c = toupper(c);
	for(auto w : text)
		cout << w << endl;
}
