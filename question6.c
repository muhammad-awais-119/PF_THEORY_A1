#include<stdio.h>
#include<stdbool.h>
#include <string.h>
int main(){
    char V_type,station,member,diable;
    float current_level,expec_time,current_t,Req_CHR_lvl,Req_CHR,CHRG_price,Park_CHRG,total;
    char priority[30]; 
    bool peak;
    current_level=expec_time=current_t=Req_CHR_lvl=Req_CHR=CHRG_price=Park_CHRG=total=0.0;


    printf("enter vehicle type");
    printf("\nE_electric,H_hybrid");
    scanf(" %c",&V_type);
    printf("\nenter current battery level");
    scanf(" %f",&current_level);
    printf("\nenter expected parking time in hrs");
    scanf(" %f",&expec_time);
    printf("\ndo you have parking member ship? [Y/N]");
    scanf(" %c",&member);
    printf("\nhandicap status [Y/N]");
    scanf(" %c",&diable);
    printf("\nis charging station avaiLABLE RIGHT NOW?");
    scanf(" %c",&station);
    printf("\n]n current time in 24hrs format");
    scanf(" %f",&current_t);
    printf("\nenter required charging level");
    scanf(" %f",&Req_CHR_lvl);

    if (station=='N')
    {
        if (V_type=='H')
        {
            printf("\ncharging unavailable");
            printf("\nparking only");
        }
        else
        {
            printf("\nno charging slot available");
        }
        
    }
    else
    {
        if ((V_type=='H' && current_level<40.0)||V_type=='E')
        {
            if (Req_CHR_lvl<=current_level)
            {
                printf("\nno charging required");
            }
            else
            {
                Req_CHR=Req_CHR_lvl-current_level;
                if (current_level<=15.0 && Req_CHR_lvl>=80)
                {
                    strcpy(priority,"emergency_charging_priority");
                }
                else if ((diable=='Y' || member=='Y') && current_level<=30.0)
                {
                   strcpy(priority,"Charging");
                }
                else
                {
                    strcpy(priority,"normal_charging");
                }
                //
                if (current_level<17.0 || current_level>22.0)
                {
                    peak=false;
                }
                else
                {
                    peak=true;
                }
                //
                if (peak==true)
                {
                    CHRG_price=50.0*Req_CHR*0.9;
                }
                else
                {
                    if (member=='Y' && strcmp(priority,"emergency_charging_priority")==0)
                    {
                        CHRG_price=35.0*Req_CHR;
                    }
                    else
                    {
                        CHRG_price=35.0*Req_CHR*0.8;
                    }
                    //
                    if (member=='N')
                    {
                        CHRG_price=35.0*Req_CHR;
                    }
                    //
                }
                //
                if (expec_time==2)
                {
                    Park_CHRG=200;
                }
                else if (expec_time>2.0 && expec_time<=5.0)
                {
                    Park_CHRG=600;
                }
                else
                {
                    Park_CHRG=900;
                }
                //
                if (diable=='Y')
                {
                    Park_CHRG=0;
                }
                else if (member=='Y')
                {
                    Park_CHRG=Park_CHRG*0.8;
                }
                //
                total=CHRG_price+Park_CHRG;
            }
        }
        printf("\nvehicle does not qualify for EV charging");
    }
    //
    printf("\nyour vehicle is %c",V_type);
    printf("\ncurrent batter level is %f",current_level);
    printf("required charging level is %f",Req_CHR);
    printf("\npeak status %d",peak);
    printf("\nfinal cost %f",total);
    
    


    return 0;
}