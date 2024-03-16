#include<stdio.h>


void main()
{
    int n,i,j=1;
float k, f, f1=1,f2=0;
    printf("\nEnter the number of observations:\n");
    scanf("%d", &n);
    float x[n], y[n], p[n];

    printf("\nEnter values for x:\n");
    for (i=1;i<=n;i++)
        scanf("%f", &x[i]);

    printf("\nEnter the respective values for y :\n");
    for (i=1;i<=n;i++)
        scanf("%f", &y[i]);

    f=y[1];
    printf("\nEnter the value of x that  you want to interpolate for :\n");
    scanf("%f", &k);

    do
    {
        for (i=1;i<=n-1;i++)
        {
            p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=p[i];
        }
        f1=1;
        for(i=1;i<=j;i++)
            {
                f1*=(k-x[i]);
            }
        f2+=(y[1]*f1);
        n--;
        j++;
   // printf("\nf(%f) = %f", k , f2);

    }

    while(n!=1);
    
    f+=f2;
    printf("\nf(%f) = %f", k , f);
  }
