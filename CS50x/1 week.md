# C


 Data Type   
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





