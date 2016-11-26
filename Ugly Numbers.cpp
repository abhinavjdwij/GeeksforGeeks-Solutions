/*input
2
10
4
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

bool arr[1000000];
std::vector<int> data;

void pre() {
	memset(arr, false, sizeof(arr));
	arr[1] = true;
	for (int i = 1; i < 1000000; i++) {
		if (arr[i]) {
			if (2*i < 1000000) arr[2*i] = true;
			if (3*i < 1000000) arr[3*i] = true;
			if (5*i < 1000000) arr[5*i] = true;
			data.pb(i);
		}
	}
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", data[n-1]);
	}
	return 0;
}