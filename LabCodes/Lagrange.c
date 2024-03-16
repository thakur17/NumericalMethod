//Lagrange's Interpolation Method

#include<stdio.h>

int main()
{
    int n, o;
    printf("Enter no. of terms\n");
    scanf("%d",&n);
    printf("Enter no. of order\n");
    scanf("%d",&o);
    float X[n],Y[n],x,sum=0,term;
    int i,j;
   
    printf("Enter Values of X \n");
    for(i=0;i<n;i++)
          scanf("%f",&X[i]);
    printf("Enter Values of Y\n");
    for(i=0;i<n;i++)
          scanf("%f",&Y[i]);
          
    printf("Enter value of x for which you want y\n");
    scanf("%f",&x);

    // Applying the Formula  
    for(i=0;i<=o;i++)
    {
        term=1;
        for(j=0;j<=o;j++)
        {   
            if(i!=j)
               term = term * ((x - X[j])/(X[i]-X[j]));
        }
        printf("Term= %f\n",term*Y[i]); //This prints the product of yi and the coefficients computed in the above loop
	sum=sum + term * Y[i];  
	//printf("Sum= %f\n",sum);  
    }
    printf("\nValue at X=%f is = %f", x,sum);
}