/*input
3
6
10
30
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

/* Only Numbers that are perfect squares of primes Have 3 Divisors */

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

int sieve[100010];

void pre() {
	memset(sieve, -1, sizeof(sieve));
	sieve[0] = sieve[1] = 0;
	for (int i = 2; i <= 100000; i++) {
		if (sieve[i] == -1) {
			sieve[i] = 1;
			for (int j = i+i; j <= 100000; j += i)
				sieve[j] = 0;
		}
	}
	for (int i = 1; i <= 100000; i++) {
		sieve[i] += sieve[i-1];
	}
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		n = (int) sqrt(n);
		printf("%d\n", sieve[n]);
	}
	return 0;
}