

#include <iostream>

using namespace std;

int fibonacci(int n) {

    int fib[n+5];
    
    fib[0] = 0;
    fib[1] = 1;
    
    for(auto i=2; i<=n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    return fib[n];
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}


