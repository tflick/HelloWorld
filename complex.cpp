//
// Created by Tobias Flick on 23.06.18.
//

#include "complex.h"
#include <iostream>
#include <math.h>

complex::complex() {
    real = 0;
    ima = 0;
}
complex::complex(double a, double b){
    real = a;
    ima = b;
}

complex::complex(const complex& orig) {
}

//Methods
//Getter-Methods
double complex::getreal(){
    return real;
}
double complex::getima(){
    return ima;
}

//Setter-Methods
int complex::setreal(double a){
    real = a;
    return 0;
}
int complex::setima(double a){
    ima = a;
    return 0;
}

//Print Methods
void complex::print(){
    if (ima >=0) {std::cout << real << " + i " << ima << std::endl;}
    else {std::cout << real << " - i " << (-1)*ima << std::endl;}
}

//Calculation Methods
double complex::betr(){
    return sqrt(pow(real,2)+pow(ima,2));
}

complex complex::square(){
    complex number((pow(real,2)-pow(ima,2)), 2*real*ima);
    return number;
}

complex complex::add(complex& a){
    complex number(real+a.getreal(), ima+a.getima());
    return number;
}

complex::~complex() {
}
