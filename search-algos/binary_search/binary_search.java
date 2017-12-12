/*Binary Search is one of the efficient search techniques with run-time complexity O(log n). 
  It divides the sorted array entered by user into two parts and checks fo the number using two parameters i.e. the indexes of 
  beginning and end of the range in which the element to be searched is present.
  
  P.S.: For extra info,We can also use the method Arrays.binarySearch(alphabets, 'a') by importing java.util.Arrays where alphabets in an array
        of alphabets and the character whose position is to be searched is 'a'.But, the code below explains to us the functioning of
        this beautiful search technique.*/
  
  BINARY SEARCH IN JAVA:-
-----------------------------------------------------------------------------------------------------------------------------
import java.util.Scanner;
 
class BinarySearch 
{
  public static void main(String args[])
  {
    int c, first, last, middle, n, search, array[];
 
    Scanner in = new Scanner(System.in);
    System.out.println("Enter number of elements");
    n = in.nextInt(); 
    array = new int[n];
 
    System.out.println("Enter " + n + " integers in increasing order");
 
 
    for (c = 0; c < n; c++)
      array[c] = in.nextInt();            //taking input from user.
 
    System.out.println("Enter value to find");
    search = in.nextInt();                //taking input of value to be searched.
 
    first  = 0;
    last   = n - 1;
    middle = (first + last)/2;
 
    while( first <= last )
    {
      if ( array[middle] < search )
        first = middle + 1;    
      else if ( array[middle] == search ) 
      {
        System.out.println(search + " found at index " + (middle + 1) + ".");
        break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
    }
    if ( first > last )
      System.out.println(search + " is not present in the list.\n");
  }
  }
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
  8 found at index 4.
