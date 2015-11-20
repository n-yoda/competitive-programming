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
	int N, K, a;
	cin >> N >> K;
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		cin >> a;
		sum += a;
		if (sum >= K) {
			cout << i << endl;
			return 0;
		}
	}
	cout << N << endl;
	return 0;
}
