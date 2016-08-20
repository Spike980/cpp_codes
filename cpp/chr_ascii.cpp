#include <stdio.h>
#include <stdlib.h>

int main ()
{
      int i = 'a';
        char buffer [33];
          itoa(i,buffer,2);
            printf ("binary: %s\n",buffer);
              return 0;
}
