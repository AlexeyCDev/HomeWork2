#include <stdio.h>
#include <math.h>
int main(void)
{
int x=1;
double const Pi=3.14;
double y;
y=(2*cos(x-Pi/6)+sqrt(2))/(1/(2*log(x))+pow(sin(x*x),2))*exp(3*x);
printf("%f",y);
return 0;

}
