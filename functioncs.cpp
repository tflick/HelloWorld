//
// Created by Tobias Flick on 23.06.18.
//

#include "functioncs.h"
#include <math.h>

double mandelbrot(complex& c, double max_betrag, int max_iter){
    double remain_iter = max_iter;
    double anzahl;

    complex zs,zn;
    double a,b;
    while ((zn.betr()<=max_betrag) && (remain_iter > 0)) {
        a = zn.getreal();
        b = zn.getima();
        zs = zn.square();
        zn = c.add(zs);
        //zn.print();
        remain_iter = remain_iter - 1;
    }
    anzahl = max_iter-remain_iter;
    return anzahl;
}