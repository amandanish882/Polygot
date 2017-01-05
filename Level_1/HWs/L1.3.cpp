
#include <stdio.h>
#include <iostream>
#include <bitset>

void exercise2c();
void exercise2cpp();
void exercise4();
void exercise6();

int main(int argc, char const *argv[]) {
  //exercise2c();
  // exercise4();
  //exercise2cpp();
  exercise6();
  return 0;
}

void exercise2c(){
  double base=0.0,height=0.0;
  printf("Enter base ");
  scanf("%lf",&base );
  printf("Enter height ");
  scanf("%lf",&height );
  printf("Surface of triangle %f\n",base* height * 0.5);
}
void exercise2cpp(){
  using std::cout;
  using std::cin;
  using std::endl;

  double base=0.0,height=0.0;
  cout<<"Enter base ";
  cin>>base;
  cout<<"Enter height ";
  cin>>height;
  cout<<"Surface of triangle "<<base* height * 0.5<<endl;

}
void exercise4(){
  int tjmarried =0;
  int jkmarried =1;
  printf("%s\n", tjmarried ? "Married":"Not married");
  std::cout<<(jkmarried ? "Married":"Not married")<<std::endl;
}

void exercise6(){
  int a = 2;
    std::cout << "a = " << std::bitset<8>(a)  << std::endl;
    a = a <<1;
    std::cout << "a = " << std::bitset<8>(a)  << std::endl;

}
