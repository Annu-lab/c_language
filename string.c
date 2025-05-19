//strings = strings are as like array difference is only that array 
//contains int type or float type etc but strings are for char type .
//by using string we can print character.



#include<stdio.h>
// int main(){
//     char a[5]={'a','b','c','d','e'};     
//     printf("%c",a[1]);


//null character = '\0' this is a single charater ASCII Value is 0.
//ASCII value of 0 is 48


// int main(){
//     char a[]={'a','b','c','d','e','\0'};
//     int i=0;
//     while(a[i]!='\0'){
//         printf("%c",a[i]);
//         i++;
//     }


// other type of initialisation


// int main(){
//     char a[]="hello Annu";     // char a[]="hello Annu\0"; agr esme '\0' na bhi le to by the fault le lega 
//     int i=0;                   //char a[5]={'a','b','c','d','e'};     isme by the fault nhi lega
//     while(i<=10){             //while(a[i]!='\0'){
//         printf("%c",a[i]);
//         i++;
//     }




//printf("%d"a[i]);
//printf("%d"i[a]);      or *(i+a)  or *(a+i) all are same




// input and output of string without loop
// for string %s is used to run and #include<string.h>


// #include<string.h>
// int main(){
//     char a[]="hello Annu";   
//     printf("%s\n",a);
//     //in the place of printf("%s\n",a); we can also use  puts(a);
//     puts(a);    // puts give automatically a \n
    


// taking input from keyboard



#include<string.h>
// int main(){
//     char a[90];  // size should be greater tha input
//     printf("enter you input in charater : ");
//     //scanf("%s",a);   // using scanf only 1st word is considered , or after the space output will not print
//    // scanf("%[^\n]s",a);    //instead of  scanf("%s",a); we can use scanf("%[^\n]s",a); to print full sentence
//     // but this is leanthy 
//     // other method is to use gets(a)
//     gets(a);
//     printf("your input is : %s\n",a);
// //  to find no. of character
//     int size =0;
//     int i = 0;
//     while(a[i]!='\0'){
//         size++;
//         i++;
//     }
//     printf("%d",size);



// to reverse character

// int main(){
//     char a[90];  // size should be greater tha input
//     printf("enter you input in charater : ");
//     //scanf("%s",a);   // using scanf only 1st word is considered , or after the space output will not print
//    // scanf("%[^\n]s",a);    //instead of  scanf("%s",a); we can use scanf("%[^\n]s",a); to print full sentence
//     // but this is leanthy 
//     // other method is to use gets(a)
//     gets(a);
//     printf("your input is : %s\n",a);
//     int size =0;
//     int k = 0;
//     while(a[k]!='\0'){
//         size++;
//         k++;
//     }
//     printf("the no. of character used %d",size);
//     printf("\nthe reverse of your text is : ");
//     for(int i=0,j=size-1;i<=j;i++,j--){
//         char temp = a[i];
//         a[i]=a[j];
//         a[j]=temp;
//     }
//     puts(a);




// string with pointer

// int main(){
//     char a[] = "college wallah";
//     char* ptr = &a[0];
//     // printf("%p\n",ptr);
//     // printf("%p",&a);
//     int i=0;
//     while (*ptr!='\0'){
//         printf("%c",*ptr);
//         ptr++;
//         i++;
//     }


//inserting a new character



int main(){
    char str [20] = "college";
    printf("%s\n",str);
    //2nd index pe 'l'
    for(int i=6;i>=2;i--){
        str[i+1] = str[i];
    }
    str[2] = 'k';
    printf("%s",str);
   return 0;
}