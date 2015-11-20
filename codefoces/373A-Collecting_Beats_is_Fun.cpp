#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int k;
  cin >> k;
  k *= 2;
  int c[9] = {0};

  char ch;
  for(int i = 0; i < 16; i ++){
      cin >> ch;
      if (ch >= '1' && ch <= '9') {
          c[ch - '1']++;
          if (c[ch - '1'] > k) {
              cout << "NO" << endl;
              return 0;
          }
      }
  }
  cout << "YES" << endl;
  return 0;
}
