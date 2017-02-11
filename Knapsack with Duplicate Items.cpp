/*input
2
2 3
1 1
2 1 
4 8
1 4 5 7
1 3 4 5
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;

template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int dp[110][110];

int solve(int w, int p, int n, int wt[], int val[]) {
	if (dp[w][p] != -1) return dp[w][p];
	if (p == n) return 0;
	int ans = (w - wt[p] >= 0) ? val[p] + solve(w - wt[p], p, n, wt, val) : -1;
	return dp[w][p] = MAX(ans, solve(w, p+1, n, wt, val));
}

int main() {
	int t, n, w, wt[110], val[110];
	scanf("%d", &t);
	while (t--) {
		memset(dp, -1, sizeof(dp));
		scanf("%d%d", &n, &w);
		for (int i = 0; i < n; i++) scanf("%d", &val[i]);
		for (int i = 0; i < n; i++) scanf("%d", &wt[i]);
		printf("%d\n", solve(w, 0, n, wt, val));
	}
	return 0;
}