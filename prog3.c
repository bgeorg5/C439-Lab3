/* 	
Question 1: The answer is B. This works in line 22 of this code.
Question 2: The answer is A. This works in line 24 of this code.
Question 3: The answer is D. This works in line 12 of this code.
Question 4: The answer is B. This works in line 20 of this code.
*/

/*Example code*/

#include <stdio.h> 

struct b	/*answer to question 3*/
{
	int var1;
	int var2;
};

void main(){

struct b ex, *ex_ptr; /*answer to question 4*/
ex_ptr = &ex;

ex.var1 = 10; /*answer to question 1*/

ex_ptr->var2 = 5; /*answer to question 2*/

printf("var1 value = %d \n", ex.var1);
printf("var2 value = %d \n", ex.var2);

}
