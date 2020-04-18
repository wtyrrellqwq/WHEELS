/*
* Open resources on GNUv3
* wtyrrell
* 18,4 2020
* version 0.2
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <windows.h> 

using namespace std;

int rrand(int a, int b) {// belong to [a,b] 
  return rand() % b + a;
}

int main() {
  srand(time(NULL));
  int n, x, y;
  cin >> n >> x >> y;
  int ans[1000];
  for (int i = 1; i <= n; i ++) {
    int a = rrand(x, y);
    int b = rrand(x, y);
    printf("(%3d) %3d + %3d = __ \n", i, a, b), ans[i] = a + b;
  }
  for (int i = 1; i <= n; i ++) {
    int a = rrand(x, y);
    int b = rrand(x, y);
    printf("(%3d) %3d   ", i, ans[i]);
    if (! (i % 5)) printf("\n");
  }
  system("pause");
  return 0;
}
