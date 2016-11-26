/*input
3
5
34 78 80 91 99
7
30 20 67 90 23 34 53
10
78 87 89 90 67 78 65 56 99 35
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

bool fib[110];

void pre() {
	int a, b, c;
	a = b = c = 1;
	memset(fib, false, sizeof(fib));
	fib[1] = true;
	while (c <= 100) {
		fib[c] = true;
		c = a+b;
		a = b;
		b = c;
	}
}

int main() {
	pre();
	int t, n, x, total;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		total = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &x);
			if (fib[i]) x *= i;
			if (x > 100) x %= 100;
			total += x;
		}
		printf("%d\n", total / n);
	}
	return 0;
}