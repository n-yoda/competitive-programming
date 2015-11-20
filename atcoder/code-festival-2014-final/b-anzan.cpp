#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	string s;
	int ans = 0;
	int sig = 1;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		ans += sig * (s[i] - '0');
		sig *= -1;
	}
	cout << ans << endl;
	return 0;
}
