#include<stdio.h>
#include<stdbool.h>
#include <string.h>
int main(){
    int num_req,current_floor,floor_req;
    current_floor=0;
    //input number of request
    //for loop 1 to num_req
    printf("enter floor you want to go");
    scanf("%d",&floor_req);
    //WHILE floor_req!=current_floor DO
    if (floor_req>current_floor)
    {
        printf("moving up");
        current_floor++;
    
    }
    if (floor_req<current_floor)
    {
        printf("moving down");
        current_floor--;
    
    }
    //END WHILE
    printf("door opening");
    //END FOR

    return 0;
}