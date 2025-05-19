#include <stdio.h>
int main(){

    // int n;
    // printf("enter no.of row : ");
    // scanf("%d",&n);
    // int nst=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k=1;k<=nst;k++){
    //         printf("*");
    //     }
    //     nst+=2;
    //     printf("\n");
    // }





    //  int n;
    // printf("enter no.of row : ");
    // scanf("%d",&n);
    // int nst=1;
    // for(int i=1;i<=n;i++){
    //      int a=1;
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k=1;k<=nst;k++){
    //          int d=64+a;
    //         char ch=(char)d;
    //         printf("%c",d);
    //         a++;
    //     }
    //     nst+=2;
    //     printf("\n");
    // }




//  int n;
//  printf("enter no.of row : ");
//  scanf("%d",&n); 
//  for(int i =1;i<=n;i++){
//     for(int j=1;j<=i;j++)
//     printf("*");
//     printf("\n");
//  }




   
//    int n,i;
//    printf(" enter no. of row : ");
//    scanf("%d",&n);
//    int nst=1;
//    int nsp=n/2;
//    int ml=n/2+1;
//    for(i=1;i<=n;i++){
//     for(int j=1;j<=nsp;j++){
//         printf(" ");
//     }
//     for(int k=1;k<=nst;k++){
//         printf("*");
//     }
//     if(i<ml){
//         nsp--;
//         nst+=2;
//     }
//     else{
//         nsp++;
//         nst-=2;
//     }
//     printf("\n");
//    }



      
      
      
    // int n;
    // printf("enter no. of lines :  ");
    // scanf("%d",&n);
    // for(int i=1;i<=2*n+1;i++){
    //     printf("*");
    // }
    // printf("\n");
    // int nst=n,nsp=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=nst;j++){
    //         printf("*");
    //     }
    //     for(int k=1;k<=nsp;k++){
    //         printf(" ");
    //     }
    //       for(int j=1;j<=nst;j++){
    //         printf("*");
    //     }
    //     nst--;
    //     nsp+=2;
    //     printf("\n");
    // }  












    //  int n;
    // printf("enter no. of lines :  ");
    // scanf("%d",&n);
    // for(int i=1;i<=2*n+1;i++){
    //     printf("%d",i);
    // }
    // printf("\n");
    // int nst=n,nsp=1;
    // for(int i=1;i<=n;i++){
    //     int a=1;
    //     for(int j=1;j<=nst;j++){
    //         printf("%d",a);
    //      a++;
    //      }
    //     for(int k=1;k<=nsp;k++){
    //         printf(" ");
    //      a++;
    //      }
    //       for(int j=1;j<=nst;j++){
    //         printf("%d",a);
    //      a++;
    //      }
    //     nst--;
    //     nsp+=2;
    //     printf("\n");
   // }  




// check this for  
// 1234321
// 123 321
// 12   21
// 1     1




    // int n; 
    // printf("enter no. of lines : ");
    // scanf("%d",&n);
    // int nsp=1,nst=n;
    // int d=-1;
    // int ap;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=nst-i+1;j++){
    //         printf("%d",j);
    //     }
    //     for(int k=1;k<=nsp;k++){
    //         printf(" ");
    //     }
    //     for(int l=1;l=nst;l++){
    //       ap=nst+(l-1)*d;
    //       printf("%d",ap);
    //     }
    //     nsp+=2;
    //     printf("\n");
    // }  






    int n;
    printf("write max no. in pattern :");
    scanf("%d",&n);
    int min=0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            if(i>n) a=2*n-i;
            int b=j;
            if(b>n) b=2*n-j;
            if(a<b) min=a;
            else min =b;
            printf("%d",n+1-min);
        }
        printf("\n");
    }
    return 0;
}









 