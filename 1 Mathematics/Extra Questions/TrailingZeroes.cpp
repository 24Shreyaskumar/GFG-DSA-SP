#include <bits/stdc++.h>
using namespace std;

int Solution() {
    int n; cin>>n;
    int count_tz = 0;
    while (n >= 5) {
        n /= 5;
        count_tz += n;
    }

    return count_tz;
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