/*input
2
5
3
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

ll fib[75];

void pre() {
	fib[0] = fib[1] = 1;
	for (int i = 2; i < 75; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}
}

int main() {
	int t, n;
	pre();
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%lld\n", fib[n]);
	}
	return 0;
}