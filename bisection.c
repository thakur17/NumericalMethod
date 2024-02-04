//Simple Bisection Method 

#include<stdio.h>
#include<math.h>
float evaluate(float x);
float bisect(float x1,float x2);

int main()
{
    int ni, i;
    float a,b,m;
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
    while(i<=ni)
    {
      m = bisect(a,b);   //find the mid point
      if(evaluate(m)<0)
         a=m;  //x2 is shifted   
      else 
       b=m;  
     printf("Iterations=%d  Roots=%f functinal value=%f\n",i,m, evaluate(m));   
      
      i++; 
    }
    printf("Root=%f  , functinal value=%f Total Iterations=%d",m, evaluate(m),--i);

    return 0;
}

float evaluate(float x)
{
   return x*x*x -2*x - 5;
}

float bisect(float x1,float x2)
{
    return (x1+x2)/2;
}

