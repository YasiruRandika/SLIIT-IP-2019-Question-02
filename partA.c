#include <stdio.h>
/*
SLIIT 2019 IP Question 02 Part A
Discussion for IP Kuppiya (Return{C} Workshop - MS CLUB OF SLIIT)
W.G. YASIRU RANDIKA
*/

int main(void) {
  //Part A
  //Integer array of size 10 for fibonaci series

  // (a)  Declare the Integer array of size 10
  int fib[10];

  // (b) Initialize the first two values as 0 and 1
  fib[0] = 0;
  fib[1] = 1;

  /*We can Initialize the array while declaring it
  Then the values for other indecies will automatically 0

  Try this out

  int fib[10] = {0, 1};*/

  /* (c) Fill the other elements using repition
  In here we can use
    1. For Loop
    2. While Loop
    3. Do While Loop
    
  You can select the repition structure as your preference
  
  1. Using For Loop
      * We want to fill the array from index - 2 (fib[2]).
      * fib[0] and fib[1] has already filled out
      * So, we start the for loop from i = 2 and need to      continue until i = 9
  */

  for(int i = 2; i < 10; i++) {
    /*In fib sereies from the 3 rd element, the value is taken from the summation of previous two values

    Ex : fib[2] = fib[1] + fib[0]
    */
    fib[i] = fib[i -1] + fib[i - 2];
  }

  /*
  2. Using While Loop

  int i = 2;

  while(i < 10) {
    fib[i] = fib[i -1] + fib[i - 2];

    //Increment the i value
    i++;
  }

  3. Using Do While Loop

  int i = 2;

  do {
    fib[i] = fib[i -1] + fib[i - 2];

    //Increment the i value
    i++;
  } while(i < 10);
  */


  /* (d) Disply the output

  In here also we can you any repition as your preference
  However, in here we are going to display the output using For Loop

  We want to display fib[0] to fib[0]
  So, the start value of the for loop will be 0
  */

  for(int j = 0; j < 10; j++) {
    printf("%d ", fib[j]);
  }
  return 0;
}
