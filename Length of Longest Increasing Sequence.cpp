#include<bits/stdc++.h>
using namespace std ;

int32_t main()
{
    inputoutput();

    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int ar[n];
    for(int i=0 ; i<n ; ++i)
        cin>>ar[i];

    int llis[n]  ;
    memset(llis,1,sizeof(llis));

    for(int i=0 ; i<n ; ++i)
    {
        int len=1 ;
        for(int j=i-1 ; j>=0 ; --j)
        {
            if(ar[j]<ar[i])
            {
                len=max(len,1+llis[j]);
            }
        }
        llis[i]=len ;
  }
    int ans=INT_MIN ;
    for(int i=0 ; i<n ; ++i)
    {
        // cout<<i<<" : "<<llis[i]<<"\n";
        ans=max(ans,llis[i]) ;
    }
    cout<<ans<<"\n";

}

return 0 ;
}
