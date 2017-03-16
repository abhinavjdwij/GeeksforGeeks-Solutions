/*input
3
1
2
7
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

std::vector<int> sq;

void pre() {
	for (int i = 0; i <= 1000; i++)
		sq.pb(i*i);
}

bool search(int n, int l, int r) {
	int mid = (l+r)/2;
	if (l > r) return false;
	else if (sq[mid] == n) return true;
	else if (sq[mid] < n) return search(n, l+1, r);
	else return search(n, l, r-1);
}

int main() {
	pre();
	int t, n, ans;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		ans = 0;
		for (int i = 0; sq[i] < n; i++) {
			if (search(n-sq[i], 0, sq.size()-1)) {
				ans = 1;
				break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}