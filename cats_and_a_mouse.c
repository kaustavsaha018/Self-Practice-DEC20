#include<stdio.h>
int main(){
    int queries;
    scanf("%d",&queries);
    int position[queries][3];
    for(int i=0;i<queries;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&position[i][j]);
        }
    }
    int catA_dist,catB_dist;
    for(int i=0;i<queries;i++){
        if(position[i][2]-position[i][0]>=0){
            catA_dist=position[i][2]-position[i][0];
        }
        else{
            catA_dist=position[i][0]-position[i][2];
        }
        if(position[i][2]-position[i][1]>=0){
            catB_dist=position[i][2]-position[i][1];
        }
        else{
            catB_dist=position[i][1]-position[i][2];
        }
        if(catA_dist>catB_dist){
            printf("Cat B");
        }
        else if(catA_dist<catB_dist){
            printf("Cat A");
        }
        else {
            printf("Mouse C");
        }
        printf("\n");
    }   
}
