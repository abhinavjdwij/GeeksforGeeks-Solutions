/* Function only Submission */
/*You are required to complete the function*/
long long findMaxProduct(int data[], int n, int k) {
    int i;
    long long p = 1, ans;
    for (i = 0; i < k; i++)
        p *= data[i];
    ans = p;
    for (i = k; i < n; i++) {
        p *= data[i];
        p /= data[i-k];
        ans = max(ans, p);
    }
    return ans;
}