/* Write a Program in C to Print all natural numbers up to N without using a semi-colon */

#include <stdio.h>

#define N   10

int main(int val) {
    if (val <= N && printf("%d ", val) && main(val + 1)) {}
}

/*
If a function in C++ (or C) is declared to return an int, but you do not write a return statement, then the behavior is undefined according to the language standard.

Key points:
Undefined behavior means anything can happen: the program might crash, return garbage, seem to work, etc.

In practice, many compilers will just return whatever value happens to be in the return register (like eax on x86) at the time the function ends, which is usually garbage.

Compilers may issue warnings if they detect this, especially with flags like -Wall or -Wreturn-type.

Example:
int getValue() {
    // No return statement
}

int main() {
    int x = getValue();  // x will contain garbage or unpredictable value
}
Best Practice:
Always ensure that every code path in a non-void function returns a value. If you forget, the compiler might not catch it, and it can lead to very subtle bugs.

Yes, it could be zero, but that's entirely coincidental — not guaranteed.

Here's why:

Under the hood:
When a function doesn't explicitly return a value, the CPU doesn't get instructions to put a specific value into the return register (like eax on x86). Instead, the value already in that register at the time the function ends is what gets "returned". That register might happen to contain:

Zero (0)

A random value left from previous operations

Some other unpredictable value

So in some cases, yes — it might return 0, but:

***Zero is not a default return value for int functions.

Example (in C++):
cpp
Copy
Edit
#include <iostream>

int test() {
    // No return statement
}

int main() {
    int result = test();
    std::cout << "Returned value: " << result << std::endl;
}
Possible output:

yaml
Copy
Edit
Returned value: 0   // (Possible)
Returned value: 32767
Returned value: -2147483648
Returned value: 10829536
The actual result depends on compiler, optimization, CPU state, etc.

Summary:
Can the return value be zero? Yes.

Will it always be zero? No.

Is it safe to rely on it? Absolutely not — it's undefined behavior.
*/