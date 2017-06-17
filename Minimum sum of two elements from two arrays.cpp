/*input
2
5
1 5 4 3 2
2 1 4  5 3
4
1 2 3 4
1 3 5 6
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

void last2(int arr[], int n, int *m1, int *m2) {
	if (arr[0] < arr[1]) { *m1 = 0; *m2 = 1; }
	else { *m1 = 1; *m2 = 0; }
	for (int i = 2; i < n; i++) {
		if (arr[i] < arr[*m1]) {
			*m2 = *m1;
			*m1 = i;
		}
		else if (arr[i] < arr[*m2])
			*m2 = i;
	}
}

int main() {
	int t, n, a[1010], b[1010], ans, x, y, p, q;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (int i = 0; i < n; i++)
			scanf("%d", &b[i]);
		last2(a, n, &x, &y);
		last2(b, n, &p, &q);
		if (x != p) ans = a[x] + b[p];
		else ans = min(a[x] + b[q], b[p] + a[y]);
		printf("%d\n", ans);
	}
	return 0;
}