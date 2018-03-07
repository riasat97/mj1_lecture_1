#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Enumeration (or enum) is a user defined data type in C.
    //It is mainly used to assign names to integral constants,
    //the names make a program easy to read and maintain.

    enum status {pass,fail,atkt}  ;

    enum  status stud1,stud2,stud3;

    stud1= pass;

    stud2= atkt;

    stud3=fail;

    printf("%d %d %d",stud1,stud2,stud3);

    // The name of enumeration is "status" and the constant
   // are the values of the status. By default, the values
   // of the constants are as follows:
  // constant1 = 0, constant2 = 1, constant3 = 2

    return 0;

}
/*
*/
