/*input
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3
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
	int t, n, x, begin, end, mid, a, b, data[310];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &x);
		for (int i = 0; i < n; i++) {
			scanf("%d", &data[i]);
		}
		begin = 0;
		end = n;
		while (begin < end) { // first occurrence
			mid = (begin + end) / 2;
			if (data[mid] < x) begin = mid + 1;
			else end = mid;
		}
		a = end;
		begin = 0;
		end = n;
		while (begin < end) { // second occurrence
			mid = (begin + end) / 2;
			if (data[mid] <= x) begin = mid + 1;
			else end = mid - 1;
		}
		b = begin;
		if (data[b] == x) b += 1;
		printf("%d\n", (b-a) != 0 ? (b-a) : -1);
	}
	return 0;
}