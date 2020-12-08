#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    int arr1[n1],arr2[n2],i;
    for(i=0;i<n1;i++)
        scanf("%d", &arr1[i]);
    for(i=0;i<n2;i++)
        scanf("%d", &arr2[i]);
    int temp_count,main_count=0,j,k;
    for(i=arr1[n1-1];i<=arr2[0];i++){
        temp_count=0;
        for(j=0;j<n1;j++){
            if(i%arr1[j]==0)
                temp_count++;
        }
        for(k=0;k<n2;k++){
            if(arr2[k]%i==0)
                temp_count++;
        }
        if(temp_count==n1+n2)
            main_count++;
    }
    printf("%d",main_count);
}
