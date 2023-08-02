#include <stdio.h>
/**
 * void _puts_recursion(char *s) is a recursive function that prints a string followed by a new line.
 */
void _puts_recursion(char *s) {
    if (*s == '\0') {
        putchar('\n');
        return;
    }
    
    putchar(*s);
    _puts_recursion(s + 1);
}

int main(void) {
    char message[] = "Hello, world!";
    _puts_recursion(message);
    return 0;
}
