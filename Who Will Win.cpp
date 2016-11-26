/*input
3
10 8 10 25
10 8 10 30
10 8 10 12
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
	int t, n, m, g, s, a, b, begin, end, mid;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d%d", &n, &m, &g, &s);
		a = m*g;
		b = 0;
		begin = 1;
		end = n;
		while (begin < end) {
			mid = (begin + end) / 2;
			if (mid == m) {
				b += 1;
				break;
			}
			else if (mid < m) begin = mid+1;
			else end = mid - 1;
			b += 1;
		}
		b *= s;
		printf("%d\n", (a < b) ? 1 : (a == b ? 0 : 2));
	}
	return 0;
}