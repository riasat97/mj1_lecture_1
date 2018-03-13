#include <stdio.h>
#include<math.h>
//WRITE A C PROGRAM TO CALCULATE ROOTS OF A QUADRATIC EQUATION

int main(){
      double a,b,c,determinant,root1,root2,real,imagine;
      printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
      printf("\nA : ");
      scanf("%lf",&a);
      printf("\nB : ");
      scanf("%lf",&b);
      printf("\nC : ");
      scanf("%lf",&c);

      if (a == 0 || b == 0 || c == 0)
      {
        printf("Error: Roots cannot be determined \n");
        return 0;
      }
     determinant = b * b - 4 * a * c;
      if(determinant<0){
        real= -b/(2*a);
        imagine= sqrt(-determinant)/(2*a);
        printf("root1 = %.2lf+%.2lfi\n",real,imagine);
        printf("root2 = %.2lf-%.2lfi\n",real,imagine);
      }
      else if(determinant>0){
        root1=(-b+sqrt(determinant))/(2*a);
        root2=(-b-sqrt(determinant))/(2*a);
        printf("root1 = %.2lf\n",root1);
        printf("root2 = %.2lf\n",root2);
      }
      else{
        root1=root2=-b/(2*a);
        printf("root1 = root2 = %.2lf\n", root1);
      }
      return 0;
}

/*
*/
