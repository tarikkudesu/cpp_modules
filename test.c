#include <libc.h>

void printBinary(int n) {
    int i;
    for (i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
        if (i % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

#include <math.h>
int main() {
	int	x = 645168;
	printBinary(x);
	x *= pow(2, 2);
	printBinary(x);
}
