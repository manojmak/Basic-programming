#include <stdio.h>
#include<conio.h>

int main()
{     
    int year=2020;
    if(year%4==0){
        
        if(year%100==0)
        {
            if(year%400==0)
            
                printf("%d it is leaf year" ,year );
            
            else
                
                printf("%d it is non leaf year",year);
        }
        else
            printf("%d it is leaf year",year);
    }
    else
        printf("%d it is non leaf year",year);
    
    return 0;
}
