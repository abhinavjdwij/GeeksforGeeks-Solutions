/*input
1
3
2 3 4
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

std::string data[10];
char ans[10];
int t, n, d[10];

void pre() {
	data[2] = "abc"; data[3] = "def"; data[4] = "ghi";
	data[5] = "jkl"; data[6] = "mno"; data[7] = "pqrs";
	data[8] = "tuv"; data[9] = "wxyz";
}

void solve(int p) {
	if (p == n) { ans[p] = '\0'; printf("%s ", ans); return; }
	for (int i = 0; i < data[d[p]].size(); i++) {
		ans[p] = data[d[p]][i];
		solve(p+1);
	}
}

int main() {
	pre();
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 0 ; i < n; i++)
			scanf("%d", &d[i]);
		solve(0);
		printf("\n");
	}
	return 0;
}