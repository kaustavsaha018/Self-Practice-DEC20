#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count,max=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]-arr[j]<=1 && arr[i]-arr[j]>=0){
                count++;
            }
        }
        if(count>=max)
            max=count;
    }
    printf("%d",max);
    return 0;
}
