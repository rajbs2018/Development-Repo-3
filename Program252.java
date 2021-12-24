import java.util.*;

abstract class ArrayX
{
	public int Arr[];
	
	public ArrayX(int size)
	{
		Arr = new int[size];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the elements");
		for(int i = 0; i < Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("Enter data is :");
		for(int i = 0;i < Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
	}
}


class Program252
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter size of array");
		int size = sobj.nextInt();
		
		int Arr[] = new int[size];
		
	}
}