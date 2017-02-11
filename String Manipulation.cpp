/*input
2
5
ab aa aa bcd ab
4
tom jerry jerry tom
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
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		string s;
		std::stack<std::string> data;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (!data.empty() && s == data.top()) data.pop();
			else data.push(s);
		}
		cout << data.size() << endl;
	}
	return 0;
}