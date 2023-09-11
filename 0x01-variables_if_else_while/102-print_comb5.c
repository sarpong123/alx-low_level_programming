0x01. C - Variables, if, else, while
README.md


Project done during **Full Stack Software Engineering studies** at **ALX School**. It aims to learn about arithmetic operators, relational operators, boolean operators, comments, declaring variables and loops in **C language**.


## Technologies

* Scripts written in Bash 4.3.11(1)
	*
	* * C files are compiled using `gcc 4.8.4`
	*
	* * C files are written according to the C90 standard
	*
	* * Tested on Ubuntu 14.04 LTS
	*
	*
	* 0-positive_or_negative.c
	*
	*
	* #include <stdlib.h>
	*
	* #include <time.h>
	*
	* #include <stdio.h>
	*
	*
	*/**

	 * main - Determines if a number is positive, negative or zero.
	 *
	 *  *
	 *
	 *   * Return: Always 0 (Success)
	 *
	 *    */

	 int main(void)

{

	        int n;


		        srand(time(0));

			        n = rand() - RAND_MAX / 2;

				        if (n > 0)

						        {

								                printf("%d is positive\n", n);

										        }

					        else if (n == 0)

							        {

									                printf("%d is zero\n", n);

											        }

						        else

								        {

										                printf("%d is negative\n", n);

												        }

							        return (0);

}



1-last_digit.c


#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 *
 *  * main - Prints the last digit of a randomly generated number
 *
 *   * and whether it is greater than 5, less than 6, or 0.
 *
 *    *
 *
 *     * Return: Always 0.
 *
 *      */

int main(void)

{

	        int n;


		        srand(time(0));

			        n = rand() - RAND_MAX / 2;


				        if ((n % 10) > 5)

						        {

								                printf("Last digit of %d is %d and is greater than 5\n",

												                        n, n % 10);

										        }

					        else if ((n % 10) < 6 && (n % 10) != 0)

							        {

									                printf("Last digit of %d is %d and is less than 6 and not 0\n",

													                        n, n % 10);

											        }

						        else

								        {

										                printf("Last digit of %d is %d and is 0\n",

														                        n, n % 10);

												        }


							        return (0);


}



2-print_alphabet.c


#include <stdio.h>


/**
 *
 *  * main - Prints the alphabet.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

	        char alp[26] = "abcdefghijklmnopqrstuvwxyz";

		        int i;


			        for (i = 0; i < 26; i++)

					        {

							                putchar(alp[i]);

									        }

				        putchar('\n');

					        return (0);

}



3-print_alphabets.c


#include <stdio.h>


/**
 *
 *  * main - Prints the alphabet.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	        int i;


		        for (i = 0; i < 52; i++)

				        {

						                putchar(alp[i]);

								        }

			        putchar('\n');

				        return (0);

}



4-print_alphabt.c


#include <stdio.h>

#include <stdlib.h>

#include <string.h>


/**
 *
 *  * main - Prints the alphabet without q and e.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

	        int i;


		        for (i = 97; i < 123; i++)

				        {

						                if (i != 101 && i != 113)

									                {

												                        putchar(i);

															                }

								        }

			        putchar('\n');

				        return (0);

}



5-print_numbers.c


#include <stdio.h>


/**
 *
 *  * main - Prints numbers from 0 to 9.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

	        int i;


		        for (i = 0; i < 10; i++)

				        {

						                printf("%d", i);

								        }

			        putchar('\n');

				        return (0);

}



6-print_numberz.c


#include <stdio.h>


/**
 *
 *  * main - Prints numbers from 0 to 9.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

	        int i;


		        for (i = 48; i < 58; i++)

				        {

						                putchar(i);

								        }

			        putchar('\n');

				        return (0);

}



7-print_tebahpla.c


#include <stdio.h>


/**
 *
 *  * main - prints the lowercase alphabet in reverse,
 *
 *   * followed by a new line
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

	        char ch;


		        for (ch = 'z'; ch >= 'a'; ch--)

				        {

						                putchar(ch);

								        }

			        putchar('\n');

				        return (0);

}



8-print_base16.c


#include <stdio.h>


/**
 *
 *  * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

	        int i;


		        for (i = 48; i < 58; i++)

				        {

						                putchar(i);

								        }

			        for (i = 97; i < 103; i++)

					        {

							                putchar(i);

									        }

				        putchar('\n');

					        return (0);

}



9-print_comb.c


#include <stdio.h>


/**
 *
 *  * main - prints all possible combinations of single-digit numbers
 *
 *   * Return: Always 0 (Success)
 *
 *    */

int main(void)

{

	        int n;


		        for (n = 48; n < 58; n++)

				        {

						                putchar(n);

								                if (n != 57)

											                {

														                        putchar(',');

																	                        putchar(' ');

																				                }

										        }

			        putchar('\n');

				        return (0);

}



100-print_comb3.c


#include <stdio.h>


/**
 *
 *  * main - prints all possible different combinations of two digits
 *
 *   * Return: ALways 0 (Success)
 *
 *    */

int main(void)

{

	        int n, m;


		        for (n = 48; n <= 56; n++)

				        {

						                for (m = 49; m <= 57; m++)

									                {

												                        if (m > n)

																                        {

																				                                putchar(n);

																								                                putchar(m);

																												                                if (n != 56 || m != 57)

																																	                                {

																																						                                        putchar(',');

																																											                                        putchar(' ');

																																																                                }

																																                        }

															                }

								        }

			        putchar('\n');

				        return (0);

}



101-print_comb4.c


#include <stdio.h>


/**
 *
 *  * main - prints all possible different combinations of three digits
 *
 *   * Return: Always 0 (Success)
 *
 *    */

int main(void)

{

	        int n, m, l;


		        for (n = 48; n < 58; n++)

				        {

						                for (m = 49; m < 58; m++)

									                {

												                        for (l = 50; l < 58; l++)

																                        {

																				                                if (l > m && m > n)

																									                                {

																														                                        putchar(n);

																																			                                        putchar(m);

																																								                                        putchar(l);

																																													                                        if (n != 55 || m != 56)

																																																			                                        {

																																																									                                                putchar(',');

																																																															                                                putchar(' ');

																																																																					                                        }

																																																		                                }

																								                        }

															                }

								        }

			        putchar('\n');

				        return (0);

}



102-print_comb5.c


#include <stdio.h>


/**
 *
 *  * main - prints all possible combinations of two two-digit numbers
 *
 *   * Return: Always 0 (Success)
 *
 *    */

int main(void)

{

	        int i, j;


		        for (i = 0; i < 100; i++)

				        {

						                for (j = 0; j < 100; j++)

									                {

												                        if (i < j)

																                        {

																				                                putchar((i / 10) + 48);

																								                                putchar((i % 10) + 48);

																												                                putchar(' ');

																																                                putchar((j / 10) + 48);

																																				                                putchar((j % 10) + 48);

																																								                                if (i != 98 || j != 99)

																																													                                {

																																																		                                        putchar(',');

																																																							                                        putchar(' ');

																																																												                                }

																																												                        }


															                }

								        }

			        putchar('\n');

				        return (0);

}


