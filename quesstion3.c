#include<stdio.h>
#include<stdbool.h>
#include <string.h>
int main(){
    float mark1,mark2,mark3,mark4,mark5;
    int NUM_STDS;
    float total,avg;
    char result[20];
    total=0.0;
    avg=0.0;
    printf("enter number of students");
    scanf("%d",NUM_STDS);
    //for loop 1 TO NUM_STDS
    printf("ENter marks of 5 subjects");
    scanf("%f",&mark1);
    scanf("%f",&mark2);
    scanf("%f",&mark3);
    scanf("%f",&mark4);
    scanf("%f",&mark5);
    if (mark1<33.0 || mark2<33 || mark3<33 || mark4<33 ||mark5<33 ){
        strcpy(result,"fail_subject_deficiency");
    }else
    {
        total=mark1+mark2+mark3+mark4+mark5;
        avg=total/5;
        if (avg>=80){
           strcpy(result,"distinction");
        }
        else if (avg>=60 && avg <80)
        {
            strcpy(result,"pass");
        }
        else if (avg<60)
        {
            strcpy(result,"fail");
        }else
        {
            printf("h");
        }
    }
    printf("%s",result);
    //END FOR
    //END




    return 0;
}


