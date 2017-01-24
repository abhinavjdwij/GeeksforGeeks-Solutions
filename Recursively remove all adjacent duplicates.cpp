/*input
2
geeksforgeek
acaaabbbacdddd
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

string solve(string ans, string s, int p) {
	if (p == s.size()) return "";
	if ((p > 0 && s[p] == s[p-1]) || (p < s.size() && s[p] == s[p+1])) return ans + solve(ans, s, p+1);
	else return ans + s[p] + solve(ans, s, p+1);
}

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		while (true) {
			int k = s.size();
			s = solve("", s, 0);
			if (k == s.size()) break;
		}
		cout << s << endl;
	}
	return 0;
}