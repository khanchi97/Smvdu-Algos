
#include<stdio.h>
#include<stdlib.h>


//This function will return position if the element is found
//or -1 if it is not found
//O(n)
int l_search(int *array,int length,int data ){
    int i;
    for(i = 0 ; i < length ; i++){
        if(array[i] == data)
            //value found
            return i;
    }
    //value not found
    return -1;
}

int main(){

    int numOfElements,*array,value,pos;
    printf("Enter the length of an Array : ");  
    scanf("%d",&numOfElements);

    //dynamic memory allocation                                   
    array = (int *)malloc(sizeof(int)*numOfElements); 

    printf("Enter the %d Values : ",numOfElements);
    
    //reading the numbers
    for(int i = 0 ; i < numOfElements ; i++){
        scanf("%d",&array[i]);                                    
    } 

    printf("Enter the value to be searched : ");
    scanf("%d",&value);                                                  

    pos = l_search(array , numOfElements , value); 

    if(pos == -1)
        printf("%d not found\n", value);                     
    else
        printf("%d found at location %d\n",value,pos+1);          
    return 0; 
}

