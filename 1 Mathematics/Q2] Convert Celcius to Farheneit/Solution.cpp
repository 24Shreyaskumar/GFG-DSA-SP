#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    double cToF(int C)
    {
        return 1.8 * C + 32;
    }
};


int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        Solution ob;
        cout << floor(ob.cToF(C)) << endl; //print the output
    }
    return 0;
}