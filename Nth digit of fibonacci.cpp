/*input
3
10
3
25
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

int fib[110];

ll solve(ll n, ll p) {
	int x = n, y, c = 0;
	while (x) {
		c += 1;
		x /= 10;
	}
	y = p+c;
	while (n) {
		fib[p + c] = (n % 10);
		n /= 10;
		c -= 1;
	}
	return y;
}

void pre() {
	fib[0] = 0;
	fib[1] = 1;
	ll a = 0, b = 1, c, p = 1;
	while (p <= 100) {
		c = a + b;
		p = solve(c, p);
		a = b;
		b = c;
	}
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", fib[n]);
	}
	return 0;
}