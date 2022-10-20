#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    
    long long int digitsInFactorial(int N)
    {   
        double fact;
        
        for (int i = 1; i <= N; i++) {
            fact += (log10(i));
        }
        
        long long int ans = int(fact) + 1;
        
        return ans;
    }
};

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}
