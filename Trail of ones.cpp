/*input
3
2
5
15
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

int a[33], b[33], ans[33];
// a is powers of 2, b is fibonacci series for no consecutive 1's

void pre() {
	a[1] = 2;
	for (int i = 2; i <= 30; i++)
		a[i] = a[i-1]*2;
	b[1] = 2; b[2] = 3;
	for (int i = 3; i <= 30; i++)
		b[i] = b[i-1] + b[i-2];
	for (int i = 1; i <= 30; i++)
		ans[i] = a[i] - b[i];
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", ans[n]);
	}
	return 0;
}