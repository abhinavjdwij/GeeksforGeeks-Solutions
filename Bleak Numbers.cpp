/*input
3
4
167
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

// Idea: Used precomputation but in case precomputation is not possible (for n > 1e7),
//		 check in the range(n, n-32, -1) or precisely (n, ceil(log2(n)), -1)
// 		 as a number <= n can have at most ceil(log2(n)) set bits

bool check[10100];

int countSetBits(int n) {
	int c = 0;
	while (n) {
		n &= n-1;
		c++;
	}
	return c;
}

void pre() {
	memset(check, true, sizeof(check));
	for (int i = 1; i <= 10000; i++) {
		check[i+countSetBits(i)] = false;
	}
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", check[n]);
	}
	return 0;
}