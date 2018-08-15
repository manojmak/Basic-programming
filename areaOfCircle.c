#include <stdio.h>
#include<conio.h>

int main()
{     
    int dia; 
    float area,val;
    printf("Enter the Diameter");
    scanf("%d",&dia);
    val = (dia/2);
    
    printf("Area of the circle");
     
     area = 3.14 * val * val;
    
    printf("\n %.2f",area);
    
    
    
    return 0;
}
