/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
bool check(string s, string x, int p) {
    for (int i = 0; i < x.size(); i++, p++) {
        if (s[p] != x[i])
            return false;
    }
    return true;
}
int strstr(string s, string x) {
    int hash = 0, current = 0;
    for (int i = 0; i < x.size(); i++) {
        current += s[i];
        hash += x[i];
    }
    if (current == hash && check(s, x, 0)) return 0;
    for (int i = x.size(); i < s.size(); i++) {
        current = current + s[i] - s[i - x.size()];
        if (current == hash && check(s, x, i-x.size()+1))
            return (i - x.size() + 1);
    }
    return -1;
}
