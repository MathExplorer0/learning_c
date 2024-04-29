#include <stdio.h>

int main() {
    int input;
    int x = 0, y = 1, z = 0;
    
    printf("input the value of n: ");
    scanf("%d", &input);

    for(int i = 0; i < input + 1; ++i) {
        z = x + y;
        y = x;
        x = z;

        printf("%d\n", z);
    }	
	return 0;
}
