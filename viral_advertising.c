#include<stdio.h>
int main(){
    int shared[50],liked,cummulative=0;
    shared[0]=5;
    int day;
    scanf("%d",&day);
    for(int i=0;i<day;i++){
        liked=shared[i]/2;
        cummulative=cummulative+liked;
        shared[i+1]=liked*3;
    }
    printf("%d",cummulative);
    return 0;
}
