/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/
#include <stdio.h>

int main() {

  float dis1;
  float dis2;
  float amo;

  printf("Enter the Distance:");
  scanf("%f", &dis1);

  if (dis1 <= 30) {

    amo = 50 * dis1;
  } else {

    dis2 = dis1 - 30;
    amo = 40 * dis2 + 1500;
  }

  printf("Amount:%.2f", amo);

  return 0;
}