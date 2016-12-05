/*input
1
1
1
2
6
1 2 3 6 7 1
12
1 2 3 6 7 1 8 6 2 7 7 1
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define MIN3(a, b, c) (MIN(MIN(a, b), c))
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;

template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int main() {
	int t, n, dp[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d", &dp[i]);
		if (n < 3) { printf("%d\n", *min_element(dp, dp+n)); continue; }
		for (int i = 3; i < n; i++)
			dp[i] = dp[i] + MIN3(dp[i-3], dp[i-2], dp[i-1]);
		printf("%d\n", MIN3(dp[n-1], dp[n-2], dp[n-3]));
	}
	return 0;
}