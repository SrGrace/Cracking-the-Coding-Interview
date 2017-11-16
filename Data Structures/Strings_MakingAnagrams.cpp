
// https://www.hackerrank.com/challenges/ctci-making-anagrams/problem


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

int number_needed(string a, string b)
{  
    vector<int> freq(26, 0);
    int cnt = 0;
    
    for(auto it : a)
        freq[it-'a']++;
    
    for(auto it : b)
        freq[it-'a']--;
    
    for(auto it : freq)
        cnt += abs(it);
    return cnt;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}



