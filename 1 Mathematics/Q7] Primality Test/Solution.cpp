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
    }
    return 0;
}