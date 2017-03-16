/*input
2
4977
138
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

std::vector<int> data[100010];

int digit_pro(int n) {
	int ans = 1;
	while (n) {
		ans *= (n % 10);
		n /= 10;
	}
	return ans;
}

void pre() {
	for (int i = 1; i <= 100000; i++) {
		int x = i * digit_pro(i);
		if (x >= 0 && x <= 100000)
			data[x].pb(i);
	}
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (data[n].size()) {
			for (int i = 0; i < data[n].size(); i++)
				printf("%d ", data[n][i]);
			printf("\n");
		}
		else printf("-1\n");
	}
	return 0;
}