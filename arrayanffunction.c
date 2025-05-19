#include <stdio.h>

// passing array to a function
// array change by reference



// void fun(int x[]){
//     x[0] = 109;   // in array elements value get changed
//     return; 
// }
// int main(){
//     int arr[2]={2,9};
//     printf("%d\n",arr[0]);
//     fun(arr);
//     printf("%d\n",arr[0]);



//given an array of integers, change the value of all odd indexed elements
//to its second multiple and increment all even indexed value by 10.



// int main(){
//     int a[7] = {1,2,3,4,5,6,7} ;
//     for(int i=0;i<=6;i++){
//        if(i%2==0)
//         a[i]+=10;
//       if(i%2!=0)
//         a[i]*=2;
//     }
//     for(int i=0;i<=6;i++){
//         printf("%d\n",a[i]);  
//     } 




//count the no. of the element in given array greater than a given no. x



// int main(){
//     int a[7]={1,2,3,5,7,5,10};
//     int x=2;
//     int count=0;
//     for(int i=0;i<=6;i++){
//     if(a[i]>x)
//     count++;
//     }
//     printf("%d",count);



//find the difference between the sum of element at even indices to
//the sum of elements at odd indices



// int main(){
//     int a[10] = { 1,33,54,75,34,65,76,76,54,32};
//     int evensum=0;
//     int oddsum=0;
//     for(int i=0;i<=9;i++){
//       if(i%2==0)
//       evensum+=a[i];
//       else
//       oddsum+=a[i];
//     }
//     printf("sum of even indices and the odd indices are %d and %d",evensum,oddsum);
//     int diff ;
//     diff = evensum - oddsum;
//     printf("\nthe difference is %d",diff);




//find the total no. of pairs in the array whose sum is equal to the given value x



// int main(){
//     int a[7]={4,6,4,7,8,3,7};
//     int totalpairs=0;
//     int x=10;
//     for(int i=0;i<=6;i++){
//       for(int j=i+1;j<=6;j++){
//         if(a[i]+a[j]==x){
//           totalpairs++;
//           printf("(%d ,%d)",a[i],a[j]);
//         }
//       }
//     }
//     printf("\ntotal pairs are %d ",totalpairs);



//count the no. of triplets whose sum is equal to the given value x





// int main(){
//   int a[7]={2,6,4,7,8,3,7};
//   int totaltriplets=0;
//   int x=12;
//   for(int i=0;i<=6;i++){
//     for(int j=i+1;j<=6;j++){
//       for(int k=j+1;k<=6;k++){
//       if(a[i]+a[j]+a[k]==x){
//         totaltriplets++;
//         printf("(%d ,%d,%d)",a[i],a[j],a[k]);
//         }
//       }
//     }
//   }
//   printf("\ntotal pairs are %d ",totaltriplets);




//find the second largest element in the given array

// #include<limits.h>
// int main(){
//   int a[7] ={2,7,0,7,86,76,89};
//   int max = INT_MIN;
//   int smax = INT_MIN;
//   for(int i=1;i<=6;i++){
//       if(max < a[i])
//       max = a[i];
//   }   // max no.
//   for(int i=1;i<=6;i++){
//     if(smax < a[i] && a[i]!= max)
//     smax = a[i];
// }
//   printf("the maximum no. is %d",max);
//   printf("\nthe  second maximum no. is %d",smax);



// or
// in 1 loop


// important + tricky 

// #include<limits.h>
// int main(){
//   int a[7] ={2,7,0,7,86,76,89};
//   int max = INT_MIN;
//   int smax = INT_MIN;
//   for(int i=1;i<=6;i++){
//       if(max < a[i]){
//         smax = max; // smax is now previous max
//       max = a[i];  // max is now a new max
//   }
//    else if(smax < a[i] && max !=a[i]) 
//     // (max!=a[i] will be in use when max and second max are equal no. in array)
//    smax = a[i];
// }
//   printf("the maximum no. is %d",max);
//   printf("\nthe second maximum no. is %d",smax);




//write a program to copy the contents of one array into another
//in reverse order

// int main(){
//   int a[7] ={2,7,0,7,86,76,89};
//   int b[7];
//   for(int i=0;i<=6;i++){
//     b[i] =a[6-i];
//   }
//   for(int i=0;i<=6;i++){
//     printf("%d ",b[i]);
//   }




//write a program to reverse the array without using any extra array




// void reverse(int a[]){
//   int i = 0;
//   int j = 6;
//   while (i<j){      // for(int i=0,j=6;i<j;i++,j--)
//     // a[i] and a[j];
//     int temp =a[i];
//     a[i] = a[j];
//     a[j] = temp;
//     i++;
//     j--;
//  }
//  return;
// }
// int main(){
//   int a[7] ={2,7,0,7,86,76,89};
//   reverse(a);
//   for(int i=0;i<=6;i++){
//    printf("%d ",a[i]);
//   }



// if an array contain n elements, then check if the given array is a 
// palindrome or not

// very important




// reverse a part of array



// int main(){
//   int a[7] ={2,7,0,7,86,76,89};
//   for(int i=1,j=4;i<=j;i++,j--){
//     int temp =a[i];
//     a[i] =a[j];
//     a[j] = temp;
//   }
//   for(int i=0;i<=6;i++){
//     printf("%d ",a[i]);
//   }



  // or



  // void reverse(int a[],int si, int ei){    //si = starting indice , ei = ending indices
  //      for(int i=si,j=ei;i<j;i++,j--){
  //     // a[i] and a[j];
  //     int temp =a[i];
  //     a[i] = a[j];
  //     a[j] = temp;
  //  }
  //  return;
  // }
  // int main(){
  //   int a[7] ={2,7,0,7,86,76,89};
  //   reverse(a,2,5);
  //   for(int i=0;i<=6;i++){
  //    printf("%d ",a[i]);
  //   }

    



//rotate the given array 'a' by k steps, where k is non-negative
// note- k can be greater than n as well where n is the size of array


//page

// void reverse(int a[],int si, int ei){    //si = starting indice , ei = ending indices
//   for(int i=si,j=ei;i<j;i++,j--){
//  // arr[i] and a[j];
//  int temp =a[i];
//  a[i] = a[j];
//  a[j] = temp;
// }
// return;
// }
// int main(){
// int a[7] ={1,2,3,4,5,6,7};
// int n =7;  //size of array
// int k =76;
// k=k%n;
// reverse(a,0,n-1);
// reverse(a,0,k-1);
// reverse(a,k,n-1);
// for(int i=0;i<=6;i++){
// printf("%d ",a[i]);
// }





// is the element present 

// int main(){
//   int a[7] ={1,2,3,4,5,6,7};
//   int x =6;  // n0. which you want to find
//   for(int i=0;i<=6;i++){
//      if(a[i]==x){
//       printf("%d is pesent in the the array and its index is %d ",x,i);
//      // break;  use break to find only fist time 
//      }
//   }




//given an array containing elements fron 1 to 20 except one element
//in this range is missing. find the missing element.
//linear search

//bool = to use bool datatype we have to use #include<stdbool.h> header file
// and this datatype only contains two type of value i.e, true and false.


// #include<stdbool.h>
// int main(){
//   int a[19] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,19,20};
//   int sum = 0;
//   int n=20;   // counting jha tk hogi 
//   for(int i=0;i<=18;i++){
//     sum = sum + a[i];
//   }
//   printf("sum of elements of given array is %d ",sum);
//   int sum2 = (n*(n+1))/2;
//   printf("\nthe missing element is %d",sum2 - sum);





// wap to find a duplicate element from a array of integers



// int main(){
//   int a[7] = { 6,2,3,4,7,6,7};
//   for(int i=0;i<=6;i++){
//     for(int j=i+1;j<=6;j++){    //i+1 is important thing   
//       if(a[i]==a[j]){
//         printf("%d is dublicabte element \n",a[i]);
//         break;
//       }
//     }
//   }



//find the unique no. ina given array where all the elements are being
// repeated twice with one value being unique

// #include<stdbool.h>
// int main(){
//   int a[7] = { 6,2,3,4,7,6,7};
//   for(int i=0;i<=6;i++){
//     bool flag = false;
//     for(int j=i+1;j<=6;j++){    
//       if(a[i]==a[j]){
//        flag =true;
//       }
//     }
//     if (flag == false){
//       printf("%d has no dublicate ",a[i]);
//       break;
//     }
//   }
//   return 0;
// }