
// https://www.hackerrank.com/challenges/ctci-ice-cream-parlor/problem

#include <bits/stdc++.h>
using namespace std;


class IceCream {
    
    public: 
        int flavor; 
        int index;

        IceCream(int flavor, int index) 
        {
            this->flavor = flavor;
            this->index = index;
       }
};
    
int binarySearch(int first, int last, vector<IceCream> arr, int search)
{
    while(first <= last)
    {
        int mid = (first + last)/2;
        
        if(arr[mid].flavor < search)
        {
            first = mid + 1;
        }
        else if(arr[mid].flavor > search)
        {
            last = mid - 1;
        }
        else 
            return arr[mid].index;   
    }
    return -1;
}

bool compare(IceCream a, IceCream b)
{
    return a.flavor < b.flavor;
}


int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {       
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n); 

        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }

        sort(arr.begin(), arr.end(), compare);
        int firstIndex = 100000, secondIndex = 100000;
        for(int i = 0; i < n - 1 ; i++) {
            int search = m - arr[i].flavor;
            if(search >= arr[i].flavor) {
                int index = binarySearch( i + 1, n - 1, arr, search);
                if( index != -1 ) {
                    cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
                    break;

                }
            }
        }

    }

}

