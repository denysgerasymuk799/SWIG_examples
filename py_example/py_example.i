
/* name of module to use*/
%module py_example
%{
/* Every thing in this file is being copied in
 wrapper file. We include the C header file necessary
 to compile the interface */
#include "py_example.h"

/* variable declaration*/
double my_var;
%}

/* explicitly list functions and variables to be interfaced */
double my_var;
long long int fact(long long int n1);
int my_mod(int m, int n);

/* or if we want to interface all functions then we can simply
   include header file like this -
   %include "py_example.h"
*/
