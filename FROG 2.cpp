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

// ATCODER DP CONTEST FROG 2
 
int32_t main()
{ 
	// inputoutput() ;

	int n,k;
	cin>>n>>k;
	vector<int> ar(n) ;
	for(int i=0 ; i<n ; ++i)
		cin>>ar[i];

	// dp[i] = min possible cost

	int dp[n] ;

	dp[0]=0;

	for(int i=1 ; i<n ; ++i)
	{
		dp[i]=INT_MAX ;
		for(int j=i-1 ,tim=0 ; j>=0 && tim<k; --j,++tim)
		{
			dp[i]=min( dp[j]+abs(ar[i]-ar[j]) , dp[i] );
			// cout<<dp[i]<<" ";
		}

	}


	cout<<dp[n-1]<<"\n";



	return 0;
}
