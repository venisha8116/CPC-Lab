// 2. In digital world colors are specified in RGB format, with values of R, G, and B varying on integer scale
// from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M,
// Y and K varying on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per formula: -

// White = Max(red/255,green/255,blue/255) 
// Cyan = (white - red/255)/white 
// Magenta = (white - green/255)/white 
// Yellow = (white - blue/255)/white 
// Black = 1 - white 
// Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1.

#include <stdio.h>

int main() {
    int red, green, blue;
    float r, g, b;
    float white, cyan, magenta, yellow, black;

    printf("Enter RGB values (0 to 255): ");
    scanf("%d %d %d", &red, &green, &blue);

    // Convert RGB values from 0-255 scale to 0.0-1.0 scale
    r = red / 255.0;
    g = green / 255.0;
    b = blue / 255.0;

    /*
        If all RGB values are 0, the color is black.

        For black:
        C = 0
        M = 0
        Y = 0
        K = 1
    */
    if (red == 0 && green == 0 && blue == 0) {
        cyan = 0;
        magenta = 0;
        yellow = 0;
        black = 1;
    }
    else {
        // Find the maximum value among R, G and B
        white = r;

        if (g > white)
            white = g;

        if (b > white)
            white = b;

        // Calculate CMYK values
        cyan = (white - r) / white;
        magenta = (white - g) / white;
        yellow = (white - b) / white;
        black = 1 - white;
    }

    printf("Cyan    = %.2f\n", cyan);
    printf("Magenta = %.2f\n", magenta);
    printf("Yellow  = %.2f\n", yellow);
    printf("Black   = %.2f\n", black);

    return 0;
}