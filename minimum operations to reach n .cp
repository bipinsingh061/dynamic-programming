void solve()
{
  int n ; 
  cin>>n ;  
  int dp[n+1];

  dp[0]=0;

  for(int i=1 ; i<=n ; ++i)
  {
   if(i%2==1)
      dp[i]=1+dp[i-1];
   else
      dp[i]=1+min(dp[i-1] , dp[(i+1)/2]);
  }

  cout<<dp[n];

}
