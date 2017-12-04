/*Reads file cars.txt, store the data in an array of car structures, and sort the cars by *average mpg. Then, Output the sorted cars, including the average mpg in a text file called *sorted_cars.txt.
*/

#include <stdio.h>
#define NAME_LEN 30

struct car {
    char make[NAME_LEN + 1];
    char model[NAME_LEN + 1];
    int year;
    int cmpg;
    int hmpg;
    int avgmpg;
} temp;

void selection_sort(struct car cars[], int n);

int main()
{
    int i;

    struct car cars[8];

    FILE* pFile;
    pFile = fopen("cars.txt", "r");

    if(pFile == NULL)
    {
     	printf("File error\n");
        return 1;
    }

    for(i = 0; i < 8; i++)
      {
       	if(!feof(pFile) && !ferror(pFile))
          {
          fscanf(pFile, "%s %s %d %d %d", cars[i].make, cars[i].model, &cars[i].year, &cars[i].cmpg, &cars[i].hmpg);
          cars[i].avgmpg = (cars[i].cmpg + cars[i].hmpg) / 2;
          }
      }

      selection_sort(cars,8);

      FILE* outFile;
      outFile = fopen("sorted_cars.txt", "w");

      fprintf(outFile, "Make        Model        Year        city mpg        highway mpg        average mpg\n");

      for ( i = 0; i < 8; i++)
        {
          fprintf(outFile, "%s %s %d %d    %d    %d\n", cars[i].make, cars[i].model, cars[i].year, cars[i].cmpg, cars[i].hmpg, cars[i].avgmpg);

          printf("%s %s %d %d %d %d\n", cars[i].make, cars[i].model, cars[i].year, cars[i].cmpg, cars[i].hmpg, cars[i].avgmpg);
        }

      fclose(pFile);
      fclose(outFile);
      return 0;
}

void selection_sort(struct car cars[], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
      for (j = i +1; j < n; j++)
        {
          if(cars[i].avgmpg > cars[j].avgmpg)
            {
              temp = cars[i];
              cars[i] = cars[j];
              cars[j]= temp;
            }
       }
        }
    }

    return;
}



