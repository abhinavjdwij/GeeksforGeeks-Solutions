/*input
3
2
1 2 1 2
3
1 3 2 2 1 3 3 1 2
3
1 2 3 3 2 1 1 2 3
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
	int t, n, x;
	bool check[1010], flag;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		memset(check, true, sizeof(check));
		for (int i = 0; i < n; i++) {
			flag = false;
			for (int j = 0; j < n; j++) {
				scanf("%d", &x);
				if (!flag) {
					if (check[x]) {
						check[x] = false;
						printf("%d ", x);
						flag = true;
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}