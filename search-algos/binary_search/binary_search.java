/*Binary Search is one of the efficient search techniques with run-time complexity O(log n). 
  It divides the sorted array entered by user into two parts and checks fo the number using two parameters i.e. the indexes of 
  beginning and end of the range in which the element to be searched is present.
  
  P.S.: For extra info,We can also use the method Arrays.binarySearch(alphabets, 'a') by importing java.util.Arrays where alphabets in an array
        of alphabets and the character whose position is to be searched is 'a'.But, the code below explains to us the functioning of
        this beautiful search technique.*/
  
  BINARY SEARCH IN JAVA:-
-----------------------------------------------------------------------------------------------------------------------------
import java.util.*;
class binary_search 
{
  public static void main(String args[])
  {
    int n,c,mid,beg,end,value,i,position;
    Scanner in = new Scanner(System.in);
    System.out.println("Enter number of elements");
    n = in.nextInt();                       //inputting the length of array
    int numbers[] = new int[n];               //declaring array of n numbers
    System.out.println("Enter "+n+" integers in increasing order");
    for (i = 0; i < n; i++)
      numbers[i] = in.nextInt();            //taking input from user of n numbers in increasing order.
    System.out.println("Enter value to find");
    value = in.nextInt();                //taking input of value whose position to be searched.
    beg  = 0;                             //beg=beginning
    end   = n - 1;                        //end=ending of array
    mid = (beg + end)/2;                  /*mid=middle element of array.if end=7 beg+end=7,so mid=7/2=4.5 but since
                                              mid is int type it will be 4.*/
    while(beg<=end)
    {
      if ( numbers[mid] <value)
        beg = mid + 1;    
      else if (numbers[mid]==value) 
      {
        System.out.println(value+" found at position " +(mid+1));
        break;
      }
      else
         end=mid-1;
      mid= (beg+end)/2;
     }//while loop closes
    if (beg>end)                            //default case if not found
      System.out.println("invalid term");
  }//method closes
  }//class closes
  ---------------------------------------------------------------------------------------------------------------------------
  Exemplary Output:
  
  Enter number of elements
  7
  Enter 7 integers in increasing order
  2
  3
  5
  7
  8
  11
  15
  Enter value to find
  8
  
  FINAL OUTPUT:
  8 found at position 5.
