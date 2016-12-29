/*input
2
12
i like sam sung samsung mobile ice cream icecream man go mango
ilike
12
i like sam sung samsung mobile ice cream icecream man go mango
idontlike
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

std::map<string, int> arr;
string data;

bool solve(string s, int p) {
	if (p == data.size()) return (s.size() == 0 || arr.count(s));
	bool ans = false;
	if (arr.count(s)) {
		string x = "";
		x += data[p];
		ans |= solve(x, p+1);
	}
	ans |= solve(s+data[p], p+1);
	return ans;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> data;
			arr[data] = true;
		}
		cin >> data;
		printf("%d\n", solve("", 0));
		data.clear();
	}
	return 0;
}