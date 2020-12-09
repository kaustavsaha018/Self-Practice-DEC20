#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int d,m;
    scanf("%d %d",&d,&m);
    int count=0,sum;
    for(int i=0;i<n+m;i++){
        sum=0;
        for(int j=i;j<m+i;j++){
            sum=sum+arr[j];
        }
        if(sum==d)
            count++;
    }
    printf("%d", count);
}
