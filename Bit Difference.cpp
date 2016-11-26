/*input
1
10 20
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

/* Logic -> Xor the numbers and count the set bits in it */

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

int count_ones(int n) {
	int c = 0;
	while (n) {
		n &= n-1;
		c += 1;
	}
	return c;
}

int main() {
	int t, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		printf("%d\n", count_ones(a ^ b));
	}
	return 0;
}