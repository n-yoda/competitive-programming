#include <iostream>
#include <string>
typedef long long lli;
using namespace std;

lli calc_s(lli n, lli *t)
{
	lli i = 1;
	*t = 10;
	n /= 10;
	while (n > 0)
	{
		n /= 10;
		i ++;
		*t *= 10;
	}
	return i;
}

int main()
{
	lli w, m, k;
	cin >> w >> m >> k;
	lli c = 0;
	lli s10;
	lli s = calc_s(m, &s10);

	while (true) {
		lli rem = s10 - m;
		lli temp = w / (s * k);
		if (temp <= rem) {
			c += temp;
			break;
		} else {
			c += rem;
			w -= rem * s * k;
		}
		m = s10;
		s10 *= 10;
		s++;
	}
	cout << c << endl;
	return 0;
}
