#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	char exitCase = 'y';
	while(exitCase != 'n') 
	{
		string s;
		getline(cin, s);
		if (s == "y") continue;
		if (s == "n") break;


		int sum = 0;
		int cacheSum = 0;
		for (int i = 0; i < s.size(); i++)
		{
			cacheSum += int(s[i]);
			if (s[i] == ' ')
			{
				sum += cacheSum;
				cacheSum = 0;
				continue;
			}
			sum += int(s[i]);
		}
		// hash is 0 if doesn't close
		cout << "The hash is " << sum%100 << "." << endl;

	}
	return 0;
}