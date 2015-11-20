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
	long long int A, B, n4, n100, n400;
	cin >> A >> B;
	n4 = - (A - 1l) / 4l + B / 4l;
	n100 = - (A - 1l) / 100l + B / 100l;
	n400 = - (A - 1l) / 400l + B / 400l;
	cout << n4 - n100 + n400 << endl;
	return 0;
}
