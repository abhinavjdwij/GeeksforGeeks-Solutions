/*input
1
4
1 2 3 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
	int t, n, i, s, x;
	scanf("%d", &t);
	while (t--) {
		s = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &x);
			s += x;
		}
		printf("%d\n", s);
	}
	return 0;
}