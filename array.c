#include<stdio.h>
int main(){
    // int a[5] = {2,6,7,9,3};//  5 spaces  
    // printf("%d",a[2]);  



    // taking input



    // int arr[4];
    // printf("enter first element ");
    // scanf("%d",&arr[0]);
    // printf("enter second element ");
    // scanf("%d",&arr[1]);
    // printf("enter third element ");
    // scanf("%d",&arr[2]);
    // printf("enter fourth element ");
    // scanf("%d",&arr[3]);



    // input using loops


    // int a[10];
    // for(int i=0;i<=9;i++){
    //     printf("enter %d element :",i+1);
    //     scanf("%d",&a);
    // }



  // take input from user and print it in reverse
  
  

    int a[5];
    for(int i=0;i<=4;i++){
        printf("enter %d element :",i+1);
        scanf("%d",&a[i]);
    }
    for( int i=4;i>=0;i--){
        printf("%d ",a[i]);
    }



    //given an array of marks of 10 students, if the mark of any sutdent 
  //  is less than  35 printits roll no.(roll no. here refers to the index of the array)
   
  
  
  
//   int marks[10] = {37,92,68,97,26,72,38,94,67,57};
//   for(int i=0;i<10;i++){
//      if (marks[i]<35)
//      printf("%d\n",i+1);
//   }



// memory allocation in array


// address of array



//     int a[5] ={ 2,3,4,5,7};
//     for(int i=0;i<5;i++){
//     printf("%p\n",&a[i]);
// }



//take element and get sum of the elements



    // int a[5];
    // for(int i=0;i<=4;i++){
    //     printf("enter %d element :",i+1);
    //     scanf("%d",&a[i]);
    // }
    // int sum=0;
    // for( int i=0;i<5;i++){
    //     sum=sum+a[i];
    // }
    // printf("the sum of no.s %d",sum);



  //product of given array


//   int a[5];
//     for(int i=0;i<=4;i++){
//         printf("enter %d element :",i+1);
//         scanf("%d",&a[i]);
//     }
//     int product=1;
//     for( int i=0;i<5;i++){
//         product=product*a[i];
//     }
//     printf("the product of no.s %d",product);



//find the maximum no. out of all the array
//searching




//#include<limits.h> ko include kr lege to smallest no.
// max = INT_MIN hoga;  (max = a[0]) ke jgh pe


    // int a[7] ={2,7,0,7,86,76,89};
    // int max = a[0];
    // for(int i=1;i<=6;i++){
    //     if(max<a[i])
    //     max = a[i];
    // }
    // printf("the maximum no. is %d",max);



    // for min value


    // int a[7] ={2,7,0,7,86,76,89};
    // int min = a[0];
    // for(int i=1;i<=6;i++){
    //     if(min>a[i])
    //     min = a[i];
    // }
    // printf("the minimum no. is %d",min);


 return 0;
}

