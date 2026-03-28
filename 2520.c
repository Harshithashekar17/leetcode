int countDigits(int num) {
    int temp=num;
    int k=0,rem;
    while(temp!=0){
        rem=temp%10;
        if(num%rem==0){
            k++;
        }
        temp/=10;
    }
    return k;
}