void push(char c,int stack[],int max,int *top){
    if(*top!=max-1){
        stack[++(*top)]=c;
    }
}
void pop(int *top){
  if(*top!=-1){
    (*top)--;
  } 
}


bool isValid(char* s) {
    int max=10000;
    int stack[max];
    int top=-1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            push(s[i],stack,max,&top);
        }
        else{
            if(top==-1){
                return false;
            }
            if((s[i]==')' && stack[top]!='(')||(s[i]=='}' && stack[top]!='{')||(s[i]==']' && stack[top]!='[')){
               return false;
            }
            else {
               pop(&top);
            }
        }
    }
    return top==-1;
}