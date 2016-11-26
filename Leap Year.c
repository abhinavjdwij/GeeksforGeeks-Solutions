/*input
1
4
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%s\n", (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) ? "Yes" : "No");
	}
	return 0;
}