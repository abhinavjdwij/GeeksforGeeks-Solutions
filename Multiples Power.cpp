/*input
2
555555
10
20
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
	int t, n, x;
	ll ans = 0;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		n -= 1;
		ans = 0;
		x = n / 7;
		ans += (ll) 7*x*(x+1)/2;
		x = n / 21;
		ans -= (ll) 21*x*(x+1)/2;
		x = n / 3;
		ans += (ll) 3*x*(x+1)/2;
		printf("%lld\n", ans);
	}
	return 0;
}