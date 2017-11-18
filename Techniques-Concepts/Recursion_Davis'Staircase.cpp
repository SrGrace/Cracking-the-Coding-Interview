
// https://www.hackerrank.com/challenges/ctci-recursive-staircase/problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int stairs(int n)
{
    vector<int> dp(n+4, 0);
    dp[1] = 1, dp[2] = 2, dp[3] = 4;
    
    for(auto i=4; i<=n; i++)
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    
    return dp[n];
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<stairs(n)<<"\n";
    }
    return 0;
}



