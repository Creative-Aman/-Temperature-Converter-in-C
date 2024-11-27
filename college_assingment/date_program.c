#include <stdio.h>
int main (){
    int date ,month,year;
    printf("DATE BETWEEN YEAR 1990 TO YEAR 2000\n");
    printf("Enter date : ");
    scanf("%d",&date);
    printf("Enter month : ");
    scanf("%d",&month);
    printf("Enter year : ");
    scanf("%d",&year);
    if (year>=1990 && year<=2000){
        if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            if (date>=1 && date<=31){
                printf("%ddate%dmonth%dyear lies between 1990 & 2000",date,month,year);
            }
            else {
                printf("Invalid input .");
            }
        }
        else if (month==4 || month==6 || month==9 || month==11){
             if (date>=1 && date<=30){
                printf("%d/%d/%d lies between 1990 & 2000",date,month,year);
            }
            else {
                printf("Invalid input .");
            }
        }
        else if (month==2){
            if (year%4==0)
            {
                if (date>=1 && date<=29){
                    printf("%d/%d/%d is a leap year & also lies between 1990 & 2000",date,month,year);  
                }
                else {
                    printf("Invalid input .");    
                }
            }
            else if (date>=1 && date<=28){
                printf("%d/%d/%d is a leap year & also lies between 1990 & 2000",date,month,year);  
            }
            else {
                printf("Invalid input .");
            }
        }
        else {
            printf("Invalid input .");
        }
    }
    else {
         printf("Invalid input .");
    }
    return 0;
}   

// DATE BETWEEN YEAR 1990 TO YEAR 2000
// Enter date : 24
// Enter month : 2
// Enter year : 1995
// 24/2/1995 is a leap year & also lies between 1990 & 2000