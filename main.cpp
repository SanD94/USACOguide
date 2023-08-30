#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;

typedef unsigned long long int ulli;

int main() {
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);
  
  int f_fi, f_se, b_fi, b_se;
  int res;
  cin >> f_fi >> f_se >> b_fi >> b_se;
  // partial
  if (f_fi <= b_fi && b_fi <= f_se && f_se <= b_se)
    res = b_se - f_fi;
  if (b_fi <= f_fi && f_fi <= b_se && b_se <= f_se)
    res = f_se - b_fi;
  // within
  if (f_fi <= b_fi && b_se <= f_se)
    res = f_se - f_fi;
  if (b_fi <= f_fi && f_se <= b_se)
    res = b_se - b_fi;
  // seperate
  if (f_se <= b_fi || b_se <= f_fi)
    res = f_se - f_fi + b_se - b_fi;
  cout << res << endl;
  return 0;
}