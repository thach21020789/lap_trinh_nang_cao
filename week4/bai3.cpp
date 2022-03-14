void printArrow(int n, bool left){
    int a ; 
	for(int i  = n ; i >= 1; i--){
		if(left == 0) a = (n - i)*2;
		else a = i - 1;
		cout << string(a,' ')<<string(i,'*')<< endl;
	}
	for(int i = 2; i <= n ;i++){
		if(left == 0) a = (n - i)*2;
		else a = i - 1;
		cout << string(a,' ') << string(i, '*') << endl;
	}
}
