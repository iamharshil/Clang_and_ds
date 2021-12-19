// this is comment

#include <stdio.h>

int main ()
{
    printf("Hello world\n");
    return 0;
}


// pre-processor : replace text starting with #  to actual content.
// you write soure code then after pre-processor it is Extended source code then compiler works

// stdio.h is standard input output file with .h (header).
// header file consist of prototype or declaration of the functions that we need.
// stdio.h has functions like printf and scanf.

// functions and variables: code consist of these two elements. c consists of group of statement. which intended to solve a perticular problem.
// variables : entities used to store value which are used during computation.
// purpose of main is print hello world.
// may have serval functions inside program but entry point of acutal computation is main function and it is starting point of program.

/* basic syntax:
return_type name_of_function(parameter_type name_of_parameter, parameter_type name_of_parameter, ...)
{
    set of statements;
}

 int main: function after compliting all statement return int  and return 0; = return 0 if statement complited successfully and exit program.
 use good name of function for radability and main function is predefined we cannot change it.
 parameter in brackets are input to your functions.
 main doesn't have patameters. if you want add argc and argv whoes value has been provided at run time using command line.
 we have function printf with parameter called Hello world
 we didn't put {} after printf because this function is predefined in already somewhare in c standard library. which is library containing definitions of many fucntions like printf.
 advantage of libraby is we don't have to write down the code or function again and again. we can call them when needed.
 using printf we can print the output hello world in console window.
 build ask compiler to build machine code for the source code and run will run code. if you change source code then you need to build it again.

 header file -> declaration of functions. or prototypes.
 c standard librabry -> actual definitions of functions.

 why we ned different files? -> header files consist of declarations of the functions which means which functions we will use in your program. pre-processor combine that declaration with actual source code and preduce extended source code.
 C std libraby consist of actual definitions of the functions.

 there is program which is linker which map down prototypes mentioned to the pre-processor to the actual code writen in the standard library. it simply maps and does not copy paste like pre-processor.
 this seprate process of linking make computation of program fast
 it would he hacktic of pre-processor adding all the definiton of to the source code. and it will increas size of code also. cuz we are adding acutal definition not a prototypes and it will speed down compilation.
 thats why maintainig both seprately is essential.
*/


/*
Tasks:
    Comment out inclde<>
    remove the semicolon
    remove int return from main
    try other int after return
    instead of 0 return try some character with single quote.
    remove semicolor after return
*/