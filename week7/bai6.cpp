int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
	int firstidx = 0, secondidx = 0, mergeidx = 0;
	int m = lenArr1 + lenArr2;
	int* mergearr = new int[m];
	if( firstArr[0] < firstArr[1] ){
	    while (firstidx < lenArr1 && secondidx < lenArr2) {
		if (firstArr[firstidx] < secondArr[secondidx]) {
			mergearr[mergeidx] = firstArr[firstidx];
			firstidx++;
		}
		else {
			mergearr[mergeidx] = secondArr[secondidx];
			secondidx++;
		}
		mergeidx++;
	}
	while (firstidx < lenArr1) {
		mergearr[mergeidx] = firstArr[firstidx];
		firstidx++;
		mergeidx++;
	}
	while (secondidx < lenArr2) {
		mergearr[mergeidx] = secondArr[secondidx];
		secondidx++;
		mergeidx++;
	}}else{
	    while (firstidx < lenArr1 && secondidx < lenArr2) {
		if (firstArr[firstidx] > secondArr[secondidx]) {
			mergearr[mergeidx] = firstArr[firstidx];
			firstidx++;
		}
		else {
			mergearr[mergeidx] = secondArr[secondidx];
			secondidx++;
		}
		mergeidx++;
	}
	while (firstidx < lenArr1) {
		mergearr[mergeidx] = firstArr[firstidx];
		firstidx++;
		mergeidx++;
	}
	while (secondidx < lenArr2) {
		mergearr[mergeidx] = secondArr[secondidx];
		secondidx++;
		mergeidx++;
	}}
	return mergearr;
}
