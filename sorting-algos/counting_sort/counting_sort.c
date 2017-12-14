#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    int c[n],i,j,g,h;
    scanf("%d",&c[0]);
    g=c[0];
    h=c[0];
    for(i=1;i<n;i++){
        scanf("%d",&c[i]);
        if(g<c[i])g=c[i];
        if(h>c[i])h=c[i];
    }
    for(i=h;i<=g;i++){
        for(j=0;j<n;j++){
            if(i==c[j])printf("%d ",c[j]);
        }
    }
    return 0;
}

