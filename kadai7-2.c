#include<stdio.h>
#include<math.h>

double f(double x, double y){
    return x*x+y*y-4.0;
    }
double g(double x, double y){
    return x-y;
    }
double fx(double x,double y){
    return 2.0*x;
    }
double fy(double x, double y){
    return 2.0*y;
    }
int main(){
    double x=10.0,y=8.0,x1,y1,b;
    double a=1.0e-14;
    int i,max=100;
    for (i=0; i<max; i++){
        printf("%14.13f %14.13f\n",x,y);
        b=fx(x,y)*(-1)-fy(x,y);
        x1=x+(fy(x,y)* g(x,y)- f(x,y)*(-1))/b;
        y1=y+(f(x,y)*(1)-fx(x,y)* g(x,y))/b;
        if(fabs((x1-x)/x)<a&&fabs((y1-y)/y)<a)
            break;
        y=y1;
        x=x1;
    }
    printf("%14.13f %14.13f\n",x1,y1);
}