int maxProfit(int* prices, int pricesSize) {
    int cheap=prices[0];
    int max=0;
    int min;
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<cheap){
            cheap=prices[i];
        }
        else{
            min=prices[i]-cheap;
            if(min>max){
                max=min;
            }
        }
    }
    return max;
}
 