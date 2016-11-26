/* Method Only Submission */
/*You are required to complete this function */
char *encode(char *src) {
    int p = 0, c = 1;
    char *s;
    s = (char *) malloc(sizeof(char)*110);
    for (int i = 1; src[i] != '\0'; i++) {
        if (src[i] == src[i-1]) {
            c += 1;
        }
        else {
            s[p++] = src[i-1];
            s[p++] = '0' + c;
            c = 1;
        }
    }
    s[p++] = src[strlen(src)-1];
    s[p++] = '0' + c;
    s[p] = '\0';
    return s;
}