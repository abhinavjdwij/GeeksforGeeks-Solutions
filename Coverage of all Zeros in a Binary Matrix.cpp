/*input
2
4 4
0 0 0 0 1 0 0 1 0 1 1 0 0 1 0 0
2 4
1 1 1 0 1 0 0 1
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

int main() {
	int t, m, n, ans, data[25][25];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &m, &n);
		memset(data, 0, sizeof(data));
		ans = 0;
		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= n; j++)
				scanf("%d", &data[i][j]);
		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= n; j++)
				ans += (1 - data[i][j])*(data[i-1][j]+data[i+1][j]+data[i][j-1]+data[i][j+1]);
			printf("%d\n", ans);
	}
	return 0;
}
