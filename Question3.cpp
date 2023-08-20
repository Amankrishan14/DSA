#include <iostream>
using namespace std;
int main() {
  int n;

  cin >> n;
  int q = n;
  int reverse = 0;
  for (int i = 0; i <= n + 1; i++) {
    int num = n % 10;
    reverse = reverse * 10 + num;
    n = n / 10;
  }

  if (q != reverse) {
    cout << "NO";
  } else {
    cout << "yes";
  }
}