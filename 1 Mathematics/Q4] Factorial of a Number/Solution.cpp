
#include <bits/stdc++.h>
using namespace std;
long long factorial(int);


class Solution{
    public:
        // Complete this function
    long long factorial(int n) {
        if (n == 0) return 1;
        
        return n * factorial(n-1);
    }

};


int main() {
    int T, N;
    cin >> T; // input number of testcases
    while (T--) {
        cin >> N; // input n
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
}

