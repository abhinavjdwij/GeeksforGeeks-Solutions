/*input
2
3
5
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			int j = (int) sqrt(i);
			printf("%d ", (j*j == i) ? 1 : 0);
		}
		printf("\n");
	}
	return 0;
}