#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
        bool isPrime(int n)
    {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        
        return true;
    }

        bool isPrime_moreOptimised(int n) {
            if (n == 1) return false;
            if (n % 2 == 0 || n % 3 == 0) return false;
            for (int i = 5; i < sqrt(n); i += 6) if (n % i == 0 || n % (i+2) == 0) return false;
            return true;
        }

};

int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        Solution ob;
        if(ob.isPrime(N)) 
            cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
        cout<<"More Optimised\n";
        
        if(ob.isPrime_moreOptimised(N)) 
            cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}