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


// There are N items, numbered 1,2,…,N.For each i (1≤i≤N), Ite i has a weight of wi and a value of vi.Taro has decided to 
// choose some of the N items and carry them home in a knapsack. The capacity of the knapsack is W, which means that 
// the sum of the weights of items taken must be at most W.
// Find the maximum possible sum of the values of items that Taro takes home.

 
int32_t main()
{ 
//	inputoutput() ;

	long long int n,w ;
	cin>>n>>w;

	vector<long long int> wt,v ;

	for(long long int i=0 ; i<n ; ++i)
	{
		long long int a,b;
		cin>>a>>b;
		wt.push_back(a);
		v.push_back(b);
	}

	long long int dp[n+1][w+1] ; // dp[i][j] => maximum possible sum of val could be carried
	               // with n first i elements and capacity j

	for(long long int i=0 ; i<=n ; ++i)
		dp[i][0]=0;
	for(long long int i=0 ; i<=w ; ++i)
		dp[0][i]=0;

	dp[0][0]=0;

	for(long long int i=1 ; i<=n ; ++i)
	{
		for(long long int j=1 ; j<=w ; ++j)
		{
			if(wt[i-1]<=j)
			{
				dp[i][j]=max(v[i-1]+dp[i-1][j-wt[i-1]] , dp[i-1][j]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}

	cout<<dp[n][w];




	return 0;
}
