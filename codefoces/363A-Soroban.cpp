#include <iostream>
#include <string>

using namespace std;

void soroban(int num)
{
  if (num < 5) {
	cout << "O-|";
  } else {
	cout << "-O|";
	num -= 5;
  }
  for (int i = 0; i < 5; i++) {
	if (i == num) {
	  cout << "-";
	} else {
	  cout << "O";
	}
  }
  cout << endl;
}

int main ()
{
  int num;
  cin >> num;
  do {
	int n = num % 10;
	soroban(n);
	num /= 10;
  } while (num > 0);
}
