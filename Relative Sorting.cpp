/*input
1
11 4
2 1 2 5 7 1 9 3 6 8 8
2 1 8 3
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

int pos[1010];

int compare(int a, int b) {
	if (pos[a] == pos[b]) return a < b;
	return pos[a] > pos[b];
}

int main() {
	int t, n, m, x, data[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++)
			scanf("%d", &data[i]);
		memset(pos, -1, sizeof(pos));
		for (int i = 0; i < m; i++) {
			scanf("%d", &x);
			pos[x] = m - i;
		}
		std::sort(data, data+n, compare);
		for (int i = 0; i < n; i++)
			printf("%d ", data[i]);
		printf("\n");
	}
	return 0;
}