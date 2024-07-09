/*
    Objective

    In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements grouped together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

    A sample syntax for a function is

        return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
            ...
            ...
            ...
            [if return_type is non void]
                return something of type `return_type`;
        }
    For example, a function to read four variables and return the sum of them can be written as

        int sum_of_four(int a, int b, int c, int d) {
            int sum = 0;
            sum += a;
            sum += b;
            sum += c;
            sum += d;
            return sum;
        }
    += : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.

    a += b is equivalent to a = a + b;
    Task

    Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

    Note

    There is not built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

    Input Format

    Input will contain four integers - a, b, c, d, one on each line.

    Output Format

    Print the greatest of the four integers.
    Note: I/O will be automatically handled.

    Sample Input

    3
    4
    6
    5
    Sample Output

    6
*/

/*
    Write a C program to build a calculator with function where it will contain addition,
    subtraction, multiplication, division, modulus.
*/

/*
    When a parameter is passed to the function, it is called an argument.
    So, when we declare a function() with Return_type in this moment we pass the parameters
    in the function. And, when we want to print the operations of those parameters
    we usually pass the arguments in the function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int additionOfTwoNumbers(int numberOne, int numberTwo) // Return_type function_name(parameter_1, parameter_2){}
{
    return numberOne + numberTwo;
}

int subtractionOfTwoNumbers(int numberOne, int numberTwo)
{
    return numberOne - numberTwo;
}

int multiplicationOfTwoNumbers(int numberOne, int numberTwo)
{
    return numberOne * numberTwo;
}

int divisionOfTwoNumbers(int numberOne, int numberTwo)
{
    return numberOne / numberTwo;
}

int modulusOfTwoNumbers(int numberOne, int numberTwo)
{
    return numberOne % numberTwo;
}

int main()
{
    int numberOne, numberTwo;
    printf("Enter two numbers : ");
    scanf("%d %d", &numberOne, &numberTwo);

    printf("\nThe sum of %d & %d = %d\n", numberOne, numberTwo, additionOfTwoNumbers(numberOne, numberTwo)); // function_name(argument_1, argument_2)
    printf("The sub of %d & %d = %d\n", numberOne, numberTwo, subtractionOfTwoNumbers(numberOne, numberTwo));
    printf("The multiplication of %d & %d = %d\n", numberOne, numberTwo, multiplicationOfTwoNumbers(numberOne, numberTwo));
    printf("The division of %d & %d = %d\n", numberOne, numberTwo, divisionOfTwoNumbers(numberOne, numberTwo));
    printf("The modulus of %d & %d = %d\n", numberOne, numberTwo, modulusOfTwoNumbers(numberOne, numberTwo));

    getch();
}
