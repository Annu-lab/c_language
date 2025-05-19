#include<stdio.h>
// #include<limits.h>
// int main(){
//     struct  pokemon{  //user defined data type
//         int hp;
//         int speed;
//         int attack;
//         char tier;  //S,A,B,C,D
//     };
//     struct pokemon pikachu;
     
//     printf("enter attack of pikachu : ");
//     scanf("%d",&pikachu.attack);
//     // pikachu.attack = 60;
//     pikachu.hp = 50;
//     pikachu.speed = 100;
//     pikachu.tier = 'A';

//     printf("%d",pikachu.attack);

//     struct pokemon charizad;
//     charizad.attack = 130;
//     charizad.hp = 80;
//     charizad.speed = 80;
//     charizad.tier = 's';



// arrray of structure


#include<string.h>
// int main(){
//     typedef struct pokemon{
//         int hp;
//         int speed;
//         int attack;
//         char tier;
//         char name[15];
//     } pokemon;

//     pokemon arr[3]; //arr[0],arr[1],.....
//     strcpy(arr[0].name,"pikachu");
//     arr[0].attack =50;
//     arr[0].hp = 100;
//     arr[0].speed = 30;
//     arr[0].tier = 'A';

//     strcpy(arr[1].name,"newtwo");
//     arr[1].attack =150;
//     arr[1].hp = 100;
//     arr[1].speed = 130;
//     arr[1].tier = 's';

//     strcpy(arr[2].name,"charizard");
//     arr[2].attack =50;
//     arr[2].hp = 30;
//     arr[2].speed = 80;
//     arr[2].tier = 'B';


//     for(int i=0;i<=2;i++){
//         printf("%s\n",arr[i].name);
//         printf("attack : %d\n",arr[i].attack);
//         printf("hp : %d\n",arr[i].hp);
//         printf("speed : %d\n",arr[i].speed);
//         printf("tier : %c\n",arr[i].tier);
//     }




//feature of structure

 #include<stdbool.h>
// int main(){
//     typedef struct pokemon{
//                 int hp;
//                 int speed;
//                 int attack;
//                 char tier;
//                 char name[15];
//             } pokemon;
//             pokemon a,b,c;

//             a.attack =100;
//             a.hp = 50;
//             strcpy(a.name, "pikachu");
//             a.speed =100;
//             a.tier ='a';


//             b.attack =200;
//             b.hp = 60;
//             strcpy(b.name, "newtwo");
//             b.speed =100;
//             b.tier ='s';
//             // //b=a;
//             // // all the features of a will get also copied
//             printf(" attack : %d\n",b.attack);
//             // if(a.speed=b.speed)    //we can compare all the features together by if
//             // printf("the speed are same");
//             // else("the speed are different");

//             //to compare whole string
//             bool flag = true;
//             if(a.attack!=b.attack) flag = false;
//             if(a.hp!=b.hp) flag = false;
//             if(a.name!=b.name) flag = false;
//             if(a.speed!=b.speed) flag = false;
//             if(a.tier!=b.attack) flag = false;
//             if(flag==true) 
//             printf("the pokimons are same");
//             else
//             printf("the pokimons are different");


//global declaration in structure 


//     typedef struct pokemon{
//      int hp;
//      int speed;
//      int attack;
//      char tier;
//      char name[15];
//     } pokemon;
//    void fun(pokemon p){
//        printf("%d",p.hp);
//        return;
//    }
//    int main(){
//        pokemon pikachu;
//        pikachu.hp = 60;
//        //printf("%d",pikachu.hp);
//        fun(pikachu);




// structure pointer


// typedef struct pokemon{
//     int hp;
//     int speed ;
//     int attack ;
//     int teir;
//     char name[15];
// } pokemon ;

// int main(){
//     pokemon pikachu;
//     pikachu.hp = 60;
//     pikachu.attack = 70;
//     pikachu.speed = 100;
//     pikachu.teir = 'a';
//     strcpy(pikachu.name,"pikachu");
//     pokemon* x =&pikachu;
//     printf("%p\n",&pikachu.speed);
//     printf("%p\n",&pikachu.hp);
//     printf("%p\n",&pikachu.attack);
//     printf("%p\n",&pikachu.teir);
//     printf("%p\n",pikachu.name);
//     printf("%p\n",x);



//create a structure 'person' having attributes as age and weight .
//access its structure variable using pointers.



typedef struct person{
    int age ;
    float weight;
} person ;
void change(person* p){
    //(*p).age = 30;  //(*x).something = x-> something
    p->age = 30;
    p->weight = 50.5;
    return;
}
int main(){
    person aman;    //person aman = {20,45.7} order wise hi rhkhna hai
    aman.age = 20;   
    aman.weight = 45.7;
    printf("%d\n",aman.age);
    printf("%f\n",aman.weight);
    change( &aman);
    printf("%d\n",aman.age);
    printf("%f\n",aman.weight);
    return 0;
}
//structure are pass by value 