/*You are required to complete this method */

long long lcm(long long a, long long b) {
    return a * b / __gcd(a, b);
}

long long getSmallestDivNum(long long n) {
    long long ans = 1;
    for (long long i = 1; i <= n; i++) {
       ans = lcm(ans, i);
    }
    return ans;
}