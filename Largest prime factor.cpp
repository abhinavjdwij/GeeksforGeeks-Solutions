/*input
2
6
15
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

ll solve(ll n) {
	ll ans = 1;
	while (n % 2 == 0) {
		ans = 2;
		n /= 2;
	}
	for (ll i = 3, s = (ll) sqrt(n); i <= s; i += 2) {
		while (n % i == 0) {
			ans = i;
			n /= i;
		}
	}
	if (n > 1) ans = n;
	return ans;
}

int main() {
	ll t, n;
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld", &n);
		printf("%lld\n", solve(n));
	}
	return 0;
}