// https://cses.fi/problemset/task/1068
#include <iostream>
using namespace std;

typedef unsigned long long int ulli;

int main() {
  ulli i;
  cin >> i;
  while (i != 1) {
    cout << i << " ";
    if (i % 2)
      i = 3 * i + 1;
    else
      i >>= 1;
  }
  cout << 1 << endl;
  return 0;
}