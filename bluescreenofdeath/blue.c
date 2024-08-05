#include <stdio.h>
#include <stdlib.h>

int main() {
    // Set the console color to blue background with white text
    system("color 1F");

    // Print a simple message that looks like the Blue Screen of Death
    printf("A problem has been detected and Windows has been shut down to prevent damage\n");
    printf("to your computer.\n\n");
    printf("The problem seems to be caused by the following file: example.sys\n\n");
    printf("If this is the first time you've seen this stop error screen,\n");
    printf("restart your computer. If this screen appears again, follow\n");
    printf("these steps:\n\n");
    printf("Check to make sure any new hardware or software is properly installed.\n");
    printf("If this is a new installation, ask your hardware or software manufacturer\n");
    printf("for any Windows updates you might need.\n\n");
    printf("If problems continue, disable or remove any newly installed hardware\n");
    printf("or software. Disable BIOS memory options such as caching or shadowing.\n");
    printf("If you need to use Safe Mode to remove or disable components, restart\n");
    printf("your computer, press F8 to select Advanced Startup Options, and then\n");
    printf("select Safe Mode.\n\n");
    printf("Technical Information:\n\n");
    printf("*** STOP: 0x0000007B (0xFFFFFFFFC0000034, 0x0000000000000000,\n");
    printf(" 0x0000000000000000, 0x0000000000000000)\n");

    // Wait for user input before closing
    getchar();

    return 0;
}
