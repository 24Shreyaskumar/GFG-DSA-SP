#include <bits/stdc++.h>
#define vi vector<int>
#define vc vector<char>
#define ll long long
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int Solution() {
    int a, b;
    cin>>a>>b;

    return lcm(a, b);
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