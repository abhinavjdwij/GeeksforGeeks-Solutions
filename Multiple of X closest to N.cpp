/*input
2
9 2
2855 13
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int t, n, x, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &x);
		a = (n/x) * x;
		b = (n/x + 1) * x;
		printf("%d\n", (abs(n-a) < abs(n-b)) ? a : b);
	}
	return 0;
}