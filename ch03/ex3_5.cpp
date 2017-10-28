#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string word, sentence;
	while (cin >> word)
		sentence = sentence + word;
	cout << sentence << endl;
    return 0;
}
