/*input
3
3
2 10 14 
4 
-28 -21 -7 0 
5 
9 12 15 21 24
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
	int t, n, s, data[15];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		s = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &data[i]);
			s += data[i];
		}
		printf("%d\n", ((n+1)*(data[0]+data[n-1]) - 2*s) / 2);
	}
	return 0;
}