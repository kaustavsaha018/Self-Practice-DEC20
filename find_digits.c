#include<stdio.h>

int findDigits(int n) {
    int original_num=n,count=0,temp;
    while(n!=0){
        temp=n%10;
        if(temp!=0){
            if(original_num%temp==0)
                count++;
        }
        
        n=n/10;
    }
    return count;
}

int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        printf("%d\n",findDigits(n));
    }
    return 0;
}
