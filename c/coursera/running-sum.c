/*
 compute the minimum, maximum, sum and average
 Aug. 17, 2022
 Master Rain Drop
*/

#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int i;
    double x, min, max, sum, avg;
    
//     Recall that scanf() returns as an int the number of successful conversions performed. If scanf() is unable to make a conversion, then we print a message and exit 
// the program. The function exit () is in the standard library, and its function prototype 
// is in stdlib.h. When exit is invoked, certain housekeeping tasks are performed and 
// the program is terminated. This function takes a single argument of type int that, by 
// convention, is zero if the programmer considers the exit to be normal, and is nonzero 
// otherwise. 
    if(scanf("%lf",&x)!=1) {
        // This block will execute only if the input value of x is of type double
        printf("No data found - bye!\n");
        exit(1);
    }

    printf("%5s%9s%9s%9s%12s%12s\n%5s%9s%9s%9s%12s%12s\n", 
            "Count", "item", "min", "max", "sum", "avg",
            "-----", "----", "---", "---", "---", "---");
    // printf(scanf("%lf", &x)!=1);
    // printf((3==3));
    printf ("%5d%9.1f%9.1f%9.1f%12.3f%12.3f\n", 
            1, x, min, max, sum, avg);
    

//     The variable 7 is initially assigned the value 2. Then a test is made to see if the logical 
// expression scanf("%1F", &x) == 1 is true.
//  If scanf() can read characters from the standard input stream, interpret them 
// as a double (read 1f as “long float”), and place the value at the address of x, then a successful conversion has been made. This causes scanf() to return the int value 1, 
// which in turn makes the logical expression true. As long as scanf() can continue to 
// read characters and convert them, the body of the for loop will be executed repeatedly. 
// The variable i is incremented at the end of the body of the loop. 
    for (i = 2; scanf("%lf", &x)==1; ++i) {
        if(x < min) {
            min = x;
        } else if(x > max){
            max = x;
        }
        sum +=i;
        avg = sum/i;
        printf("%5d%9.1f%9.1f%9.1f%12.3f%12.3f", i, x, min, max, sum, avg);
    }
    return 0;
}