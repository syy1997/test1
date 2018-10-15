//problem2(a)
double term(double x, int n){
double temp2 = 1;
double temp = 1;

for(int i=0;i<n;i++){
temp*=x;


}
for(int i=1;i<=n;i++){ 

temp2*=i;

}

return temp/temp2;
}



//(b)
double series(double x , int m){
double sum = 0;
for(int i =1; i<=m;i++){
sum+=term(x,i);

}
return sum;
}


//(c)
void printTable(){
for(int i =-5;i<=5;i++){
printf("x=%d ",i)
for(int j = 0; j<=10,j++){
 printf("%10.4f",term(i,j))

}
}
}
