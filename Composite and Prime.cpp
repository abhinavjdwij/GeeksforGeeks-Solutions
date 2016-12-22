/*input
2
4 4
4 6
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
#define N 10000000
using namespace std;

template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int sieve[N+10];

void pre() {
	sieve[0] = sieve[0] = 0;
	for (int i = 2; i <= N; i++) sieve[i] = 1;
	for (int i = 2; i <= 3200; i++) { // sqrt(10**7 approx = 3200)
		if (sieve[i]) {
			for (int j = i+i; j <= 10000000; j += i)
				sieve[j] = 0;
		}
	}
	for (int i = 1; i <= N; i++)
		sieve[i] += sieve[i-1];
}

int main() {
	pre();
	int t, l, r, p, c;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &l, &r);
		p = sieve[r] - sieve[l-1];
		c = (r - sieve[r]) - (l-1 - sieve[l-1]);
		if (l == 1) c -= 1; // 1 is neither prime nor composite
		printf("%d\n", c-p);
	}
	return 0;
}