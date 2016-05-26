#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define ll long long

ll dp[46][4];

int main() {
	int n;
	cin >> n;

	dp[1][0] = dp[1][2] = 1;
	dp[1][1] = dp[1][3] = 0;

	// 0 - W, 1 - WB, 2 - R, 3 - RB
    //dp[i][k] represents the total number of patterns of length i ending at the pattern k.
    //The pattern associated with each value of k is commented in the code.
	for(int i = 2; i <= n; i++) {
		dp[i][0] = dp[i-1][3] + dp[i-1][2];
		dp[i][1] = dp[i-1][0];
		dp[i][2] = dp[i-1][1] + dp[i-1][0];
		dp[i][3] = dp[i-1][2];
	}

	ll cnt = dp[n][0] + dp[n][2];

	cout << cnt << '\n';

	return 0;
}
