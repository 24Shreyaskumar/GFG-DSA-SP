#include <bits/stdc++.h>
using namespace std;

string Solution() {
    int n; cin>>n;
    int x = n, rev = 0, mod;

    while (x > 0) {
        mod = x % 10;
        rev = rev * 10 + mod;
        x /= 10;
    }

    cout<<rev<<"....";

    if (rev == n) return "Yes";
    return "No";
}

int main() {
    int t; cin>>t;

    while (t--) {
        cout<<Solution()<<"\n";
    }

    return 0;
}