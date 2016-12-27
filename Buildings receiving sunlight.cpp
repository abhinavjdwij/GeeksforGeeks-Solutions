/*input
3
6
6 2 8 4 11 13
5
2 5 1 8 3
7
3 4 1 0 6 2 3
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
	int t, n, x, m, ans;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		m = ans = 0;
		while (n--) {
			scanf("%d", &x);
			if (x >= m) ans++;
			m = MAX(x, m);
		}
		printf("%d\n", ans);
	}
	return 0;
}