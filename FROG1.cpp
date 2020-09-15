#include<bits/stdc++.h> 
using namespace std; 
#define deb(x) cout <<"\n"<< (#x) << " = " << (x) << "\n"
const long long  INF = 1e18;
const long long mod=1e9+7 ;
void inputoutput()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	    
}

// ATCODER DP CONTEST FROG 1
 
int32_t main()
{ 

	int n;
	cin>>n;
	vector<int> ar(n);

	for(int i=0 ; i<n ; ++i)
		cin>>ar[i] ;

	// dp[i] -> total min cost till ar[0],ar[1]...ar[i]

	int dp[n] ;

	dp[0]=0;
	dp[1]=abs(ar[0]-ar[1]);

	for(int i=2 ; i<n ; ++i)
	{
		dp[i]=min( dp[i-2]+abs(ar[i]-ar[i-2]) , dp[i-1]+abs(ar[i]-ar[i-1]) ); 
	}
	
	cout<<dp[n-1]<<"\n";



	return 0;
}
