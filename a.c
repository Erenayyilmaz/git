#include <stdio.h>

void fonk(int a()){
    printf("hello word");


}

int a(){
    return 4;
}

int as(int a,int b,char c){
    return 9;
}

int main(void){

    int a=7,b =6;
    char c='f';


    int* x(int,int,char);

    x= &as(a,b ,c);
}