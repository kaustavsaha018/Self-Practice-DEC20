#include<stdio.h>
int main(){
    int n,k,sum,count=0;
    scanf("%d %d", &n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=0;
            sum=sum+arr[i]+arr[j];
            if(i<j && sum%k==0){
                count++;
            }
        }
    }
    printf("%d",count);
}
