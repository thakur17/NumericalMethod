//C Program to Implement Newton Raphson Method
#include<stdio.h>
#include<math.h>
#define e  0.00001f

float f(float x);
float f1(float x); //This is the prototype for first derivative of f(x)


int main()
{
    int in,i;
    float x,x0;
    printf("Enter Maximum no of Iterations ");
    scanf("%d",&in);

    printf("Enter the initial guess ");
        scanf("%f",&x0);

     printf("Iteration     Xn\tf(Xn) \tf1(Xn)\t Xn+1\t    erorr\n");   
    float temp=0;
    for(i=0;i<=in;i++){
     
      x = x0 - (f(x0)/f1(x0));  
     printf("%d \t  %.5f  %.4f   %.4f  %.7f  %.7f\n",i, x0,f(x0),f1(x0),x,x-x0);   
      if(fabs(x-x0)<e)
      {       
           printf("Iterations=%d  Final Root=%f\n",i,x);
           return 0;
      }      
      //printf("Iterations=%d  Roots=%f\n",i,x); 
      
      x0=x;
    }
    return 0;
}

float f(float x)
{
    return exp(x)-4*x*x;
    //return x*sin(x)+cos(x);
    
   // return x*x*x -30; //To find cubic root of 30
}

float f1(float x)
{
    return exp(x)-8*x;
    //return x*cos(x)+sin(x) - sin(x);
 //   return 3*x*x;
}