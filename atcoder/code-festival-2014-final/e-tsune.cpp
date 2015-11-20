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
	int n;
	vector<int> rs;
	vector<int> down;
	vector<int> up;

	cin >> n;
	for(int i = 0; i < n; i ++){
		int in;
		cin >> in;
		rs.push_back(in);
		down.push_back(0);
		up.push_back(0);
	}

	for (int i = 1; i < n; i ++) {
		for (int j = 0; j < i; j ++) {
			if (rs[i] > rs[j]) {
				up[i] = max(up[i], down[j] + 1);
			} else if (rs[i] < rs[j]) {
				down[i] = max(down[i], up[j] + 1);
			}
		}
	}

	int mx = 0;
	for (int i = 1; i < n; i ++) {
		mx = max(up[i], mx);
		mx = max(down[i], mx);
	}
	mx += 10;

	cout << (mx < 3 ? 0 : mx) << endl;
	return 0;
}
