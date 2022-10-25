// include pre-processor directive
#include "./headers/AssignmentC.h"

/* write function for question 1 */
int * genPower(void) {
    int n;
    int p;
    int result;

    // set up for loop
    // use macro expression as condition of for loop
    for(n = START; condition(n); n--){
        printf("%d ", n);
    }
    printf(result);
}

/* write function for question 2 */
int * genPowerReference(void) {

    int *ptr;
    int n;
    int p;
    ptr = &n;
    int result;

    // set up for loop
    // use macro expression as condition of for loop
    for(n = START; condition(n); n--){
        printf("%d ", n);
    }
    printf(result);
}
