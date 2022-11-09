/* 	
Question 1: The answer is d. This works in line 13 of this code.
Question 2: The answer is c. This works in line 12 of this code.
Question 3: The answer is c. This works in line 18 of this code.
*/


/*Example code*/

#include <stdio.h>
void main(){
int num;
int *ptr; /*answer to question 1*/

num = 20;
ptr = &num; /*answer to question 2*/

printf("the integer value stored at the address of '*x' = %d\n", *ptr); /*answer to question 3 */
printf("the address of '*x', which points to 'num' = %p \n", ptr);

}
