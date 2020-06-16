#include<iostream>
#include<string>


int main(){
    char Input1;
    char Input2;

    std::cin>>Input1;
    std::cin>>Input2;

    std::cout<<Input1<<"は"<<Input2<<"と仲良しだ"<<std::endl;
    std::cout<<Input1<<"は"<<Input2<<"と仲が悪い"<<std::endl;
    std::cout<<Input1<<"と"<<Input2<<"は表面的に仲が良く見えるが実際はわからない"<<std::endl;

    char Input3;
    std::cin>>Input3;
    
    std::cout<<Input1<<"は"<<Input2<<"と"<<Input3<<"と三角関係にある"<<std::endl;

}