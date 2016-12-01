/*You are required to complete this method */
int atoi(string str) {
    int x = 0, flag = 1;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') flag = -1;
        else if (str[i] >= '0' && str[i] <= '9') x = x*10 + (str[i]-'0');
        else return -1;
    }
    return x*flag;
}
