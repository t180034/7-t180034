#include<stdio.h>
#include<math.h>

double f(double x){return x*x-2;}
double df(double x){return 2*x;}
int main(){
    int i,max;
    double x = 1.0,a;
    max=100;
    for (i=0;i<max;i++){
        printf("%16.15f\n",x);
        a=x-f(x)/df(x); 
        if (fabs((a-x)/x)<1.0e-15)
            break;
        x=a;    
    }
    printf("%16.15f\n",x);
}