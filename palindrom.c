/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
    int  rem=0,rev=0,n,m,num;
    
        n=atoi(argv[1]);
        m=n;
    while(n!=0){
        
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    
    if(m==rev)
    
        printf("pali");
    else
    printf("not pali");
    
    
    
    

    return 0;
}
