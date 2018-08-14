import java.util.Scanner;
public class Main
{
  public static void main (String[]args)
  {
    String str = "";
    String rev = "";
    Scanner sc = new Scanner (System.in);
      str = sc.nextLine ();

    for (int i = str.length () - 1; i >= 0; i--)
      {
	System.out.println (str.charAt (i));

	rev = rev + str.charAt (i);
      }
    if (rev == str)
      {
	System.out.println ("\n It is palendrom");
      }

    else
      {
	System.out.println ("No Palendrom");
      }
  }
}
