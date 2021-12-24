import java.util.*;

class Program262
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
		
		
		Sorting obj = new Sorting();
		
		obj.InsertionSort(Arr);
		
		System.out.println("Data After Sorting");
			
		for(int i = 0; i< Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}			
 	}
}


class Sorting
{
	public void InsertionSort(int Arr[])
	{
		int i = 0, j = 0, key = 0;
		int size = Arr.length;
		
		for(i = 1; i < size ; i++)
		{
			key = Arr[i];
			for(j = i-1; (j>=0)&&(Arr[j] > key);j--)
			{
				Arr[j+1] = Arr[j];
			}
			Arr[j+1] = key;
		}
	}
		
	
}


