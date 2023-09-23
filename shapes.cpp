
//using namespace std is bad practice because it might cause identifier name conflicts, 

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void print_rectangle(int h,int b) {
  for(int i =0; i<h ; i++){
    for(int j=0; j<b; j++){
      std::cout<<"*";
    }
    std::cout << std::endl;
  }
}

//triangle using only height
void print_triangle(int h) {
  for(int i=1; i<=h ; i++){
    for(int j=0; j<i; j++){
      std::cout<<"*";
    }
    std::cout << std::endl;
  }
}

void print_triangle_with_base(int h, int b) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < b; j++) {
            if (j <= i) {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
}

void print_rev_triangle(int h,int b) {
  for(int i =0; i<h ; i++){
    b=b-1;
    for(int j=b; j>0; j--){
      std::cout<<"*";
    }
    std::cout << std::endl;
  }
}

int main() {
    int h=5, b=6;
    print_rectangle(h,b);
    std::cout << std::endl;
    print_triangle(h);
    std::cout << std::endl;
    print_rev_triangle(h,b);
    std::cout << std::endl;
    print_triangle_with_base(h,b);
    return 0;
}

