#include <iostream>
using namespace std;



double area(int a){
  return 3.1415* a *a;
}

int area(int a ,int b, int c){
  return a * b * 0.5;
}

int area(int a, int b){
  return a * b;
}


int main() {
  cout<<"Product of triangle with bases 2, 1, and height 4: "<< area(4,2)<<endl;
cout<<"Product of square : "<<area(10,10)<<endl;
cout<<"Product of circle: "<<area(4)<<endl;
}