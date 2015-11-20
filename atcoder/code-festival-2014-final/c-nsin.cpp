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

long long f(long long n)
{
	long long result = 0ll;
	long long down = n;
	long long keta = 1ll;
	while(down > 0ll) {
		long long amari = down % 10ll;
		result += amari * keta;
		down /= 10ll;
		keta *= n;
	}
	return result;
}

long long solve(long long a)
{
	if (a < 10ll) {
		return -1;
	}
	for (long long i = 0; i <= 10000ll; i++) {
		if (a == f(i)) {
			return i;
		}
	}
	return -1;
}

int main()
{
	long long a;
	cin >> a;
	cout << solve(a) << endl;
	return 0;
}
