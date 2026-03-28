int reverse(int x){
    long long rev = 0;
    long long int rem;
       while(x!=0){
       rem=x%10;
       rev=rev*10+rem;
       if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }
       x/=10;
    }
    return rev;
}
