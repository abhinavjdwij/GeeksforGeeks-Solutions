/*input
1
7
10 10 10 20 20 10 20
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
using namespace std;
 
template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}

int main() {
	int t, n, x, ans;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		std::map<int, int> data;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			data[x] += 1;
		}
		ans = 0;
		for (std::map<int, int>::iterator i = data.begin(); i != data.end(); i++)
			ans += (i->second / 2) * 2;
		printf("%d\n", ans);
	}
	return 0;
}