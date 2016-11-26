/*input
2
6
5 5 10 100 10 5
4
3 2 7 10
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
	int t, n, data[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		data[0] = data[1] = 0;
		for (int i = 2; i < n+2; i++) {
			scanf("%d", &data[i]);
			data[i] = MAX(data[i] + data[i-2], data[i-1]);
		}
		printf("%d\n", data[n+1]);
	}
	return 0;
}