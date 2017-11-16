

#include <bits/stdc++.h>
using namespace std;


// O(logn)
class MedianFinder
{
    priority_queue<int> lo;   // max heap
    priority_queue<int, vector<int>, greater<int>> hi;  // min heap
    
    public:
        void addNumber(int x)
        {
            lo.push(x);   // Add to max heap
            
            hi.push(lo.top());   // balancing step
            lo.pop();
            
            if(lo.size() < hi.size())  // maintaining size property
            {
                lo.push(hi.top());
                hi.pop();
            }
        }
        // return median of current data stream
        double findMedian()
        {
            return lo.size() > hi.size() ? (double)lo.top() : (double)(lo.top() + hi.top())*0.5;
        }
        
};

int main()
{    
    MedianFinder m;
    
    int n, x; cin >> n;
    
    while(n--)
    {
        cin>>x;
        m.addNumber(x);
        printf("%0.1f\n", m.findMedian());
    }
    
    return 0;
}


