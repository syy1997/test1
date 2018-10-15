//problem3
int solve(double a, double, b, double c, double *root1, double *root2){
double discriminent = 0;
 discriminant = b*b-4*a*c;
 root1 = (-b+sqrt(discriminant))/(2*a);
 root2 = (-b-sqrt(discriminant))/(2*a);

if(discriminant > 0){return 2;}
if(discriminant = 0){return 1;}

if(discriminant < 0){return 0;}

}
void tester(double a, double b, double c, char *msg){
printf("%d roots",solve(a,b,c,1.0,1.0))


}



