#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
bool isPal(string s);
int main() {
	string s, s1;
	cin >> s;
	int total = 0;
	while (s != "0") {
		total = 0;
		if (!isPal(s))
			cout << s << " is not a palindrome" << "\n";
		else {
			for (int i = 0; i < s.length(); i++) {
				total += (s[i] - '0');
			}
			if (!isPal(to_string(total))) {
				cout << s << " is palindromic" << "\n";
			}
			else {
				total = 0;
				for (int i = 0; i < s.length(); i++) {
					total += pow(s[i] - '0', 2);
				}
				if (!isPal(to_string(total)))
					cout << s << " is sum palindromic\n";
				else
					cout << s << " is sum square palindromic\n";
			}
		}
		cin >> s;
	}
}
bool isPal(string s) {
	string s1 = s;
	reverse(s1.begin(), s1.end());
	return (s1 == s);
}