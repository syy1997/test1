#include <stdio.h>
#include <math.h>


int main(){
int solve(double a, double b, double c, double *root1, double *root2){
double discriminant = 0;
 discriminant = b*b-4*a*c;
 
 double r1 = (-b+sqrt(discriminant))/(2*a);
 double r2 = (-b-sqrt(discriminant))/(2*a);

if(discriminant > 0){return 2;}
if(discriminant = 0){return 1;}

if(discriminant < 0){return 0;}

}
void tester(double a, double b, double c, char *msg){
printf("%d roots",solve(a,b,c,&a,&b));


}
tester(1.0, 0.0, 4.0, "no solution");
tester(1.0, 0.0, -4.0, "two solutions");
tester(1.0, 0.0, 0.0, "one solution"); 



return 0;
}
