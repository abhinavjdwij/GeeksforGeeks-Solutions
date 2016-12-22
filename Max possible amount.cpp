/*input
2
4
5 3 7 10
4
8 15 3 7
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

int t, n, data[110], dp[110][110];

int solve(int l, int r) {
	if (dp[l][r] != -1) return dp[l][r];
	if (l == r) return dp[l][r] = data[l];
	if (abs(l-r) == 1) return dp[l][r] = MAX(data[l], data[r]); 
	return dp[l][r] = MAX(data[l] + MIN(solve(l+2, r), solve(l+1, r-1)), data[r] + MIN(solve(l+1, r-1), solve(l, r-2)));
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		memset(dp, -1, sizeof(dp));
		for (int i = 0; i < n; i++)
			scanf("%d", &data[i]);
		printf("%d\n", solve(0, n-1));
	}
	return 0;
}