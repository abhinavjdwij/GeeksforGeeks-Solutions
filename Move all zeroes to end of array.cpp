/*input
1
5
3 5 0 0 4
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

// Idea: Use another pointer and increment it only when a non zero element occurs, after the traversal fill remaining spaces with 0

int main() {
	int t, n, p, data[1010];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d", &data[i]);
		p = 0;
		for (int i = 0; i < n; i++) {
			if (data[i])
				data[p++] = data[i];
		}
		for (; p < n; p++)
			data[p] = 0;
		for (int i = 0; i < n; i++)
			printf("%d ", data[i]);
		printf("\n");
	}
	return 0;
}