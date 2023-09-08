#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int i, max = 0, min = 10000;
   int array[1000];



   // Initierer trekkingen av randomtall med nåværende tid som "seed"
   srand(time(NULL));

   for (i = 0; i < 1000; i++)
   {
      // Trekker et tilfeldig tall r, 0 <= r < 100
      array[i] = rand() % 100001;

      if (array[i] > max){
         max = array[i];
      }
      if (array[i] < min){
         min = array[i];
      }



   }
    printf("Det største tall er %d\n", max);
    printf("Det mindre tall er %d\n", min );

    return 0;

}

