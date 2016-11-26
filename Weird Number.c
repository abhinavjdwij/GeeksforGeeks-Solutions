/*input
2
5
70
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int subset_sum(int arr[], int n, int s) {
	if (s == 0) return 1;
	if (n == 0 && s != 0) return 0;
	if (arr[n-1] > s) return subset_sum(arr, n-1, s);
	return subset_sum(arr, n-1, s) || subset_sum(arr, n-1, s-arr[n-1]);
}

int sum_divisors(int n) {
	int i, x, s = 0, arr[10000], p = 0;
	x = (int) sqrt(n);
	for (i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			s += i + (n/i);
			arr[p++] = i;
			arr[p++] = (n/i);
		}
	}
	if (x*x == n) {
		s -= x;
		p--;
	}
	s += 1;
	arr[p++] = 1;
	return (s > n && !subset_sum(arr, p, n));
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%s\n", sum_divisors(n) ? "Weird" : "Not Weird");
	}
	return 0;
}