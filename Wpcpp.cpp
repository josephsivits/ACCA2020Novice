#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<char*> vec;
	char s[1000];
	cin.getline(s, 1000);
	char* p = strtok(s, " ,'.:?!;");
	while (p != NULL) {
		vec.push_back(p);
		p = strtok(NULL, " ,'.:?!;");
	}
	vector<char*> vec2 = vec;
	reverse(vec2.begin(), vec2.end());
	if (vec == vec2)
		cout << "IS a word palindrome";
	else
		cout << "is NOT a palindrome";
}