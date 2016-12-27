/*input
1
1 7
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

int lucky(int n) {
	int p = 1, x = 0;
	while (n) {
		if ((n % 10 == 4) || (n % 10 == 7)) {
			x = p*(n % 10) + x;
			p *= 10;
		}
		n /= 10;
	}
	return x;
}

int main() {
	int t, a, b, ans;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		for (ans = a+1; lucky(ans) != b; ans++){}
		printf("%d\n", ans);
	}
	return 0;
}