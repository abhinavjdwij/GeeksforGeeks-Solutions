/*input
2
6
3 6 8 10 15 50
5
6
5 4 10 15 7 6
5
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

// Idea: a ^ b == c then a ^ c == b; Combined Use With Hashing

int main() {
	int t, n, x, ans, arr[1010];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		scanf("%d", &x);
		set<int> data;
		ans = 0;
		for (int i = 0; i < n; i++) {
			if (data.find(arr[i]^x) != data.end())
				ans += 1;
			data.insert(arr[i]);
		}
		printf("%d\n", ans);
	}
	return 0;
}