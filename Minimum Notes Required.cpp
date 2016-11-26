/*input
3
1712 4
1023 2
2341 3
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

int notes[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

int solve(int n, int m) {
	int x, p = 0;
	while (n && m) {
		x = n / notes[p];
		if (x >= m) return n - m*notes[p];
		n -= x*notes[p];
		m -= x;
		p++;
	}
	return n;
}

int main() {
	int t, n, m;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		printf("%d\n", solve(n, m));
	}
	return 0;
}