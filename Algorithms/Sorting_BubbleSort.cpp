

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sort(vector<int> a, int n)
{
    int numberOfSwaps = 0;
    for (int i = 0; i < n; i++) 
    {
    
        for (int j = 0; j < n - 1; j++) 
        {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
            }
        }

        if (numberOfSwaps == 0) {
            break;
        }
    }
    
    cout<<"Array is sorted in "<<numberOfSwaps<<" swaps.\n";
    cout<<"First Element: "<<a[0]<<"\n";
    cout<<"Last Element: "<<a[n-1];
}

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    bubble_sort(a, n);
    
    return 0;
}


