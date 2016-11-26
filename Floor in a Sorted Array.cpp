/*input
3
7 0
1 2 8 10 11 12 19
7 5
1 2 8 10 11 12 19
7 10
1 2 8 10 11 12 19
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
	int t, n, x, data[10010], begin, mid, end;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &x);
		for (int i = 0; i < n; i++)
			scanf("%d", &data[i]);
		begin = 0;
		end = n;
		while (begin < end) {
			mid = (begin + end) / 2;
			if (data[mid] < x) begin = mid + 1;
			else if (data[mid] == x) {
				begin = mid + 1;
				break;
			}
			else end = mid-1;
		}
		if (data[begin] > x) begin -= 1;
		if (data[n-1] <= x) begin = n-1;
		printf("%d\n", begin);
	}
	return 0;
}