/*input
2
2
5
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

string int_to_bin(int n) {
	string s = "";
	char buffer[1];
	while (n) {
		s += (n % 2 == 1) ? "1" : "0";
		n /= 2;
	}
	std::reverse(s.begin(), s.end());
	return s;
}

std::vector<string> data;;

void pre() {
	for (int i = 1; i <= 500; i++)
		data.pb(int_to_bin(i));
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
			cout << data[i-1] << " ";
		cout << endl;
	}
	return 0;
}