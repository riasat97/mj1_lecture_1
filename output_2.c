#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  int x=61,y=60,z=101;
  //  int x=61,y=60,z=0;
      int x=61,y=61,z=101;
  //  int x=61,y=61,z=0;


//     if(x>60&&y>60 || z>200){
//        printf("Admitted");
//     }
//      else
//        printf("Not Admitted");


    switch(1){
    case 1:
        if(x>60){
            if(y>60){
               printf("Admitted from Y");
               break;
            }
        }
        if(z>100){
           printf("Admitted from Z");
           break;
        }
    default :
        printf("Not Admitted");
        break;
    }


//    if(x>60){
//        if(y>60)
//         printf("Admitted");
//        else if(z>100)
//         printf("Admitted");
//        else
//         printf("Not Admitted");
//    }
//    else if(z>100)
//         printf("Admitted");
//    else
//         printf("Not Admitted");



//    char A='X',B='Y';

//       if(A == 'X'){
//         if(B == 'Y')
//            printf("Y");
//         else
//            printf("Z");
//       }
//       else if(A == 'a')
//         printf("Apple");


//      char A='X',B='J';
//
//      switch(A){
//
//      case 'X':
//        switch(B){
//            case 'Y':
//                 printf("Y");
//                 break;
//            default:
//                 printf("Z");
//                 break;
//            }
//            break;
//      case 'a':
//            printf("Apple");
//            break;
//        }


}
