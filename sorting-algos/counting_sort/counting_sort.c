#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,i,j,k;
 scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++){
        for(j=0;j<n;j++){
            if(i==a[j]){
                printf("%d ",i);
            }
        }
    }
    
    return 0;
}
