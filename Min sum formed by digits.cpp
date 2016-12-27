/*input
2
6
6 8 4 5 2 3
5
5 3 0 7 4
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
	int t, n, c, p, data[55], ans[55];
	bool flag;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
			scanf("%d", &data[i]);
		flag = false;
		c = p = 0;
		memset(ans, 0, sizeof(ans));
		std::sort(data+1, data+n+1, std::greater<int>());
		if (n % 2) { flag = true; n -= 1; }
		for (int i = 1; i <= n; i += 2) {
			ans[p] = data[i] + data[i+1] + c;
			c = (ans[p] / 10);
			ans[p] %= 10;
			p++;
		}
		if (flag) {
			ans[p] = (c + data[n+1]);
			c = (ans[p] / 10);
			ans[p] %= 10;
			p++;
		}
		if (c) ans[p++] = c;
		for (p -= 1; ans[p] == 0 && p > 0; p--){}
		for (int i = p; i >= 0; i--)
			printf("%d", ans[i]);
		printf("\n");
	}
	return 0;
}