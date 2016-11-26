/*input
2
2 3
1
1 2
2
*/

#include <stdio.h>
#include <math.h>

int main() {
	int t, n;
	long long int ans;
	float a, b, r;
	scanf("%d", &t);
	while (t--) {
		scanf("%f%f%d", &a, &b, &n);
		r = b / a;
		ans = (long long int) floor(a * pow(r, n-1));
		if (n == 1) printf("%lld\n", (long long int) a);
		else if (n == 2) printf("%lld\n", (long long int) b);
		else printf("%lld\n", ans);
	}
	return 0;
}