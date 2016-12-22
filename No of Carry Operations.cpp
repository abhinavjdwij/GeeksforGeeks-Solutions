/*input
3
123 456
555 555
123 594
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

int solve(ll a, ll b) {
	int c = 0, ans = 0;
	while (a && b) {
		c = ((a % 10) + (b % 10) + c) / 10;
		if (c) ans++;
		a /= 10; b /= 10;
	}
	while (a) {
		c = ((a % 10) + c) / 10;
		if (c) ans++;
		a /= 10;
	}
	while (b) {
		c = ((b % 10) + c) / 10;
		if (c) ans++;
		b /= 10;
	}
	return ans;
}

int main() {
	int t;
	ll a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld%lld", &a, &b);
		printf("%d\n", solve(a, b));
	}
	return 0;
}