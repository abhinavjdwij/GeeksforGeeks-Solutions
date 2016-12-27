/*input
2                       
6                       
2 2 1 3 4 1
3
2 2 9
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

// Idea: Dynamic Programming: Find longest non-decreasing sub-array that ends there for each position 0 <= i < n

int main() {
	int t, n, data[100010], dp[100010];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &data[0]);
		dp[0] = 1;
		for (int i = 1; i < n; i++) {
			scanf("%d", &data[i]);
			dp[i] = (data[i] >= data[i-1]) ? (dp[i-1] + 1) : 1;
		}
		printf("%d\n", *std::max_element(dp, dp+n));
	}
	return 0;
}