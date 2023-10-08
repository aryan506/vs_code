#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    FILE *cfPtr = fopen("C:\\Users\\David O'Dea\\Desktop\\Test\\MaintenanceSchedule.txt","r");
    int line = 0;

    char input[255];
    while (fgets(input, 255, cfPtr))
    {
    printf("%s", input);
    }
   int activities = sizeof(start)/sizeof(start[0]);
   int i, j;
   printf ("Following activities are selected \t");
   i = 0;
   printf("%d\t", i);
   for (j = 1; j < activities; j++){
      if (start[j] >= finish[i]){
         printf ("%d ", j);
         i = j;
      }
   }
   fclose(cfPtr);
   return 0;
}