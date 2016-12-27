/*input
2
36
60
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

int solve(ll n) {
	int c = 0, ans = 1, s = ((int) sqrt(n));
	while (n % 2 == 0) {
		n /= 2;
		c += 1;
	}
	ans *= (c/2 + 1);
	for (int i = 3; i <= s; i += 2) {
		c = 0;
		while (n % i == 0) {
			n /= i;
			c += 1;
		}
		ans *= (c/2 + 1);

	}
	return ans;
}

int main() {
	int t;
	ll n;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &n);
		printf("%d\n", solve(n));
	}
	return 0;
}