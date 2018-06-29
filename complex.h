//
// Created by Tobias Flick on 23.06.18.
//

#ifndef HELLOWORLD_COMPLEX_H
#define HELLOWORLD_COMPLEX_H


class complex {
    double real,ima;
public:
    // Constructors
    complex();
    complex(double a, double b);
    complex(const complex& orig);
    //Destructor
    virtual ~complex();

    //Methods
    //Getter-Methods
    double getreal();
    double getima();

    //Setter-Methods
    int setreal(double a);
    int setima(double a);

    //Print Methods
    void print();

    //Calculation Methods
    double betr();
    complex square();
    complex add(complex& a);

private:



};


#endif //HELLOWORLD_COMPLEX_H
