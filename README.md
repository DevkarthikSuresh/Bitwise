
# Bitwise Operators
Experiment_4

## AIM - 
To perform bitwise operations and set reset

## Software Used
VS Code

## Theory
### Expriment 4(a)
Bitwise operators are used to perform operations on the binary representations of integers. They operate at the bit level and are fundamental for tasks that require efficient data manipulation, such as low-level programming, cryptography, and performance optimization. Bitwise operations are faster than arithmetic operations and can be used to implement various algorithms and data structures.

### Types of Bitwise Operators

Bitwise operators include:

1. **Bitwise AND (&)**
: Performs a bitwise AND operation between two integers. The result is an integer where each bit is set to 1 if the corresponding bits of both operands are 1; otherwise, it is 0.
Example:
5 & 3 (binary: 0101 & 0011) results in 1 (binary: 0001).

2. **Bitwise OR (|)**
: Performs a bitwise OR operation between two integers. The result is an integer where each bit is set to 1 if at least one of the corresponding bits of the operands is 1.
Example:
5 | 3 (binary: 0101 | 0011) results in 7 (binary: 0111).

3. **Bitwise XOR (^)**
: Performs a bitwise XOR (exclusive OR) operation between two integers. The result is an integer where each bit is set to 1 if the corresponding bits of the operands are different; otherwise, it is 0.
Example:
5 ^ 3 (binary: 0101 ^ 0011) results in 6 (binary: 0110).

4. **Bitwise NOT (~)**
: Performs a bitwise NOT (complement) operation on an integer. The result is an integer where each bit is inverted (i.e., 0 becomes 1, and 1 becomes 0).
Example:
~5 (binary: ~0101) results in -6 (binary: ...1010 in two's complement representation).

5. **Left Shift (<<)**
: Shifts the bits of an integer to the left by a specified number of positions. Zeros are shifted into the rightmost bits. This operation effectively multiplies the integer by 2 for each shift position.
Example:
5 << 1 (binary: 0101 << 1) results in 10 (binary: 1010).

6. **Right Shift (>>)**
: Shifts the bits of an integer to the right by a specified number of positions. The behavior for the leftmost bits depends on the sign of the integer (logical shift for unsigned integers, arithmetic shift for signed integers). This operation effectively divides the integer by 2 for each shift position.
Example:
5 >> 1 (binary: 0101 >> 1) results in 2 (binary: 0010).

### Expriment 4(b)
#### Binary Setting- 

Setting a bit means altering the bit at a specific position to 1 while keeping other bits unchanged. This operation is useful in scenarios where specific flags or bits need to be activated.

#### Binary Setting-

Resetting a bit involves changing the bit at a specific position to 0 while keeping other bits unchanged. This operation is commonly used to deactivate specific flags or bits.

## Algorithm 
### Algorithm for Expriment 4(a)
* Start  
* Declare two integer variables: `a` and `b`.

* Ask and Read First Number  

  * Output the prompt: "Enter the number1:".  
  * Read the input value and store it in variable `a`.

* Ask and Read Second Number  

  * Output the prompt: "Enter the number2:".  
  * Read the input value and store it in variable `b`.

* Perform Bitwise AND Operation  

  * Compute the result of `a & b`.  
  * Output the result.

* Perform Bitwise OR Operation  

  * Compute the result of `a | b`.  
  * Output the result.

* Perform Bitwise NOT Operation  

  * Compute the result of `~a`.  
  * Output the result.

* Perform Bitwise XOR Operation  

  * Compute the result of `a ^ b`.  
  * Output the result.

* Perform Left Shift Operation  

  * Compute the result of `a << 1` (left shift by 1 position).  
  * Output the result.

* Perform Right Shift Operation  

  * Compute the result of `a >> 2` (right shift by 2 positions).  
  * Output the result.



* Compute the result of a >> 2 (right shift by 2 positions).
* Output the result.
* End

### Algorithm for Expriment 4(a)


1. **Start**

2. **Declare Variables**
   - `int a, i, set, reset;`

3. **Prompt for and Read Input Values**
   - Display the message `Enter the number`.
   - Read the integer value into variable `a`.
   - Display the message `Enter the places to shift`.
   - Read the integer value into variable `i`.

4. **Compute**
   - Create a functionality for setting and resetting by shifting `1` left by `i` positions: `1 << i`.

5. **Set the Bit**
   - Compute the result by performing OR operation: `set = a | (1 << i)`.

6. **Reset the Bit**
   - Compute the result by performing AND operation with the inverted one: `reset = a & (~(1 << i))`.

7. **Output Results**
   - Display the result of resetting the bit: `cout << reset << endl;`.
   - Display the result of setting the bit: `cout << set;`.

8. **End**
