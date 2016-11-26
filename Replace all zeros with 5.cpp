/* Method only Submission */
/*you are required to complete this method*/
int convertFive(int n) {
    int ans = 0, p = 1;
    while (n) {
        ans = ((n % 10) == 0 ? 5 : (n % 10))*p + ans;
        n /= 10;
        p *= 10;
    }
    return ans;
}