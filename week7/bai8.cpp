int** transpose(int** matrix, int nRows, int nCols){
    int **tranposeMatrix = new int*[nCols];
    for(int i = 0 ; i < nCols ;i++){
        tranposeMatrix[i] = new int[nRows];
    }
    for(int i = 0 ; i < nRows ;i++){
        for(int j = 0 ; j < nCols ;j++){
            tranposeMatrix[j][i] = matrix[i][j];
        }
    }
    return tranposeMatrix;
}
