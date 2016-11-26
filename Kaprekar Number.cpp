/*input
2
45
10
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

int len(int n, int l = 0) { for (; n; n /= 10, l++){} return l; }

int solve(int n) {
	int x = n*n, y = 0;
	int l = len(x);
	if (n == 1) return 1;
	for (int i = 0; i < l-1; i++) {
		y = (x % 10) * ((int) pow(10, i)) + y;
		x /= 10;
		if (x + y == n && x && y) return 1;
	}
	return 0;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", solve(n));
	}
	return 0;
}