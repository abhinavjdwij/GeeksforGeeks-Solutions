/*input
2
4
5 4 2 1
1
8
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)
#define ll long long

int main() {
	int t, n, i, x, max, min;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		scanf("%d", &x);
		max = min = x;
		for (i = 1; i < n; i++) {
			scanf("%d", &x);
			max = MAX(max, x);
			min = MIN(min, x);
		}
		printf("%d %d\n", max, min);
	}
	return 0;
}