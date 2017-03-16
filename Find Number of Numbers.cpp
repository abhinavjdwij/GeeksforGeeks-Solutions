/*Complete the function given below*/
int has_k(int n, int k) {
    int ans = 0;
    if (n == 0 && k == 0) return 1;
    while (n) {
        if (n % 10 == k) ans += 1;
        n /= 10;
    }
    return ans;
}

int num(int a[], int n, int k) {
     int ans = 0;
     for (int i = 0; i < n; i++)
        ans += has_k(a[i], k);
    return ans;
}