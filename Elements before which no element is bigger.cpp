/*input
2
6
10 40 23 35 50 7
3
5 4 1
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

int main() {
	int t, n, m, x, ans;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		m = -1; ans = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			if (m == x) continue; // check for duplicates
			m = MAX(x, m);
			if (m == x) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}