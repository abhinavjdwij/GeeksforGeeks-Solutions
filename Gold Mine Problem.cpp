/*input
2
3 3 
1 3 3 2 1 4 0 6 4
2 2
1 2 3 4
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MAX3(a, b, c) MAX(a, MAX(b, c))
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;

template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int t, n, m, ans, dp[25][25], data[25][25];

int solve(int i, int j) {
	if (i < 1 || j < 1 || i > n || j > m) return 0;
	if (dp[i][j] != -1) return dp[i][j];
	return dp[i][j] = data[i][j] + MAX3(solve(i, j+1), solve(i-1, j+1), solve(i+1, j+1));
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				scanf("%d", &data[i][j]);
		ans = 0;
		memset(dp, -1, sizeof(dp));
		for (int i = 1; i <= n; i++) {
			ans = MAX(ans, solve(i, 1));
		}
		printf("%d\n", ans);
	}
	return 0;
}