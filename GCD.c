/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n2,i,gcd;
    scanf("%d %d",&n1,&n2);
    
        for(i=1;i<=n1&&i<=n2;i++)
            {
                
                if(n1%i==0 && n2%i==0)
                gcd=i;
                            }
        printf("%d %d The GCD is %d",n1,n2,gcd);
    return 0;
}
