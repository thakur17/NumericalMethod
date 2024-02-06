//Simple Bisection Method 

#include<stdio.h>
#include<math.h>
#define e  0.00000000001f

float evaluate(float x);
float bisect(float x1,float x2);

int main()
{
    int ni, i;
    float a,b,m, m1, temp;
    printf("Enter Maximum no of Iterations\n");
    scanf("%d",&ni);

//......Compute x1 and x2............. 
   
   do
   {
        printf("Enter the value of a and b (starting boundary)");
        scanf("%f%f",&a,&b);
        if(evaluate(a)*evaluate(b)>0)
        {
           printf("Roots are Invalid\n");
           continue;
        }
        else
        {
            printf("Roots Lie between %f and %f\n",a,b);
            break;
  
        }
    } while(1);

 //..........Find root............   
    m=bisect(a,b);
m1=m;
    printf("Iteration\ta\t b \t\t roots \t\t functinal value\t erorr\n");   
printf("%d\t %f\t   %f\t %f\t %f\t\t %f\n",0,a,b,m, evaluate(m), m);   
  
   while(i<=ni)
    {
      
      if(evaluate(m)*evaluate(a)<0)
         b=m;  //x2 is shifted   
      else 
       a=m;  
      
     
    
   m1= bisect(a,b);   //find the mid point
   
 // printf("test %f",);
if (fabs(m-m1)<e){
    printf("Root=%f  , functinal value=%f Total Iterations=%d",m, evaluate(m),--i);
    return 0;
}
  temp=fabs(m-m1);
   m=m1;
 printf("%d\t  %f\t %f\t %f\t %f\t\t %f\n",i+1,a,b,m, evaluate(m), temp);   
 
  i++;
}
   printf("Root=%f  , functinal value=%f Total Iterations=%d",m, evaluate(m),--i); 
   return 0;
}

float evaluate(float x)
{
   return x*x*x  - 2*x -5;
}

float bisect(float x1,float x2)
{
    return (x1+x2)/2;
}

