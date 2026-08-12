// 1. C program to shut down the system in Windows OS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("c:\\windows\\system32\\shutdown /i");
    return 0;
}

// for linux:
// #include <stdlib.h>

// int main() {
//     // Invokes the standard Linux shutdown command immediately
//     system("shutdown -h now");
//     return 0;
// }

