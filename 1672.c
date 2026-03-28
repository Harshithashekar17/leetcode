int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max=0;
    for(int i=0;i<accountsSize;i++){
        int total=0;
        for(int j=0;j<(* accountsColSize);j++){
            total+=accounts[i][j];
        }
        if(total>max){
            max=total;
        }
    }
    return max;
}