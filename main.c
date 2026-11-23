#include <stdio.h>

int main(void) {
    printf("The numbers from 1 to 10:\n");
    /*for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }*/

    /*for (int i=10;i>0;i--) {
        printf("%d\n",i);
    }*/
    /*for (int i=1; i<10;i+=2)
        printf("%d\t",i);
        */

    long sum = 0;
    for (int i=1; i<=100000; i++) {
        sum+=i;
    }
    printf("The sum of the numbers from 1 to 10 is: %ld\n", sum);
    printf("The sum is %ld\n", sum);

    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(int));


    return 0;
}
