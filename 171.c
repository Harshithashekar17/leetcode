int map(char a){
    if(a=='A') return 1;
    else if(a=='B') return 2;
    else if(a=='C') return 3;
    else if(a=='D') return 4;
    else if(a=='E') return 5;
    else if(a=='F') return 6;
    else if(a=='G') return 7;
    else if(a=='H') return 8;
    else if(a=='I') return 9;
    else if(a=='J') return 10;
    else if(a=='K') return 11;
    else if(a=='L') return 12;
    else if(a=='M') return 13;
    else if(a=='N') return 14;
    else if(a=='O') return 15;
    else if(a=='P') return 16;
    else if(a=='Q') return 17;
    else if(a=='R') return 18;
    else if(a=='S') return 19;
    else if(a=='T') return 20;
    else if(a=='U') return 21;
    else if(a=='V') return 22;
    else if(a=='W') return 23;
    else if(a=='X') return 24;
    else if(a=='Y') return 25;
    else return 26;
}
int titleToNumber(char* columnTitle) {
    int n=strlen(columnTitle);
    int sum=0;
    int j=0;
    if(n==1){
        return map(columnTitle[0]);
    }
    else{
        for(int i=n-1;i>=0;i--){
          sum+=map(columnTitle[i])*pow(26,j);
          j++;
        }
    }
    return sum;
}