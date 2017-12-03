import java.util.*;
public class insertion_sort
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();                       // input the size of array
        int a[]=new int[n+1];                     //  create an array of one size greater than the input size
        a[0]=0;
        for(int i=1;i<=n;i++)                     // mind the for loop here
        {
            a[i]=sc.nextInt();                    // enter the array elements
        }
        for(int j=1;j<=n;j++)
        {
            int t=a[j];
            int y=j-1;
            while(t<a[y]&&y>0)                     // loop to swap elements
            {
                a[y+1]=a[y];                   
                y=y-1;
            }
            a[y+1]=t;
        }
        for(int j=1;j<=n;j++)
        {
            System.out.println(a[j]);
        }
    }
}
