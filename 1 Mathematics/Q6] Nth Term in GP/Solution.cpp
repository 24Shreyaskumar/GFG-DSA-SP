#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int n)
    {   
        return A * pow(B, n-1) / pow(A, n-1);
    }
};


int main()
{
    int T; //testcases total
    cin>>T;//input the testcases

    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N))<<endl;
    }

    return 0;
}