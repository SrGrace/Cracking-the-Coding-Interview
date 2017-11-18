
// https://www.hackerrank.com/challenges/ctci-big-o/problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int max_n = 2*1e6+5;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    vector<bool> prime(max_n, true);
    prime[0] = prime[1] = false;
    
    for(int i=2; i*i<=max_n; i++)
    {
        if(prime[i])
        {
            for(auto j=i*2; j<=max_n; j+=i)
                prime[j] = false;
        }
    }
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int cnt=0;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                cnt++; break;
            }
        }
        if(n==1 || cnt!=0) 
            cout<<"Not prime"<<"\n";
        else 
            cout<<"Prime\n";
    }
    return 0;
}



