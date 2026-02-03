bool isPalindrome(int x) {
    int rem;
    double rev=0;
    int temp;
    temp=x;
    if(x<0){
        return false;
    }
    while(x!=0){
      rem=x%10;
      rev=rev*10+rem;
      x/=10;
    }
    if(rev==temp){
        return true;
    }
    else{
        return false;
    }
}
