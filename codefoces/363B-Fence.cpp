#include <iostream>
using namespace std;

int main ()
{
  int n, k;
  int min, at, sum = 0, i;
  int *hs;
  cin >> n >> k;
  hs = new int[k];
  min = n * 100 + 1;
  for (i = 0; i < n; i ++) {
	if (i >= k && sum < min) {
	  at = i - k;
	  min = sum;
	}
	if (i >= k) {
	  sum -= hs[i % k];
	}
	cin >> hs[i % k];
	sum += hs[i % k];
  }
  if (i >= k && sum < min) {
	at = i - k;
	min = sum;
  }
  delete [] hs;
  cout << at + 1 << endl;
  return 0;
}
