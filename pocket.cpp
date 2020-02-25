#include <iostream>
#include <string>
using namespace std; 

int main() {
	int t, noA;
	string name, action;

	cin >> t;

	for (int i = 0; i < t; i++) {
		getline(cin, name);
		int att[] = { 10,10 };
		cin >> noA;
		while (noA--) {
			cin >> action;
			if (action == "tickle") {
				att[0] += 2;
				att[1]--;
			}
			else {
			att[0]--;
			att[1] += 2;
			}

			if (att[0] == 0 || att[1] == 0)break;

			if (att[0] == 100 || att[0] > 100) {
				att[0] = 100;
				break;
			}
			if (att[1] == 100 || att[1] > 100) {
				att[1] = 100;
				break;
			}
		}//end actions
		cout << name << endl;
		cout << att[0] << " " << att[1];

	}



	return 0;
}