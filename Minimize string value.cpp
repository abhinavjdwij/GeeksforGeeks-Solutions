/*input
1
abacdd
2
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
	int t, k, ans, x;
	char s[110];
	int counter[26];
	scanf("%d", &t);
	while (t--) {
		scanf("%s%d", s, &k);
		memset(counter, 0, sizeof(counter));
		for (int i = 0; s[i] != '\0'; i++)
			counter[s[i] - 97]++;
		std::priority_queue<int> pq;
		for (int i = 0; i < 26; i++) {
			if (counter[i])
				pq.push(counter[i]);
		}
		while (!pq.empty() && k--) {
			x = pq.top() - 1;
			pq.pop();
			if (x > 0)
				pq.push(x);
		}
		ans = 0;
		while (!pq.empty()) {
			ans += pq.top() * pq.top();
			pq.pop();
		}
		printf("%d\n", ans);
	}
	return 0;
}