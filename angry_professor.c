#include<stdio.h>
int main(){
    int test_cases,total_students,threshold,count;
    scanf("%d",&test_cases);
    for(int i=0;i<test_cases;i++){
        count=0;
        scanf("%d %d",&total_students,&threshold);
        int arrival_time[total_students];
        for(int j=0;j<total_students;j++){
            scanf("%d",&arrival_time[j]);
            if(arrival_time[j]<=0)
                count++;
        }
        if(count>=threshold)
            printf("NO");
        else
            printf("YES");
        printf("\n");
    }
    return 0;
}
