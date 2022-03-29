void reverse(char *s)
{
    int n = strlen(s);
    for(int i = 0; i < n/2;i++) {
        swap(s[i],s[n - i - 1]);
    }
}
