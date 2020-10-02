bool cmp(const val&a,const val&b){
return(a.first<b.first);
}

/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
    int dp[n] ;
    
    dp[0]=1 ;
    
    sort(p,p+n,cmp);
    
    for(int i=1 ; i<n ; ++i)
    {
        dp[i]=1 ;
        for(int j=0 ; j<i ; ++j)
        {
            if(p[j].second<p[i].first)
            {
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
    }
    return dp[n-1];
}
