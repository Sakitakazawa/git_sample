#include<iostream>
int sum(int,int);



int main(){
    int a,b;
    a=3;
    b=5;
    std::cout<<sum(a,b)<<std::endl;
    return 0;
}

int sum(int a,int b){
    return a+b;
    
}