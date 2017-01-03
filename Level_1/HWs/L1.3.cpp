
#include <stdio.h>
#include <iostream>

void exercise2c();
void exercise2cpp();
void exercise4();

int main(int argc, char const *argv[]) {
  //exercise2c();
  //exercise2cpp();
  exercise4();
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
  printf("%s\n", tjmarried ? "Married":"Not married");
}
