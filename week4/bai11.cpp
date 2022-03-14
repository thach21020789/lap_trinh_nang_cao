string pigLatin(string s){
    if(s[0] == 'u' ||s[0] == 'e' ||s[0] == 'o' ||s[0] == 'a' ||s[0] == 'i'){
        return s + "way";
    }else{
        char ch = s[0];
 	    s.erase(s.begin() + 0);
 	    string str = s + ch + "ay";
 	    return str;
    }
}
