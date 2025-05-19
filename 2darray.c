#include<stdio.h>


// input and output

//ways to take input
//int a[4][2]={{1,2},{3,4},{5,6},{7,8}}
//int a[4][2]={1,2,3,4,5,6,7,8}
//int a[][2]={1,2,3,4,5,6,7,8}     blank will automatically considered as 4 here

// int main(){
    
//     int r;
//     printf ("enter the no. of rows");
//     scanf("%d",&r);
//     int c;
//     printf ("enter the no. of columns");
//     scanf("%d",&c);
//     int a [r][c] ;
//     for(int i =0; i<r; i++){
//         for(int j =0;j<c;j++){
//             printf("enter %d row and %d column's element\n",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n");
    // for(int i =0; i<r; i++){
    //     for(int j =0;j<c;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
 



//write a program to store roll no. and marks obtained by 4 student side by
// side in a matrix

//  int main(){
//     int r;
//     printf ("enter the no. of rows");
//     scanf("%d",&r);
//     int a [r][3] ;
//     for(int i =0; i<r; i++){
//         for(int j =0;j<3;j++){
//             if(j==1){
//             printf("enter phy mark\n ");
//             scanf("%d",&a[i][j]);}
//             if(j==2){
//             printf("enter maths mark\n ");
//             scanf("%d",&a[i][j]);}
//             if(j==0){
//             printf("enter chem mark\n ");
//             scanf("%d",&a[i][j]);}
           
//         }
//     }
    // printf("\n");
    // for(int i =0; i<r; i++){
    //     for(int j =0;j<3;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }







//add two matrices

// int main(){
//     int a[2][2] = {1,2,3,4} ;
//     int b[2][2] = {4,5,6,7} ;
//     int res [2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             res[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }
    



//given a matrix 'a' of dimension n*m and 2 coordinates(l1,r1)
//and (l2,r2).return the sum of the rectangle from (l1,r1) to (l2,r2).

//note

//  int main(){
    
//         int r;
//         printf ("enter the no. of rows");
//         scanf("%d",&r);
//         int c;
//         printf ("enter the no. of columns");
//         scanf("%d",&c);
//         int a [r][c] ;
//         for(int i =0; i<r; i++){
//             for(int j =0;j<c;j++){
//                 printf("enter %d row and %d column's element\n",i,j);
//                 scanf("%d",&a[i][j]);
//             }
//         }
//         printf("\n");
        // for(int i =0; i<r; i++){
        //     for(int j =0;j<c;j++){
        //         printf("%d ",a[i][j]);
        //     }
        //     printf("\n");
        // }
//         int sum=0;
//         for(int i=0;i<r;i++){       //if you want sum from specific elemet to column
//             for(int j=0;j<c;j++){   // then change only the value of i =? and j =?
//                 sum+=a[i][j];       // in this loop only
//             }
//         }
//         printf(" the sum of elements%d ",sum);




// write a program to print the row no. having the maximum sum 
// in a given matrix



// #include<limits.h>
// int main(){
//     int a[4][4] = {3,4,5,6,3,5,7,8,9,3,4,5,6,7,2,3};
//     for(int i =0; i<4; i++){
//         for(int j =0;j<4;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     int max_sum = INT_MIN;
//     int max_row = INT_MIN;
//     for (int i=0; i<=3 ; i++){
//         int sum =0;
//         for(int j= 0 ; j<=3 ; j++){  
//             sum += a[i][j];
//             if(j==3)
//             printf("the sum of %d row is %d  \n",i,sum);
//         }
//         if(sum > max_sum){
//             max_sum = sum;
//             max_row =i;
//         }
//     }
//     printf(" max sum is : %d\n ", max_sum);
//     printf(" row with max sum is : %d\n ", max_row);



//to print transpose of the matrix


// note :- chnge only i and j


// int main(){
//     int a[4][2] = {3,4,5,6,3,5,7,8};
//     for(int i =0; i<4; i++){
//         for(int j =0;j<2;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i =0; i<2; i++){      //i<4 ke bdle i<2
//         for(int j =0;j<4;j++){    //j<2 ke bdl j<4
           
//             printf("%d ",a[j][i]);   // replace i to j and j to i
//         }
//         printf("\n");
//     }


  
// glt hai rotation by 90 degree
//ratate matrix by 90 degree


//step 1: transpose of matrix
//step 2: reverse each row



// int main(){
//     int a[4][4] = {1,2,3,4,5,6,7,8,8,7,6,5,4,3,2,1};
//     for(int i =0; i<4; i++){
//         for(int j =0;j<4;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//    printf("\n");
//     for(int i =0; i<4; i++){      //i<4 ke bdle i<2
//         for(int j =0;j<4;j++){    //j<2 ke bdl j<4 
//             printf("%d ",a[j][i]);   // replace i to j and j to i
//         }
//         printf("\n");
//     }
//     //rotate
//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             int temp =a[i][j];
//             a[i][j] =a[i][4-1-j];
//             a[i][4-1-j] = temp;
//         } 
//         }
//      printf("\n");
//     for(int i=0;i<4;i++){ 
//       for(int j=0;j<4;j++){
//          printf("%d ",a[i][j]);
//          }
//          printf("\n");
//          }



// multiplication of two matrices

// very important 

// int main(){
//    int  a[3][2] ={1,2,3,4,5,6,};
//     int b[2][4] ={1,2,3,4,5,6,7,8};
//     int res[3][4];
//     int cr = 2;  
//     for(int i = 0;i<3;i++){
//         for(int j = 0; j<4; j++){
//             //i row of a[][]and j column of b[][]
//             // (a[i][0],a[i][1],a[i][2]....)*(b[0][j],b[1][j],b[2][j]..)
//             res[i][j] = 0;
//            for(int k=0; k<cr ;k++){
//             res[i][j] += a[i][k]*b[k][j];
//            }
//         }
//     }
//     for(int i = 0;i<3;i++){
//         for(int j = 0; j<4; j++){
//            printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }



//wave print
//vedio and wave 2 print

// int main(){
//     int m;
//     printf("enter no. of row : ");
//     scanf("%d",&m);
//     int n;
//     printf("enter no. of column : ");
//     scanf("%d",&n);
//     int a[m][n];
//     printf("\n enter elements of matrix : ");
//     for(int i =0;i<m;i++){
//         for(int j =0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i =0;i<m;i++){
//         if(i%2==0){
//         for(int j =0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//     }
//     else{
//         for(int j=n-1;j>=0;j--){
//             printf("%d ",a[i][j]);
//         }
//     }
//     printf("\n");
//     }




//given an n*m matrix 'a ' , print all elements of the matrix
//in spiral order



int main(){
    return 0;
}