/*input
2
30.25
5.5
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

// Idea: Convert to fraction, then divide denominator by gcd(numerator, denominator), ans = denominator of the fraction in it's lowest form

int gcd(int a, int b) {
	while (b) {
		int temp = a;
		a = b;
		b = (temp % b);
	}
	return a;
}

int main() {
	int t, p, x, y;
	stringstream ss;
	string s;
	float f;
	scanf("%d", &t);
	while (t--) {
		scanf("%f", &f);
		stringstream ss;
		ss << f;
		s = ss.str();
		y = 1;
		for (int i = s.size()-1; i >= 0; i--) {
			if (s[i] == '.') {
				y = pow(10, s.size()-i-1);
				break;
			}
		}
		x = (int) (f*y);
		printf("%d\n", y / gcd(x, y));
	}
	return 0;
}