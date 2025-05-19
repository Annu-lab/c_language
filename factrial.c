//factorial

#include<stdio.h>
// void factorial(int x){
//     if(x==1 || x==0)return 1;
//     return x*factorial(x-1);
// }
// int main(){
//      int n ;
//      printf("enter a no.");
//      scanf(" %d",&n);
//      int fact=factorial(n);
//      printf("%d",fact);



//repeated greeting


// void greeting(int x){
//     if(x==0) return;
//    printf("good morning\n");
//    greeting(x-1);
//    return;
// }
// int main(){
//     int n;
//     printf("enter no.");
//     scanf("%d",&n);
//     int greet=greeting(n);
//     printf("%d",n);





//dcreasing no.


// void greeting(int x){
//     if(x==0) return;
//    printf("%d\n",x);
//    greeting(x-1);
//    return;
// }
// int main(){
//     int n;
//     printf("enter no.");
//     scanf("%d",&n);
//     int greet=greeting(n);




//increansing no.


// void number(int x ,int n){
//    if(x>n) return  ;
//    printf("%d\n",x);
//    number(x+1,n);
//    return ;
// }
// int main(){
//     int n;
//     printf("enter no.");
//     scanf("%d",&n);
//     int num=number(1,n);




// or  after recursive call




// void number(int x){
//     if(x==0) return;
//    number(x-1);
//    printf("%d\n",x);
//    return;
// }
// int main(){
//     int n;
//     printf("enter no.");
//     scanf("%d",&n);
//     int num=number(n);



// void decreasing(int y){
//     if(y==0) return ;
//       printf("%d\n",y);
//     decreasing(y-1);
//    return;
// }
// int number(int x){
//     if(x==0) return;
//    number(x-1);
//    printf("%d\n",x);
//    return;
// }
// int main(){
//     int n;
//     printf("enter no.");
//     scanf("%d",&n);
//     decreasing(n);
//     number(n);


//sum (parameterised)



// void sum(int x,int s){
//     if(x==0){
//         printf("the sum is %d",s);
//         return;
//     }
//     sum(x-1,x+s);
// }
//  int main(){
//     int n;
//     printf("enter no.");
//     scanf("%d",&n);
//    sum(n,0);



//sum(return type)




// int sum(int x){
//     if(x==1){
//        return 1 ;
//     }
//     int add=x+sum(x-1);
//     return add;
// }
// int main(){
//     int n;
//     printf("enter no.");
//     scanf("%d",&n);
//     int s= sum(n);
//     printf("%d",s);



//function to calculate a raised to the b



// int power(int x, int y){
//     int sol =1;
//     for(int i=1;i<=y;i++){
//         sol=sol*x;
//     }
//     return sol;
// }
// int main(){
//     int a;
//     printf("enter base : ");
//     scanf("%d",&a);
//     int b;
//     printf("enter power : ");
//     scanf("%d",&b);
//     int cal=power(a,b);
//     printf("%d to the %d is %d ",a,b,cal);



//power with recursion



// int power(int x, int y){
//     if(y==0) return 1;
//     int sol=x*power(x,y-1);
//     return sol;
//     }
// int main(){
//     int a;
//     printf("enter base : ");
//     scanf("%d",&a);
//     int b;
//     printf("enter power : ");
//     scanf("%d",&b);
//     int cal=power(a,b);
//     printf("%d to the %d is %d ",a,b,cal); 




//multiple call

//fibonacci number)(1 1 2 3 5 8 )




// int fibo(int x){
//     if(x==1 || x==2) return 1;
//    int ans= fibo(x-1)+fibo(x-2);
//    return ans;
// }
// int main(){
//     int n;
//     printf("enter no. of term : ");
//     scanf("%d",&n);
//     printf("%d",fibo(n));



//stair path count



// int stair(int x){
//     if(x<=2) return x;
//    int totways= stair(x-1) + stair(x-2);
//    return totways;
// }
// int main(){
//     int n;
//     printf("enter no. of stairs : ");
//     scanf("%d",&n);
//     int ways = stair(n);
//     printf("%d",ways);






//stair path 2



// int stair(int x){
//     if(x<=2) return x;
//     if(x==3) return 4;
//    int totways= stair(x-1) + stair(x-2) +stair(x-3);
//    return totways;
// }
// int main(){
//     int n;
//     printf("enter no. of stairs : ");
//     scanf("%d",&n);
//     int ways = stair(n);
//     printf("%d",ways);



//power function (logarithmic)


// int power(int x, int y){
//      if(y==0) return 1;
//      int a=power(x,y/2);
//     if(y%2==0)
//      return a*a;
//     else
//         return x*a*a;
// }
// int main(){
//     int b;
//     printf("enter base :");
//     scanf("%d",&b);
//     int p;
//     printf("enter power : ");
//     scanf("%d",&p);
//     int ans= power(b,p);
//     printf("%d raised to the power %d is equal to %d",b,p,ans);



// maze path  

// int maze(int cr,int cc,int fr,int fc){    // cr= current row ,cc=current column , fc= final column
//     int rightways =0 ;
//     int downways =0 ;
//     if(cr==fr && cc==fc) return 1;
//     if (cr==fr)  //only downeways
//      rightways += maze(cr,cc+1,fr,fc);
//      if(cc==fc) //only right way
//     downways += maze(cr+1,cc,fr,fc);
//     if(cr<fr && cc<fc){
//         rightways += maze(cr,cc+1,fr,fc);
//         downways += maze(cr+1,cc,fr,fc);   
//     }
//     int totatways =rightways + downways;
//     return totalways;
// }
// int main(){
//     int r;
//     printf("enter no. of rorws :");
//     scanf("%d",&r);
//     int c;
//     printf("enter no of columns : ");
//     scanf("%d",&c);
//     int noofways=maze(1,1,r,c);
//     printf("%d ",noofways);




//pre in post

// void preinpost(int n){
//     if(n==0) return ;
//     printf("pre %d\n ",n);
//     preinpost(n-1);
//     printf("in %d\n",n);
//     preinpost(n-1);
//     printf("post %d\n",n);
//     return ;
// }
// int main(){
//     int n;
//     printf ("enter a no.");
//     scanf("%d",&n);
//     preinpost(n);





// zig zag



// void preinpost(int n){
//     if(n==0) return ;
//     printf("%d",n);
//     preinpost(n-1);
//     printf("%d",n);
//     preinpost(n-1);
//     printf("%d",n);
//     return ;
// }
// int main(){
//     int n;
//     printf ("enter a no.");
//     scanf("%d",&n);
//     preinpost(n);




    //tower of hanai

void tower(int n, char s,char h,char d){ // n = no. , s = source, h = helper ,d = destination
   if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c to %c\n",s,d);
    tower(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("enter no. of disc");
    scanf("%d",&n);
    tower(n,'a','b','c');
    return 0;
}


