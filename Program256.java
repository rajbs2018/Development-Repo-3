import java.util.*;

class Program256
{
	public static void main(String arr[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array");
		int size = sobj.nextInt();
		
		int Arr[] = new int[size];
		
		System.out.println("Enter the elements");
		for(int i = 0; i< Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		
		Searching obj = new Searching();
		
		obj.Change(Arr);
		
		System.out.println("Data After Change call");
			
		for(int i = 0; i< Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}			
 	}
}


class Searching
{
	public void Change(int Arr[])
	{
		for(int i = 0; i< Arr.length ; i++)
		{
			Arr[i]++;
		}
	}
}


