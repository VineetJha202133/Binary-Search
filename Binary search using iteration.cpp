#include<stdio.h>

#include<stdlib.h>

#define size 10



int binsearch(int[], int, int, int);



int main() {

   int num, i, ans, position;

   int start, end, elem[size];



   printf("\nEnter the number of elements :");

   scanf("%d", &num);



   printf("\nEnter the elements of list :");

   for (i = 0; i < num; i++) {

      scanf("%d", &elem[i]);

   }



   start = 0;

   end = num - 1;



   printf("\nEnter element to be searched : ");

   scanf("%d", &ans);



   position = binsearch(elem, ans, start, end);



   if (position != -1) {

      printf("\nPosition of number is %d", (position + 1));

   } else
     
     printf("\n The position is not available as number is not in list");
  
  return (0);
}

int binsearch(int el[], int x, int start, int end) {

   int mid;



   if (start > end)

      return -1;



   mid = (start + end) / 2;



   if (x == el[mid]) {

      return (mid);

   } else if (x < el[mid]) {

      binsearch(el, x, start, mid - 1);

   } else {

      binsearch(el, x, mid + 1, end);

   }

}
