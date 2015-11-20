#include <iostream>
#include <cstdlib>
int main()
{
	using namespace std;
	int A, B;
	cin >> A >> B;
	int t = abs(B - A);
	int cnt = t / 10;
	t = t % 10;
	switch(t)
	{
	case 0: break;
	case 1: cnt += 1; break;
	case 2: cnt += 2; break;
	case 3: cnt += 3; break;
	case 4: cnt += 2; break;
	case 5: cnt += 1; break;
	case 6: cnt += 2; break;
	case 7: cnt += 3; break;
	case 8: cnt += 3; break;
	case 9: cnt += 2; break;
	}
	cout << cnt << endl;
	return 0;
}
