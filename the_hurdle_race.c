#include<stdio.h>
int main(){
    int no_of_hurdles,natural_jump_height;
    scanf("%d %d",&no_of_hurdles,&natural_jump_height);
    int hurdles[no_of_hurdles],max=0;;
    for(int i=0;i<no_of_hurdles;i++){
        scanf("%d",&hurdles[i]);
        if(max<hurdles[i])
            max=hurdles[i];  
    }
    if(natural_jump_height>=max)
        printf("0"); 
    else {
        printf("%d",max-natural_jump_height);
    }
    
    return 0;
}
