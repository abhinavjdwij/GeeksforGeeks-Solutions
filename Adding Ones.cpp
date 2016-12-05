/*input
2
3 4
1 1 2 3
2 3
1 1 1
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
	int t, n, k, p, data[1010];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &k);
		memset(data, 0, sizeof(data));
		while (k--) {
			scanf("%d", &p);
			data[p]++;
		}
		for (int i = 1; i <= n; i++) {
			data[i] += data[i-1];
			printf("%d ", data[i]);
		}
		printf("\n");
	}
	return 0;
}