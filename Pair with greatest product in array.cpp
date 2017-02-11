/*input
2
4
2 5 7 8
6
10 2 2 4 30 35
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
	int t, n, data[110], ans;
	bool check[110], pro[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		memset(check, false, sizeof(check));
		memset(pro, false, sizeof(pro));
		for (int i = 0; i < n; i++) {
			scanf("%d", &data[i]);
			check[data[i]] = true;
		}
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				if (data[i]*data[j] <= 100)
					pro[data[i]*data[j]] = true;
			}
		}
		ans = -1;
		for (int i = 100; i >= 0; i--) {
			if (check[i] && pro[i]) {
				ans = i;
				break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}