#include <stdio.h>
void main()
{
    // '/r' => This forces the flashing text cursor to jump completely back to the very beginning of the current line, without moving down and overwrite the existing characters.
    // '/n' => The \n character moves the cursor to a fresh new line.
    printf("includehelp.com\rOK\n");

    // '/b' => Each \b moves the cursor exactly one space backward.
    printf("includehelp.com\b\b\bOk\n");
}
