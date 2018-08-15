/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		
		double base,height,area;
		
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the width of the Triangle:");
          base = scanner.nextDouble();
          
        System.out.println("Enter the height of the Triangle:");
          height = scanner.nextDouble();  
          
          area=(base*height)/2;
          System.out.println("Enter the height of the Triangle:" + area);
          
	}
}
