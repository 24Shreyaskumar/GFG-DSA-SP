#include <bits/stdc++.h>
#define vi vector<int>
#define vc vector<char>
#define ll long long
using namespace std;

void printDivisors(int n) {
    int i;
    for (i = 1; i*i < n; i++) {
        if (n % i == 0) cout<<i<<" ";
    }

    for (; i >= 1; i--) {
        if (n % i == 0) cout<<n/i<<" ";
    }

    cout<<"\n";
    return;
}

void Solution() {
    int n; cin>>n;
    printDivisors(n);
    return;
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