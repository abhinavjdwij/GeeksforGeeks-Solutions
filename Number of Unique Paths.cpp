/*input
2
2 2
3 4
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

int dp[20][20];

int solve(int x, int y) {
	if (dp[x][y] != -1) return dp[x][y];
	if (x == 1 || y == 1) return (dp[x][y] = 1);
	solve(x-1, y); solve(x, y-1);
	return dp[x][y] = dp[x-1][y] + dp[x][y-1];
}

int main() {
	memset(dp, -1, sizeof(dp));
	solve(15, 15);
	int t, m, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &m, &n);
		printf("%d\n", dp[m][n]);
	}
	return 0;
}