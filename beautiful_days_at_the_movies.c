#include<stdio.h>
int number_reverse(int num){
    int rev_num=0;
    while(num!=0){
        rev_num=(rev_num*10)+(num%10);
        num=num/10;
    }
    return rev_num;
}
int main(){
    int starting_day,ending_day,divisor;
    scanf("%d %d %d",&starting_day,&ending_day,&divisor);
    int beautiful_days_count=0;
    for(int i=starting_day;i<=ending_day;i++){
        if((i-number_reverse(i))%divisor==0)
            beautiful_days_count++;
    }
    printf("%d",beautiful_days_count);
    return 0;
}
