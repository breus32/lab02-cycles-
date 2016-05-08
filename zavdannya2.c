#include <stdio.h>
 
int main() 
{
    int n, i;
    
    printf("Vvedite 4islo: ");
    scanf("%d", &n);
    
    while (n != 0){
    	n=n/10;
	i++;
    }
    
    printf("\nKoli4estvo cifr v 4isle = %d", i);
    
    return 0;
}
