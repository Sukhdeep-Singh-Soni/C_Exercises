/* Convert big endian to little endian without using library function 
 *
 * little to big endian means swap the bytes */

#include <stdio.h>

#define ENDIANESS_SWAP(num)	(unsigned int)((num >> 24) & 0xff) | \
					     ((num >> 8) & 0xff00) | \
					     ((num << 8) & 0xff0000) | \
					     ((num << 24) & 0xff000000)

int main(void) {
    unsigned int num = 0xabcdefae;
    int little_endian, big_endian;

    char *ptr = (char*)&num;

    little_endian = big_endian = 0;

    if (*ptr == 0xae)
	    little_endian = 1;
    else
	    big_endian = 1;
    
    printf("Num - %#x before with endianess - %s\n", num, (little_endian)?(char*)"little_endian":(char*)"big_endian");
    
#if 1	/* Method 1 */
    num = ENDIANESS_SWAP(num);
#endif

#if 0	/* Method 2 */
    num = ((num >> 24) & 0xff) | ((num >> 8) & 0xff00) | ((num << 8) & 0xff0000) | ((num << 24) & 0xff000000);
#endif

#if 0 /* Method 3 */
    num = ((num << 8) & 0xff00ff00) | ((num >> 8) & 0xff00ff);
    num = (num << 16) | (num >> 16);
#endif

    printf("Num - %#x after with endianess - %s\n", num, (little_endian)?(char*)"big_endian":(char*)"little_endian");

    return 0;
}
