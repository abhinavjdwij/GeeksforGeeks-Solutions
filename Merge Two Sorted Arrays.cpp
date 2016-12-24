/*input
1
4 5
7 5 3 1
9 8 6 2 0
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


void merge(int a[], int x, int b[], int y, int c[], int *n) {
	*n = x+y;
	int i = 0, j = 0, p = 0;
	while (i < x && j < y)
		c[p++] = (a[i] > b[j]) ? a[i++] : b[j++];
	while (i < x)
		c[p++] = a[i++];
	while (j < y)
		c[p++] = b[j++];
}

int main() {
	int t, x, y, n, a[50010], b[50010], c[100010];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &x, &y);
		for (int i = 0; i < x; i++) scanf("%d", &a[i]);
		for (int i = 0; i < y; i++) scanf("%d", &b[i]);
		merge(a, x, b, y, c, &n);
		for (int i = 0; i < n; i++)
			printf("%d ", c[i]);
		printf("\n");
	}
	return 0;
}