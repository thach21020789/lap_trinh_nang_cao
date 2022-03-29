bool testAZ(char s){
    if(s >= 'A' && s <= 'Z'){
        return true;
    }
    return false;
}
bool testaz(char s){
    if(s >= 'a' && s <= 'z'){
        return true;
    }
    return false;
}
void rFilter(char *s) {
    
    for(int i = strlen(s) - 1 ;i >= 0; i--){
        if(testAZ(s[i]) == 0 && testaz(s[i]) == 0){
            s[i] = '_';
        }else break;
    }
}
