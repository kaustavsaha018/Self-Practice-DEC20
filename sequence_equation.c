#include<stdio.h>
int main(){
    int p;
    scanf("%d",&p);
    int arr_p[p];
    for(int i=1;i<=p;i++){
        scanf("%d",&arr_p[i]);
    }
    int y1,y2; 
    for(int i=1;i<=p;i++){
        y1=1;
        while(i!=arr_p[y1]){
            y1++;
        }
        y2=1;
        while(y1!=arr_p[y2]){
            y2++;
        }
        printf("%d\n",y2);
        
    }
}
