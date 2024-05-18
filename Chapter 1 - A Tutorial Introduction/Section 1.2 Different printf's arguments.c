#include<stdio.h>
int main(void)
{
    printf("\a"); /* warning: unknown escape sequence: '\a' */ /* But it is valid*/
    printf("\4");
    printf("\A");
    printf("\$"); /* valid */
    printf("%:\%"); /* warning: spurious trailing ‘%’ in format [-Wformat=]*/ /*  warning: unknown conversion type character in : in format. Spurious trailing % in format */
    printf("\0"); /* warning: embedded ‘\0’ in format [-Wformat-contains-nul] */
    printf("\u2605"); /* valid and is a unicode for star mark*/
    printf("\xF"); /* valid and \x stands for hexadecimal */
    return 0;
}
