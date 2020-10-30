#include <stdio.h>
/*
SLIIT 2019 IP Question 02 Part 2
Discussion for IP Kuppiya (Return{C} Workshop - MS CLUB OF SLIIT)
W.G. YASIRU RANDIKA
*/

int main(void) {
  /*A 2D array is used to store the details of the rating of 3 movies given by 4 reviewers

  - According to the given diagram we can find 3 rows and 4   columns 
  - Movies are represent using rows (size 3)
  - Reviewers are represt using columns (size 4)
  - Therefore our 2D array can be taken as ratings[3][4]

  */

  // (a) Declare the 2d array
  int ratings[3][4];

  // (b) Take the user inputs for the 2d array
  /* When we consider about taking user inputs, there is a repition. We are going to use For Loop inside another For Loop for taking user inputs in 2D array
  
  - The outer for loop represt the rows
  - Inner for loop represent the columns

  - Outer for loop has to repeat 3 times (i = 0 to i = 2)
  - Inner for loop has to repeat 4 times at 3 times (j = 0 to j = 3)

  */

  for(int i = 0; i < 3; i++) {
    //For the better understand we'll print the Film Number
    //Film Number will be i + 1
    printf("\nFilm %d\n", i + 1);

    for(int j = 0; j < 4; j++) {
      //For the better understand we'll print the Reviewer's Number
      //Reviewer's Number will be j + 1
      printf("\tReviewer %d Rating - ", j + 1);

      //Take the user input
      scanf("%d", &ratings[i][j]);
    }
  }


  // (c) Display the array in tabular format
  printf("\n\n------ Film Review Table --------\n");

  /* In here also we'll use nested for loop as we were used to take inputs for the table. This will also in the same format but, this will display the outputs */

   for(int i = 0; i < 3; i++) {
     //Go to a new line when start a row
     printf("\n");
    for(int j = 0; j < 4; j++) {
      //Display the column values with tab space
      printf("%d \t", ratings[i][j]);
    }
  }

  printf("\n\n");


  // (d) For each movie display the movie number and the average rating.

  /* There are several methods of doing this one. However, we'll use nested For Loop to access the 2d array values and store them in an arrray as we are discussing arrays in this section
  
  Storing the values in an array will also help to get the answer for next question
  
  The for loop will be in the same way like the questions discussed above*/

  // We have to declare average array which is size 3 as our number of films is 3
  double averageArray[3];

  for(int i = 0; i < 3; i++) {
    //At the beging of each row total will be 0
    double total = 0.0;

    for(int j = 0; j < 4; j++) {
      //Add the column value to total value
      total = total + ratings[i][j];
    }

    //Get the average
    double average = total / 4;

    averageArray[i] = average;

    //Print the value with film number
    printf("\nFilm %d Average Rating : %.2f", (i + 1), average);
  }

  
  // (e) Find and display the movie which received highest average rating.
  
  /* In here also we are going to use a for loop for finding the highest rating
  
  - First we take the highest values as zero and the compare it with the values in averageArray
  
  - Or we can initially equal the highest value to first element in averageArray and then compare with the others */

  //initially we'll take higest value as 0
  double highest = 0.0; 

  // We have to access the values of averageArray which is size 3
  // So, the for loop starts from 0 and goes to 2
  for(int i = 0; i < 3; i++) {
    //Check whether the particular element is larger than the current highest values
    if (averageArray[i] > highest) {
      //If the condition is true highest value should be the value of that element
      highest = averageArray[i];
    }
  }

  //Print the highest average value
  printf("\n\nHighest average values : %.2f", highest);


  /*Without using for loops again and again we can do the task in (c) and (d) with the same nested for loop as follows. Try this out


  // We have to declare average array which is size 3 as our number of films is 3
  double averageArray[3];

   //initially we'll take higest value as 0
  double highest = 0.0; 

  for(int i = 0; i < 3; i++) {
    //At the beging of each row total will be 0
    double total = 0.0;

     //Go to a new line when start a row
     printf("\n");

    for(int j = 0; j < 4; j++) {
      //Display the column values with tab space
      printf("%d \t", ratings[i][j]);

      //Add the column value to total value
      total = total + ratings[i][j];
    }

    //Get the average
    double average = total / 4;

    averageArray[i] = average;

    //Check whether the particular element is larger than the current highest values
    if (averageArray[i] > highest) {
      //If the condition is true highest value should be the value of that element
      highest = averageArray[i];
    }
  }
  
  for(int i = 0; i < 3; i++ ){
     //Print the value with film number
    printf("\nFilm %d Average Rating : %.2f", (i + 1), average);
  }
  

  //Print the highest average value
  printf("\n\nHighest average values : %.2f", highest);

  */
  
  return 0;
}
