#include<stdio.h>
int main(){
    int test_cases,n;
    scanf("%d",&test_cases);
    int heights[60];
    heights[0]=1;
    for(int i=1;i<60;i++){
        if(i%2==0)
            heights[i]=heights[i-1]+1;
        else
            heights[i]=2*heights[i-1];
    }
    for(int i=0;i<test_cases;i++){
        scanf("%d",&n);
        printf("%d\n",heights[n]);
    }
}
