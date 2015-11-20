#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	long long count = 1;
	long long factor = 0;
	int before, now;
	char ch;

	string line;
	getline(cin, line);
	istringstream iss(line);

	before = -1;
	while (iss >> ch) {
		if (ch < '1' || '9' < ch) break;
		now = ch - '0';
		if (now + before == 9) {
			factor ++;
		} else if (factor) {
			if ((factor + 1) % 2) {
				count *= (factor + 2) / 2;
			}
			factor = 0;
		}
		before = now;
	}
	if ((factor + 1) % 2) {
		count *= (factor + 2) / 2;
	}

	cout << count << endl;
	return 0;
}
