#include<bits/stdc++.h>
using namespace std ;

int main()
{
  int n,sum ;
  cin>>n>>sum ;
  int ar[n];
  int minsum[sum+1] ;
  
  // n         -> number of coins
  // sum       -> total sum S to be formed
  // ar[i]     -> value of coin i
  // minsum[i] -> minimum number of coins needed to create sum i
  
  memset(minsum,0,sizeof(minsum));
  for(int i=0 ; i<n ; ++i)
    cin>>ar[i];

  for(int tsum = 1 ; tsum<=sum ; ++tsum)
  {
    int bestncoin = INT_MAX ;
    for(int i=0 ; i<n ; ++i)
    {
      if(ar[i]<=tsum) // all candidates 
      {
        bestncoin=min(bestncoin ,1+minsum[tsum-ar[i]] );
      }
    }
    minsum[tsum]=bestncoin ;
  }  

  for(int i=0 ; i<=sum ; ++i)
  {
    cout<<"minimum coins needed for sum "<<i<<" : "<<minsum[i]<<"\n";
  }



  return  0;
}
