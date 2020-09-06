#include<bits/stdc++.h>
using namespace std ;

int solve(int ar[] , int s , int en)
{
    int mxd[en-s+1];
    mxd[0]=ar[s];
    mxd[1]=max(ar[s],ar[s+1]);

    for(int i=2 ,k=s+2; i<en-s+1 ; ++i)
    {
        mxd[i]=max(ar[k++]+mxd[i-2] , mxd[i-1]);
    }

    return mxd[en-s];

}

int32_t main()
{
    inputoutput();
    
    int n;
    cin>>n;
    int ar[n];
    for(int i=0 ; i<n ; ++i)
        cin>>ar[i];

    cout<<max(solve(ar,0,n-2),solve(ar,1,n-1));



    return 0;
}
