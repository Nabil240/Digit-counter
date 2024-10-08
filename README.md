Description:
This C program takes an integer input from the user and calculates the number of digits in the integer by dividing it repeatedly by 10 until the number becomes 0. The program then prints the total number of digits in the input number.

Key Features:
Input Handling:

The program prompts the user to enter an integer, which is then stored in the variable num using scanf().
Digit Counting Logic:

The program uses a while loop that continues dividing the number by 10 (num /= 10) until the number becomes 0. Each time the number is divided, a counter (count) is incremented to track how many times the division happens, which corresponds to the number of digits in the original number.
Output:

Once the loop completes, the program prints the total number of digits counted.
Example Output:
Input: 12345
Output: digit: 5
Input: 987654321
Output: digit: 9
Edge Cases:
Negative numbers: The program does not handle negative integers specifically. If a negative number is entered, it will count the digits but without considering the negative sign.
Zero: The current logic will return 0 digits if the user inputs 0. You may want to handle this special case explicitly to return 1 as the digit count for 0.
