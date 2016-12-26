/*input
1
geeksforgeeks
geeks
Output
found
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

bool check(string a, string b, int p) {
	for (int i = p, j = 0; j < b.size(); i++, j++) {
		if (a[i] != b[j])
			return false;
	}
	return true;
}

bool rabin_karp(string a, string b) {
	if (a.size() < b.size()) return false;
	int hash = 0, c = 0;
	for (int i = 0; i < b.size(); i++) {
		hash += (int) b[i];
		c += (int) a[i];
	}
	if (c == hash && check(a, b, 0)) return true;
	for (int i = b.size(); i < a.size(); i++) {
		c += (int) (a[i] - a[i-b.size()]);
		if (c == hash && check(a, b, i-b.size()+1))
			return true;
	}
	return false;
}

int main() {
	int t;
	string a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << (rabin_karp(a, b) ? "found" : "not found") << endl;
	}
	return 0;
}