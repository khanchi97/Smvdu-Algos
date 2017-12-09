import java.util.Scanner;


public class CountingSort 

{

    private static final int MAX_RANGE = 1000000;

   

    public static void sort( int[] arr )

    {

        int N = arr.length;

        if (N == 0)

            return;


        int max = arr[0], min = arr[0];

        for (int i = 1; i < N; i++)

        {

            if (arr[i] > max)

                max = arr[i];

            if (arr[i] < min)

                min = arr[i];

        }

        int range = max - min + 1;

 

       

        if (range > MAX_RANGE)

        {

            System.out.println("\nError : Range too large");

            return;

        }

 

        int[] count = new int[range];

       
        for (int i = 0; i < N; i++)

            count[arr[i] - min]++;

              for (int i = 1; i < range; i++)

            count[i] += count[i - 1];

              int j = 0;

        for (int i = 0; i < range; i++)

            while (j < count[i])

                arr[j++] = i + min;

    }    

   

    public static void main(String[] args) 

    {

        Scanner scan = new Scanner( System.in );        

        System.out.println("Counting Sort Test\n");

        int n, i;

       
        System.out.println("Enter number of integer elements");

        n = scan.nextInt();

        
        int arr[] = new int[ n ];

              System.out.println("\nEnter "+ n +" integer elements");

        for (i = 0; i < n; i++)

            arr[i] = scan.nextInt();

               sort(arr);

      
        System.out.println("\nElements after sorting ");        

        for (i = 0; i < n; i++)

            System.out.print(arr[i]+" ");            

        System.out.println();                     

    }    

}
