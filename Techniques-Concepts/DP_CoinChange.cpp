

// https://www.hackerrank.com/challenges/ctci-coin-change/problem


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long long make_change(vector<int> coins, int money)
{
    vector<long long> dp(money+5, 0);
    dp[0] = 1;
    
    for(auto i=0; i<coins.size(); i++)
    {
        for(auto j=coins[i]; j<=money; j++)
        {
            dp[j] += dp[j - coins[i]];
        }
    }
    return dp[money];
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> coins(m);
    for(int coins_i = 0;coins_i < m;coins_i++){
       cin >> coins[coins_i];
    }
    cout << make_change(coins, n) << endl;
    return 0;
}


