/*** INTRODUCTION
 *
 * In this file things are going to feel pretty familiar still, but
 * will diverge a tiny bit as we dive into functions
 */

#include "2-functions.h"
#include <stdio.h>

/*
 * Function prototype for the to_lowercase function
 *
 * Let's the compiler know about a function before it's been written
 *      so that other functions can call them regardless of the order
 *      that you implement them in 
 *  
 * The to_uppercase function prototype is in the 2-functions.h file
 */
char to_lowercase(char c);

void main(int argc, char** argv)
{
    char lowercase_s = 's';
    char uppercase_s = to_uppercase(lowercase_s);

    char uppercase_t = 'T';
    char lowercase_t = to_lowercase(uppercase_t);

    printf("to_uppercase(%c) = %c\n", lowercase_s, uppercase_s);
    printf("to_lowercase(%c) = %c\n", uppercase_t, lowercase_t);

    /*
     * This was an example of functions, but where do methods fit
     *      into the C language?
     *
     * Short answer: They don't
     *
     * Long answer: C does not have the notion of classes
     */
}

// Implementation of the to_lowercase function
char to_lowercase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + ('a' - 'A');
    }
    return c;
}

/*** SUMMARY
 *
 * Functions are similar to methods.
 * They encapsulate reusable behaviour/functionality
 *
 * Functions in C need to be prototyped/declared before they can
 *      be called by other functions. This is usually done in a
 *      header file (.h extension), but can also be done at the
 *      top of C source file (.c extension) or at the same time
 *      as you are implementing the function
 *
 * There are no methods in C because there are no classes.
 *      It's all functions
 */
