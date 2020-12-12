#include<stdio.h>
int main(){
    int budget,n,m;
    scanf("%d %d %d",&budget,&n,&m);
    int keyboards[n],drives[m];
    for(int i=0;i<n;i++) scanf("%d",&keyboards[i]);
    for(int i=0;i<m;i++) scanf("%d",&drives[i]);
    
    int max=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<keyboards[i]+drives[j] && budget>=keyboards[i]+drives[j])
                max=keyboards[i]+drives[j];
        }
    }
    printf("%d",max);
    return 0;
}
