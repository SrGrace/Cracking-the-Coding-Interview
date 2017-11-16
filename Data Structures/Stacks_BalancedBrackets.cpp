

// https://www.hackerrank.com/challenges/ctci-balanced-brackets/problem


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

bool is_balanced(string expression) 
{
    stack<char> st;
    
    for(auto ch : expression)
    {
        if(ch == '{') st.push('}');
        else if (ch == '[') st.push(']');
        else if (ch == '(') st.push(')');
        else
        {
            if(st.empty() || ch != st.top())
                return false;
            st.pop();
        }
    }
    
    return st.empty();
  
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


