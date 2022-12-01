#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int Solution() {
    int a, b;
    cin>>a>>b;

    return gcd(a, b);
}

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;

    while (t--) {
        cout<<Solution()<<"\n";
    }

    return 0;
}