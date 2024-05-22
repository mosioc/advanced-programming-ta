#include <iostream>
#include <vector>

using namespace std;

int binomialCoefficient(int n, int k) {
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= min(i, k); ++j) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }

    return dp[n][k];
}

int main() {
    int n = 5;
    int k = 2;
    int result = binomialCoefficient(n, k);
    
    cout << "C(" << n << ", " << k << ") = " << result << endl;

    return 0;
}