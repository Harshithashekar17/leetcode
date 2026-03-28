int subtractProductAndSum(int n) {
    int temp=n;
    int sum=0;
    int pro=1;
    int res;
    while(temp>0){
        pro*=temp%10;
        temp/=10;
    }
    while(n>0){
        sum+=n%10;
        n/=10;   
    }
    res=pro-sum;
    return res;
}