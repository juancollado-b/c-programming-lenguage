//
// Created by juancollado on 03/12/24.
//
#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, 40, ..., 300 */

int main() {
  /* Declaration of variables */
  int fahr, celsius;
  int lower, upper, step;


  /* Assignment statements */
  lower = 0; // Lower limit of temperature table
  upper = 300;  // Upper limit of temperature table
  step = 20; // step size

  fahr = lower;


  /* Be careful with integer division
   * If the statement is declared as 5 / 9 * (fahr - 32)
   * the integer division of 5/9 is truncated to 0
   */

  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9 ;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}

/*  ---- printf ----
 * %d takes int arguments like fahr and celsius in this case
 * \t just made a tab space
 */