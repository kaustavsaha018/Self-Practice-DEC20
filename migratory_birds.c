//OPTIMIZED SOLUTION
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int id_arr[n],count_arr[5];
    
    for(int i=0;i<5;i++) count_arr[i]=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&id_arr[i]);
        count_arr[id_arr[i]-1]++;
    }
    
    int max_id=0;
    for(int i=1;i<5;i++){
        if(count_arr[max_id]<count_arr[i]) 
            max_id=i;
        else if(count_arr[max_id]==count_arr[i]){
            if(max_id>i)
                max_id=i;
        }
    }
    printf("%d",max_id+1);
    return 0;  
}

//GENERAL SOLUTION
#include<stdio.h>
struct bird{
  int id;
  int count;  
};

int main(){
    int n;
    scanf("%d",&n);
    struct bird b[n];
    int temp_arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i].id);
        temp_arr[i]=b[i].id;
        b[i].count=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[i].id==b[j].id){
                b[j].count++;
            }
        }
    }
    int max_frequency=b[0].count;
    int max_frequency_id=b[0].id;
    for(int i=1;i<n;i++){
        if(max_frequency<b[i].count){
            max_frequency=b[i].count;
            max_frequency_id=b[i].id;
        }
        else if(max_frequency==b[i].count){
            if(max_frequency_id>b[i].id)
                max_frequency_id=b[i].id;            
        }
    }
    printf("%d",max_frequency_id);
    
    return 0;
}
