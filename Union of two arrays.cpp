/*input
2
5 3
1 2 3 4 5
1 2 3
6 2
85 25 1 32 54 6
85 2
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

void arr_union(int a[], int x, int b[], int y, int c[], int *n) {
	int i = 0, j = 0, p = 0;
	while (i < x && j < y) {
		if (a[i] == b[j]) {
			if (p == 0 || (p > 0 && c[p-1] != a[i])) {
				c[p++] = a[i];
			}
			i++; j++;
		}
		else c[p++] = (a[i] < b[j]) ? a[i++] : b[j++];
	}
	while (i < x)
		c[p++] = a[i++];
	while (j < y)
		c[p++] = b[j++];
	*n = p;
}

int main() {
	int t, x, y, n, a[1010], b[1010], c[2010];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &x, &y);
		for (int i = 0; i < x; i++)
			scanf("%d", &a[i]);
		for (int i = 0; i < y; i++)
			scanf("%d", &b[i]);
		std::sort(a, a+x);
		std::sort(b, b+y);
		arr_union(a, x, b, y, c, &n);
		for (int i = 0; i < n; i++)
			printf("%d ", c[i]);
		printf("\n");
	}
	return 0;
}
