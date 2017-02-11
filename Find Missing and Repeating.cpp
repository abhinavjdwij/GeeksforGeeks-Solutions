/*input
2
2
2 2
3 
1 3 3
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
	int t, n, x, total, sq_total, sum, diff, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		total = sq_total = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			total += x;
			sq_total += x*x;
		}
		diff = total - n*(n+1)/2;
		sum = (sq_total - n*(n+1)*(2*n+1)/6) / diff;
		a = (sum + diff) / 2;
		b = (sum - diff) / 2;
		printf("%d %d\n", a, b);
	}
	return 0;
}