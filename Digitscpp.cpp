#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<long, long> m;
	string s, y = "y";
	long total = 0;
	getline(cin, s);
	s += " ";
	while (y == "y") {
		total = 0;
		for (long long i = 0; i < s.length(); i++) {
			if (s[i] == ' ') {
				if (m.find(total) == m.end())
					m[total] = 1;
				else
					m[total]++;
				total = 0;
			}
			else {
				total += (s[i] - '0');
			}
		}
		//m[total]++;
		for (auto& r : m)
			cout << r.first << " " << r.second << "\n";
		getline(cin, y);
		m.clear();
		if (y == "y") {
			getline(cin, s);
		}
		s += " ";
	}
}