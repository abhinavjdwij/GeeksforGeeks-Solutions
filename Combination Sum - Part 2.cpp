/*input
2
7
10 1 2 7 6 1 5
8
5
8 1 8 6 8
12
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

bool check[15], flag;
std::set< std::vector<int> > ans;

void solve(int p, int n, int arr[], int k) {
	if (k < 0) return;
	if (k == 0) {
		std::vector<int> c;
		for (int i = 0; i < n; i++) {
			if (check[i])
				c.pb(arr[i]);
		}
		ans.insert(c);
		return;
	}
	for (int i = p; i < n; i++) {
		check[i] = true;
		solve(i+1, n, arr, k-arr[i]);
		check[i] = false;
	}
}

int main() {
	int t, n, k, data[15];
	scanf("%d", &t);
	while (t--) {
		ans.clear();
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d", &data[i]);
		std::sort(data, data+n); // for ascending order
		scanf("%d", &k);
		solve(0, n, data, k);
		if (ans.size() == 0) printf("Empty\n");
		else {
			std::set< std::vector<int> >::iterator p;
			for (p = ans.begin(); p != ans.end(); p++) {
				int c = (*p).size();
				printf("(");
				for (int i = 0; i < (*p).size(); i++) {
					printf("%d", (*p)[i]);
					if (c-- > 1) printf(" ");
				}
				printf(")");
			}
			printf("\n");
		}
	}
	return 0;
}