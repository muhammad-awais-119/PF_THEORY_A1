#include<stdio.h>
#include<stdbool.h>
#include <string.h>

int main (){
    float stay,GNUM;
    bool season;
    char roomtype[20];
    float revenue,total;
    total=0.0;
    revenue=0.0;
   
     //loop 1 to number of guest
     printf("enter season peak or off peak[ 1 or 0 ] ");
     scanf("%d",&season);
     printf("enter roomtype ");
     scanf(" %s",roomtype);
     printf("enter number of days to stay ");
     scanf("%f",&stay);
     
     if (season){
        
        if (strcmp(roomtype,"standard")==0)
        {
            
            total=5000.0*stay;
            
        }else if (strcmp(roomtype,"delux")==0)
        {
            total=8000.0*stay;

        }else if (strcmp(roomtype,"suite")==0)
        {
            total=12000.0*stay;
        }

     }else
     {
        if (strcmp(roomtype,"standard")==0)
        {
            total=3000.0*  stay;

        }else if (strcmp(roomtype,"delux")==0)
        {
            total=5000.0*  stay;

        }else if (strcmp(roomtype,"suite")==0)
        {
            total=8000.0*  stay;

        }

     }
     if (stay >7.0){
        
        total=total-total*0.15;
        
     }
     revenue=total+revenue;
     printf("total is %.1f ",total);
     //end loop
     printf("revenue is %.1f ",revenue);
     //end
     








    return 0;
}