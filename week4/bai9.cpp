void swap(float &a, float &b){
	float tmp = a;
	a = b;
	b = tmp;
}
void sortAscending(float a[], int size){
	for(int i=  0; i < size ;i++ ){
		for(int j = i + 1;  j < size ;j ++){
			if(a[j] < a[i]) swap(a[i],a[j]);
		}
	}
}
void reverseArray(float a[], int size){
	for(int i=  0; i < size ;i++ ){
		for(int j = i + 1;  j < size ;j ++){
			if(a[j] > a[i]) swap(a[i],a[j]);
		}
	}
}
void sort(float array[], int size, bool isAscending){
    if(isAscending == true){
        sortAscending(array,size);
    }else reverseArray(array, size);
}
