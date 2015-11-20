#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, q;
	cin >> n >> m >> q;
	int lefts[820][40];
	int cnts[820][40];

	char in;
	int i0 = 0, ii = 0;
	for (int i = 0; i < n; i ++) {
		int left = 0;
		for (int j = 0; j < m; j ++) {
			left ++;
			cin >> in;
			if (in == '1') left = 0;
			lefts[ii][j] = left;
			cnts[ii][j] = left;
			for (int k = 1; k <= i; k ++) {
				lefts[ii + k][j] = min(left, lefts[i0 + k - 1][j]);
				cnts[ii + k][j] = lefts[ii + k][j] + cnts[ii + k - 1][j];
			}
		}
		i0 = ii;
		ii += i + 1;
	}

	int a, b, c, d;
	int mem[40];
	while (q--) {
		long long cnt = 0;
		cin >> a >> b >> c >> d;
		ii = a * (a - 1) / 2;
		for (int j = b-1; j < d; j ++)
			mem[j] = 0;
		for (int i = 0; i <= c - a; i ++) {
			for (int j = b-1; j < d; j ++) {
				// cout << " +" << cnts[ii][j] << endl;
				if (cnts[ii][j]) {
					cnt += cnts[ii][j];
					mem[j] = j < b ? mem[j] + 1 : min(mem[j - 1], mem[j] + 1);
				} else {
					mem[j] = 0;
				}
				if (mem[j] > 0 && b > 1) {
					cnt -= cnts[ii - i + mem[j] - 1][b-2];
					// cout << " -" << cnts[ii - i + mem[j] - 1][b-2] << endl;
				}
			}
			ii += a + i + 1;
		}
		cout << cnt << endl;
	}
	return 0;
}

