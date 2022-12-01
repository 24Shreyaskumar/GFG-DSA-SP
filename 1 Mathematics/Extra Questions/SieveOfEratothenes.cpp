#include <bits/stdc++.h>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define ll long long
using namespace std;

void sieve(int n, vb v) {
    for (int i = 2; i*i <= n; i++) {
        if (v[i]) {
            for (int j = i*i; j <= n; j += i) {
                v[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (v[i]) cout<<i<<" ";
    }

    return;
}

void Solution() {
    int n; cin>>n;
    vb v(n+1, true);
    sieve(n, v);
}

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;

    while (t--) {
        Solution();
    }

    return 0;
}