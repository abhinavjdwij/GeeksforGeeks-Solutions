/*input
2
ABC
ABSG
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

std::vector<string> ans;

void swap(char *a, char *b) {
	char c;
	c = *a;
	*a = *b;
	*b = c;
}

void permute(char *s, int l, int r) {
	if (l == r) {
		string x = s;
		ans.pb(s);
	}
	for (int i = l; i <= r; i++) {
		swap(s+l, s+i);
		permute(s, l+1, r);
		swap(s+l, s+i);
	}
}

int main() {
	int t;
	char s[10];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		permute(s, 0, strlen(s)-1);
		std::sort(ans.begin(), ans.end());
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";
		cout << endl;
		ans.clear();
	}
	return 0;
}