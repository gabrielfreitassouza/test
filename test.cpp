namespace calculadora{
    auto soma (int a, int b){
        return a+b;
    }
    auto substacao(int a, int b){
        return a-b;
    }
}
#include <iostream>
using namespace calculadora;
using namespace std;
int a=10,b=10;
int main(){
   a=10;
   b=10;
  std::cout <<"Digite um numero: " << std::endl;
  std::cin >> ::a;
  std::cout <<"Digite outro numero: " << std::endl;
  std::cin >> b;
  std::cout <<"Soma: " << soma(::a,b) << std::endl;
  std::cout <<"Subtração: "<< substacao(a,b) << std::endl;
  return 0;
}