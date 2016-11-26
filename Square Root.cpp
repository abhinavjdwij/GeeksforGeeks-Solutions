/*Method Only Submission*/
/*You are required to complete
this function*/
long long int floorSqrt(long long int x)  {
    long long int begin = 1, end = 1010, mid;
    while (begin < end) {
        mid = (begin + end) / 2;
        if (mid*mid == x) {
            begin = mid;
            break;
        }
        else if (mid*mid < x) {
            begin = mid+1;
        }
        else end = mid-1;
    }
    if (begin*begin > x) begin--;
    return begin;
}