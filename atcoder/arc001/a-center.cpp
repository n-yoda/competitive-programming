#include <iostream>
#include <string>
int main()
{
	using namespace std;
	int N;
	cin >> N;
	string cs;
	cin >> cs;
	int mn = N;
	int mx = 0;
	for (int i = 1; i <= 4; i ++)
	{
		int cnt = 0;
		for (int j = 0; j < N; j ++)
		{
			if (cs[j] - '0' == i)
				cnt ++;
		}
		mn = min(mn, cnt);
		mx = max(mx, cnt);
	}
	cout << mx << " " << mn << endl;
	return 0;
}
