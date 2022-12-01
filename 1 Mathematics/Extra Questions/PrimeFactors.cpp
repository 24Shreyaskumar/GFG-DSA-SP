#include <bits/stdc++.h>
#define vi vector<int>
#define vc vector<char>
#define ll long long
using namespace std;

void primeFactors(int n) {
    if (n == 1) return;
    if (n % 2 == 0) {
        while (n % 2 == 0) {
            cout<<"2 ";
            n /= 2;
        }
    }
    if (n % 3 == 0){
        while (n % 3 == 0) {
            cout<<"3 ";
            n /= 3;
        }
    }

    for (int i = 5; i*i <= n; i += 6) {
        if (n % i == 0) {
            while (n % i == 0) {
                cout<<i<<" ";
                n /= i;
            }
        }

        int j = i + 2;

        if (n % j == 0) {
            while (n % j == 0) {
                cout<<j<<" ";
                n /= j;
            }
        }
    }

    if (n > 3) cout<<n<<"\n";
}

void pf(int n) {
    if (n <= 1) return;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            while(n % i == 0) {
                cout<<i<<" ";
                n /= i;
            }
        }
    }

    if (n > 1) cout<<n<<" ";
}

void Solution() {
    int n; cin>>n;
    primeFactors(n);
    cout<<"............\n";
    pf(n);
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