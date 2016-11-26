/*input
2
2 3
4
1 2
10
*/

#include <stdio.h>
#include <math.h>

int main() {
	int t, a, b, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d", &a, &b, &n);
		printf("%d\n", a+(n-1)*(b-a));
	}
	return 0;
}