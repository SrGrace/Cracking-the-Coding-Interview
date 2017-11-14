

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


int main(){
    int n; int k;
    cin >> n >> k;
    
    vector<int> a(n);
    
    for(auto i=0; i<n ;i++) 
        cin>>a[i];
    
    for(auto i=k; i<n ;i++)
        cout<<a[i]<<" ";
    
    for(auto i=0; i<k ;i++) 
        cout<<a[i]<<" ";
    
}


