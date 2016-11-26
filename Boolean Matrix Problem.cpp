/*input
3
2 2
1 0 0 0
2 3
0 0 0 0 0 1
3 4
1 0 0 1 0 0 1 0 0 0 0 0
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
	int t, r, c, x;
	bool row[25], col[25];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &r, &c);
		memset(row, false, sizeof(row));
		memset(col, false, sizeof(col));
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				scanf("%d", &x);
				if (x)
					row[i] = col[j] = true;
			}
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				printf("%d ", (row[i] || col[j]) ? 1 : 0);
			}
		}
		printf("\n");
	}
	return 0;
}