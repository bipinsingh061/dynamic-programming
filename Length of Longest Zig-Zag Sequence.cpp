#include<bits/stdc++.h> 
using namespace std; 

int main()
{
        int t;
    cin>>t;
    while(t--)
    {    

    int n;
    cin>>n;
    int ar[n];
    for(int i=0 ; i<n ; ++i)
        cin>>ar[i] ;

    int lzs[n][2] ;


    for(int i=0 ; i<n ; ++i)
    {
        for(int j=0 ; j<2 ; ++j)
        {
            lzs[i][j]=1 ;
        }
    }

    for(int i=0 ; i<n ; ++i)
    {
        for(int j=i-1 ; j>=0 ; --j)
        {
            if(ar[j]<ar[i])
                lzs[i][0]=max(lzs[i][0],1+lzs[j][1]);
            if(ar[j]>ar[i])
                lzs[i][1]=max(lzs[i][1],1+lzs[j][0]);
        }
    }
    int ans=INT_MIN ;

    for(int i=0 ; i<n ; ++i)
    {
        for(int j=0 ; j<2 ; ++j)
        {
            ans=max(ans,lzs[i][j]);
        }
    }
    cout<<ans<<"\n";
    }

    return 0;
}
