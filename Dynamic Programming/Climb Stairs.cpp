//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-official/ojquestion

#include <iostream>
using namespace std;

int cs(int n) {
  int dp[n + 1];

  dp[0] = 1;

  for (int i = 1; i <= n; i++) {

    if (i == 1) {
      dp[i] = dp[i - 1];
    }
    else if (i == 2) {
      dp[i] = dp[i - 1] + dp[i - 2];
    }
    else {

      dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

  }

  return dp[n];

}

int main() {
  int n;
  cin >> n;
  cout << cs(n) << endl;
}
