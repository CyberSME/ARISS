/** Votre premier programme Java */
class Cpt
	{
	public static void main (String[] args)
	   	{
   		int i;
   		System.out.println("Hello world Cpt!");
		for (i=0; i<65535; i++) 
			{
			try 
				{Thread.sleep(1000);}//sleep for 1000 ms
			catch(InterruptedException ie)
				{
				}
			try
				{
  				Thread.currentThread().sleep(1000);//sleep for 1000 ms
				System.out.println(i);
				}
			catch(InterruptedException ie)
				{
				//If this thread was intrrupted by nother thread
				}

			}
   		System.out.println("bye bye !");
   		}
	}