#include <stdio.h>

int main() {
    int x = 0, y = 1, z = 0;

    for(int i = 0; i < 11; ++i) {
        z = x + y;
        y = x;
        x = z;

        printf("%d\n", z);
    }	
	return 0;
}
