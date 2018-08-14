class print
{

  public void Printstar (int n)
  {
    int i, j;

    for (i = 0; i <= n; i++)
      {

	for (j = 0; j < i; j++)
	  {
	    System.out.print ("* ");
	  }

	System.out.println ();

      }
  }
}



public class Main
{
  public static void main (String[]args)
  {

    print p1 = new print ();
      p1.Printstar (5);

  }
}
