#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i, *ptr, sum = 1;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));

    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        *(ptr+i)+=*ptr;
    }
    
    for(i = 0; i < n; ++i)sum*=*(ptr+i);
      printf("%d", sum);
    
    
    free(ptr);
    return 0;
}

