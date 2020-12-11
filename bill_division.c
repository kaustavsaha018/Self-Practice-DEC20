#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i!=k)
            sum=sum+arr[i];
    }
    int b;
    scanf("%d",&b);
    if(sum/2==b)
        printf("Bon Appetit");
    else
        printf("%d",b-sum/2);
}
