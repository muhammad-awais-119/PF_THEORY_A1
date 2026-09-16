#include<stdio.h>
#include<stdbool.h>
#include <string.h>
int main(){
    char V_type,U_type,Emergency;
    int NUM_vehicles,A_count,B_count,C_count,rejected_vehi,sucessful_vehi,processed;
    int Van_count,Bike_count,Car_count,A_max,B_max,C_max;
    A_count=B_count=C_count=rejected_vehi=sucessful_vehi=processed=Van_count=Bike_count=Car_count=0;
    A_max=20;
    B_max=40;
    C_max=15;
    Van_count,Bike_count,Car_count,A_count,B_count,C_count,rejected_vehi,sucessful_vehi,processed=0;
    printf("enter number of vehicles\n");
    scanf(" %d",&NUM_vehicles);
 //fo loop 1 TO NUM_vehicles
    printf("\nenter vehicles type\n");
    printf("C_car,B_bike,V_van\n");
    scanf(" %c",&V_type);
    printf("%c", V_type);
    //while loop 
    if ( (V_type !='C') && (V_type !='B') && (V_type!='V') )
    {
        printf("\ninvalid input plzz re enter");
        scanf(" %c", &V_type);
    }
    //END WHILE
    printf("\nenter user category");
    printf("\nF_faculty,S_student,G_guest");
    scanf(" %c",&U_type);
    //WHILE LOOP
    if ((U_type !='F')&&(U_type !='S')&&(U_type !='G'))
    {
        printf("\ninvalid input plzz re enter");
        scanf(" %c",&U_type);
    }
    //END WHILE
    printf("\nis the vehicle an emergency vehicles[Y/N]");
    scanf(" %c",&Emergency);
    if (Emergency=='Y')
    {
        switch (U_type)
        {
        case 'F':
            printf("\nAllow in zone A");
            break;
        case 'S':
            printf("\nAllow in zone B");
            break;
         case 'G':
            printf("\nAllow in zone C");
            break;    
        
        default:
            break;
        }
    }
    else
    {
        if (U_type=='F')
        {
            switch (V_type)
            {
            case 'V':
                A_count=A_count+2;
                if (A_count>A_max)
                {
                    A_count=A_count-2;
                    printf("\nNO space available");
                    rejected_vehi=rejected_vehi+1;
                    processed=processed+1;

                }else
                {
                    printf("\nsuccessful, proceed to A");
                    sucessful_vehi=sucessful_vehi+1;
                    Van_count=Van_count+1;
                    processed=processed+1;
                }
                
                
                break;
            case 'B':
                A_count=A_count+1;
                if (A_count>A_max)
                {
                    A_count=A_count-1;
                    printf("\nNO space available");
                    rejected_vehi=rejected_vehi+1;
                    processed=processed+1;

                }else
                {
                    printf("\nsuccessful, proceed to A");
                    sucessful_vehi=sucessful_vehi+1;
                    Bike_count=Bike_count+1;
                    processed=processed+1;
                }
                
                
                break;    
            
            default:
                break;
            }
            printf("\nremaining space in A %d",A_max-A_count);
            if (V_type=='C')
            {
                rejected_vehi=rejected_vehi+1;
                printf("\ncars not allowed in zone A");
                processed=processed+1;
            }
            
        }
        else if (U_type=='S')
        {
            switch (V_type)
            {
            case 'V':
                C_count=C_count+2;
                if (C_count>C_max)
                {
                    C_count=C_count-2;
                    printf("\nNO space available");
                    rejected_vehi=rejected_vehi+1;
                    processed=processed+1;

                }else
                {
                    printf("\nsuccessful, proceed to C");
                    sucessful_vehi=sucessful_vehi+1;
                    Van_count=Van_count+1;
                    processed=processed+1;
                }
                
                
                break;
            case 'B':
                B_count=B_count+1;
                if (B_count>B_max)
                {
                    B_count=B_count-1;
                    printf("\nNO space available");
                    rejected_vehi=rejected_vehi+1;
                    processed=processed+1;

                }else
                {
                    printf("\nsuccessful, proceed to A");
                    sucessful_vehi=sucessful_vehi+1;
                    Bike_count=Bike_count+1;
                    processed=processed+1;
                }
                
                
                break;    
            
            default:
                break;
            }
            printf("\nremaining space in B %d",B_max-B_count);
            if (V_type=='C')
            {
                rejected_vehi=rejected_vehi+1;
                printf("\ncars not allowed in zone B");
                processed=processed+1;
            }

        }
        else
        {
            switch (V_type)
            {
            case 'V':
                C_count=C_count+2;
                if (A_count>A_max)
                {
                    C_count=C_count-2;
                    printf("\nNO space available");
                    rejected_vehi=rejected_vehi+1;
                    processed=processed+1;

                }else
                {
                    printf("\nsuccessful, proceed to C");
                    sucessful_vehi=sucessful_vehi+1;
                    Van_count=Van_count+1;
                    processed=processed+1;
                }
                
                
                break;
            case 'C':
                C_count=C_count+1;
                if (A_count>A_max)
                {
                    C_count=C_count-1;
                    printf("\nNO space available");
                    rejected_vehi=rejected_vehi+1;
                    processed=processed+1;

                }else
                {
                    printf("\nsuccessful, proceed to C");
                    sucessful_vehi=sucessful_vehi+1;
                    Car_count=Car_count+1;
                    processed=processed+1;
                }
                
                
                break; 
            case 'B':
                C_count=C_count+1;
                if (C_count>C_max)
                {
                    C_count=C_count-1;
                    printf("\nNO space available");
                    rejected_vehi=rejected_vehi+1;
                    processed=processed+1;

                }else
                {
                    printf("\nsuccessful, proceed to C");
                    sucessful_vehi=sucessful_vehi+1;
                    Bike_count=Bike_count+1;
                    processed=processed+1;
                }
                
                
                break;           
            
            default:
                break;
            }
            printf("\nremaining space in zone Cis %d",C_max-C_count);
        }
        
        
        
    }
 // END FOR 
  printf("\nTOTAL VEHICLES PROCESSED %d",processed);
  printf("\ntotal accepted vehicles %d",sucessful_vehi);
  printf("\ntotal rejected vehicles",rejected_vehi);
  printf("\ntotale cars parked %d",Car_count);
  printf("\ntotal bike parked %d",Bike_count);
  printf("\ntotal van parked %d",Van_count);
  printf("\nfinal occupancy of zone A %d",A_count);
  printf("\nfinal occupancy of zone B %d",B_count);
  printf("\nfinal occupancy of zone C %d",C_count);
  printf("\nremaining capacity of xone A %d",A_max-A_count);
  printf("\nremaining capacity of xone B %d",B_max-B_count);
  printf("\nremaining capacity of xone C %d",C_max-C_count);
    
    return 0;
} 