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
	string S1, S2, S3;
	cin >> S1 >> S2 >> S3;
	int a1[26];
	int a2[26];
	int a3[26];
	fill(a1, a1 + 26, 0);
	fill(a2, a2 + 26, 0);
	fill(a3, a3 + 26, 0);
	for (int i = 0; i < S1.size(); i++) {
		a1[S1[i] - 'A'] ++;
		a2[S2[i] - 'A'] ++;
		a3[S3[i] - 'A'] ++;
	}
	int move = 0;
	int sum1 = 0;
	for (int i = 0; i < 26; i ++) {
		if (a3[i] == 0) {
			continue;
		} else if (a3[i] <= a1[i]) {
			sum1 += a3[i];
			move += min(a2[i], a3[i]);
			continue;
		} else if (a3[i] <= a1[i] + a2[i]) {
			sum1 += a1[i];
			move += min(a2[i] - (a3[i] - a1[i]), a1[i]);
		} else {
			cout << "NO" << endl;
			return 0;
		}
	}
	int N = S1.size() / 2;
	if (N <= sum1 && sum1 - move <= N)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
  	return 0;
}
