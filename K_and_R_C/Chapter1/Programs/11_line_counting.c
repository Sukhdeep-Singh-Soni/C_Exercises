/*
 * The proram will count input lines.
 *
 * The standard library ensures that an input text stream appears as a sequence of lines, each terminated by a newline.
 *
 * the terminal is line-buffered. This means that the characters typed will remain in the buffer until Enter is pressed.
 *
 * Buffered Input (default): Waits until the user presses Enter before sending the entire input line to your program.
 * Unbuffered Input: Characters are passed to the program as they are typed (can be done using libraries like termios for real-time processing).
 * Input Buffering: When you press Enter, the terminal adds the input (including the newline) to its buffer and signals the program that the input is complete.
 * Program Reads the Buffer: If your program reads input using buffered functions (like fgets), the entire line (up to \n) is made available 
 * to the program once Enter is pressed. If using character-by-character functions (like getchar), your program processes each character in the buffer 
 * sequentially, stopping when it encounters the newline (\n).
 * Character-by-Character or Line-based: Depending on how your program is set up to read input (line-based or character-by-character), the newline character 
 * (\n) either ends the input or gets processed in your program.
 *
 * In a C program using standard library input functions, when you press Enter, the entire line (including \n) is placed in the terminal’s input buffer. 
 * The program can then retrieve this input (either as a full line or character-by-character) when it calls the appropriate function (fgets, scanf, getchar, 
 * etc.). The newline character (\n) is often used as a delimiter to signify the end of the input.
 * */

#include <stdio.h>

main() {
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')	//a character in single quotes is a character constant and it internally converts to its ascii value(or any other character encoding set used).
      ++nl;		// a '==' signifies is equal to operator 
  printf("%d\n", nl);
}
