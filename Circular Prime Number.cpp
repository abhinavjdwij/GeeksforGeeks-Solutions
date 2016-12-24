/*input
2
197
101
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

bool sieve[10010];

void pre() {
	memset(sieve, true, sizeof(sieve));
	sieve[0] = sieve[1] = false;
	for (int i = 2; i <= 100; i++) {
		if (sieve[i]) {
			for (int j = i+i; j <= 10000; j += i)
				sieve[j] = false;
		}
	}
}

std::vector<int> rotations(int n) {
	std::vector<int> data;
	int x = n, p = 1; // p = (len(n)^10)
	while (x) {
		x /= 10;
		p *= 10;
	}
	x = n;
	while (n) {
		data.pb(x);
		x = ((n % 10)*p + x) / 10; // append last to first, remove new last digit
		n /= 10;
	}
	return data;
}

bool solve(int n) {
	std::vector<int> data = rotations(n);
	for (int i = 0; i < data.size(); i++)
		if (!sieve[data[i]])
			return false;
	return true;
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", solve(n));
	}
	return 0;
}