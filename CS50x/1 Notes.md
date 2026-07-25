# C


 Data Types   
-
  Unlike C, most modern languages don't require you to specify the data type of a variable.  
  In C, we specify the type of every variable we create the first time we use it.  
  There are a few built in data types.  

***Int***  
  used for variables that will store intergers. Always take up 4 bytes of memory (32 bits)  
  Half Negative intergers, Half positive. -2^31 to (2^31)-1

**Unsigned Int**
  is a qualifer that can be applied to certain tyeps, which doubles the positive range of variables of that type, at the cost of disallowing any negative values.  
  It is one of many possible qualifers.  

**char**  
  char data type is used for variables that will store single characters.  
  Characters always take up 1 byte of memory (8 bits). The range of value they can store thus is limited to 8 bits worth of info. -128 to -127  

**float**  
  The float is used for variables that will store real numbers.  
  These take up 4 bytes of memory (32 bits).  
  Can only be so precise  

**double**  
  these also like floats store real numbers, with double the precision, using 8 bytes of memories (64 bits).

**void**  
  a type, not data type. Functions can have a void return type, which means they don't return a real value.  
  The parameter list of a function can also be void. It simply means the function takes no parameters.  
  For now think of void more as a placeholder for "nothing". (It's more complex but more on that later.)  

**CS50 Specific**  
be sure to #include <cs50.h> atop your programs if you wish to use the bool type.  
  
  **bool:** this data type is used for variables that will store a boolean value, only capable of storing one of two values: true and false.  
  
  **string:** the string data type is used for variables that will store a series of characters, which programmers call a string. strings include words, sentences, paragraphs etc.  

**Creating variables**  
to create a variable, simply specify hte data type of the variable and give it a name.  
int number;  
char letter;  
if you wish to create multiple variables of the same type, you specify the type name once, and then list as many variables of that type as you want.  
int height, width;  
float sqrt2, sqrt3, pi;  
In general it's good practice to only declare variables when you need them.  

**Using a variable**  
After a variable has been declared, it's no longer necessary to specify the type. 
int number;  // declaration  
number = 17;  // assignment  
if you are simultaneously declaring and setting the value, consolidate into this one step (initializing).  
int number = 17;  // intitializing  

Operators
-
**Arethmetic Operators**  
In C we can add +, subtract -, multiply * and divide / numbers, as expectd.  
int x = y + 1  
x =  x * 5  // can also be written x *= 5
x++; and x--; are shorthand for incrementing or decrementing a variable by 1. 
We also have modulus operator %, giving us the remainder of when number on left is divided by number on right.  
int m = 13 % 4 // m is now 1  

**Boolean expressions**  
All evaluate to either true or false, this help to decide which branch to take in a conditional, or when to break a loop.  
Every nonzero value in C is equivalent to true and zero is false.  
Two main types of Boolean expressions: Logical and Relational operators.  

### Logical Operators  

***Logical AND (&&)***  
Is true if and only if both operands are true, otherwise false.  

***Logical OR (||)***  
is true if and only if one operand is true, otherise false.  

***Logical NOT (!)***  
inverts the value of its operand.  

### Relational Operators  
These behave as expected, and appear just as elementary arithmetic.  
less than < , less than or equal to <= , greater than >, greater than or equal to >=  
Can also check for equality (x == y) and inequality (x != y)  

Conditional Statements  
- 
Conditional expressions allow your programs to make decisions and take different forks in the road, depending on the values of variables or user input.   

 **if (boolean expression)**  
Use boolean expressions to make decisions.  
 if the boolean expresion evalues to true, all lines of code between the curly braces will execute in order from top to bottom  
 if the boolean expression evaluates to false, those lines of code will not execute.  
 if  
  {  }  
 else  
  {  }  
 now if false, all lines of code between the second set of curly braces will execute from top to bottom  
 In C, it is possible to create an if-else chain.  
 each branche is mutually exclusive as expected.ie   
if  
{   } // first branch  
if else     
  {    } // second branch  
if else     
  {  } // third branch   
 else    
  {  } //fourh branch  

**switch**  
use discrete cases to make decisions.  
C's switch() statement is a conditional statement that permits enumeration of discrete cases, instead of relying on boolean expressions.  
It's important to break; between each case, or you will "fall through" each case (unless that is a desired behaviour.   

**ternary**  
use to replace a very simple if-else to make your code look fancy.  
the ternary operator (?:) is mostly a cute trick, but it is useful for writing trivially short condtional branches. Be familiar with it, but know that you won't need to write it if you don't want to.  
int x = (expr) ? 5 : 6; // if someone boolean is true, assign value 5, otherwise assign value 0.  

Loops 
- 
Loops allow your programs to execute lines of code repeatedly, saving you from needing to copy and past or repeat lines of code.  

**Infinite loop**  
while (true) 
{ } // Lines of code will repeat endlessy top to bottom unlesss we break; or ctrl C if we kill the pogram.  

**while (boolean-expr)**  
Use when you want a loop to repeat an unkown number of tiems, and possibly not at all.  
{ } // if bool is true, lines of code inside continue to evaluate until bool becomes false.  
repeat until will keep doing it until the bool is true, the while does it until bool is false.  

**do-while**  
use when you want a loop to repeat an unkown number of times, but at least once.  
do  
{}  
while (boolean-expr);  
this loop will execute all lines of code betweeen the curly braces once, and then, if the boolean-exp evaluates to true, will go back and repeat the process until boolean-expr evaluates to false.  

**for loop**  
use when you want a loop to repeat a discrete number of times, though you may not know the number at the moment the program is compiled.  
for (int i = 0; i < 10; i++)  
{}  
For loops are used to repeat the body of a loop a specifie number of times, in this example 10.  
The process undertaken for a loop is: 
counter variable is set, if true loop executes, if false, loop does not execute, counter value is incremented and bool is checked again.  
for (start; expr; increment)  
{}  

Magic Numbers  
-  
Writing a constant in your code is often referred to as using Magic Numbers.  
C provides a preprocessor directive (also called a macro) for creating symbolic constants  
#define NAME REPLACEMENT  
At the time yoru program is compiled, #define goes through your code and replaces NAME with REPLACEMENT. 

Command Line  
-  



 




