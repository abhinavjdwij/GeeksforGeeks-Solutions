/*input
2
3 3
3 40 38 44 52 54 57 60 69
3 2
18 40 27 38 55 67
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
	int t, m, n, data[110][110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &m, &n);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &data[i][j]);
			}
		}
		int ans = 0;
		for (int i = 0; i < m; i++) {
			if (n == 1) {
				ans += 1;
				continue;
			}
			bool flag = true;
			if (data[i][0] < data[i][1]) {
				for (int j = 2; j < n; j++) {
					if (data[i][j] <= data[i][j-1]) {
						flag = false;
						break;
					}
				}
			}
			else {
				for (int j = 2; j < n; j++) {
					if (data[i][j] >= data[i][j-1]) {
						flag = false;
						break;
					}
				}
			}
			if (flag) ans += 1;
		}
		printf("%d\n", ans);
	}
	return 0;
}