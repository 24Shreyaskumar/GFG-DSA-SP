#include <bits/stdc++.h>
using namespace std;

string Solution() {
    int n; cin>>n;
    int x = n, rev = 0, p = 0, mod;

    while (x > 0) {
        x = x / 10;
        p++;
    }

    x = n;
    p--;
    while (x > 0) {
        mod = x % 10;
        rev += mod * pow(10, p);
        p--;
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