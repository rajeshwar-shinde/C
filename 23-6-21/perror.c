#include <stdio.h>

int main ()
{
  FILE * pFile;
  pFile=fopen ("unexist.ent","rb");
  if (pFile==NULL)
    perror ("The following error occurred");
  else
    fclose (pFile);
  return 0;
}

#ifdef output
./a.out
The following error occurred: No such file or directory
#endif
