#include<math.h>
int mySqrt(int x) {
    int l=1,h=x;
    if(x==0){
        return 0;
    }
    int res=1;
    while(l<=h){
        double mid=l+(h-l)/2;
        if(mid*mid<=x){
            res=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return res;
}