// include pre-processor directive
#include <stdio.h>
#include <math.h>

// define MACRO expression to determine if
// the loop should repeat 
#define STOP 0
#define START 10
#define condition(i) (i > STOP)
#define break(i) (i == 5)
#define continue(i) (i % 2)

// declare functions
void loop1(void); // genPower
void loop2(void); // genPowerReference