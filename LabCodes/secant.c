//C Program to Implement Secant Method
//Try to modify this code to print the output in a tabular form
//as shown in the lecture note unit 1 (see the code sample at Newton method)

#include<stdio.h>
#include<math.h>
#define e 0.00001  //to find answers till 4 correct decmal places

float f(float x);
float evaluate(float x1,float x2);

int main()
{
    int ni,i=1;
    float x1,x2,x;

    printf("Enter Maximum no of Iterations\n");
    scanf("%d",&ni);

//......Compute x1 and x2 to check for the sign change 
   
   do
   {
        printf("Enter initial values of x1 and x2 ");
        scanf("%f%f",&x1,&x2);
        printf("f(x1)= %f f(x2)= %f\n", f(x1),f(x2));

        if(f(x1)*f(x2)>0)
        {
           printf("Roots are Invalid\n");
           continue;
        }
        else
        {
            printf("Roots Lie between %f and %f\n",x1,x2);
            break;
  
        }
    } while(1);
    
    x = evaluate(x1,x2);   
    do
    {
      x1=x2;
      x2=x;
      printf("Iterations=%d  Root=%f\n",i,x);   
      x = evaluate(x1,x2);  
      if(fabs(x-x2)<e)
      { 
          printf("Final Root=%f  Total Iterations=%d and functional value=%f ",x,i+1, f(x));
          return 0;

      }
      i++; 
    }while(i<=ni);
    printf("Final Root=%f and functional value=%f ",x, f(x));

    return 0;
}

//Function definitions begin here
float f(float x)
{
   return exp(x)- x*x +3*x -2;
   
}

float evaluate(float x1,float x2)
{
      return (x2  - (f(x2)*(x2-x1)) / (f(x2) - f(x1)));
}