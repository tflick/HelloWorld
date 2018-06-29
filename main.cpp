#include <iostream>
#include <cstdlib>
#include <string>
#include "complex.h"
#include "functioncs.h"

// root
#include "TASImage.h"

using namespace std;

int main() {


    double betrag;
    string input;
    complex compl1, compl2, compl3;

    const int width=800;
    double schritte, max_schritte;
    double i,j;
    double max_abs;
    double* v= new double[width*width];

    TASImage* img = new TASImage(width,width);

    cout << "Mandelbrotmenge generieren" << endl;

    max_abs = 3;
    max_schritte = 256.;
    int idx=0;
    int idy=0;

    for (i=-2.0; i<1.995; i=i+0.005){
        idy = 0;
        for (j=-2.0; j<1.995; j=j+0.005){
            compl1.setreal(i);
            compl1.setima(j);
            schritte = mandelbrot(compl1, max_abs, max_schritte);
            long index = idy*width+idx;

//            cout << "i: " << i << ", j: " << j << endl;
//            cout << "idx: " << idx << ", idy: "<< idy <<endl;
//            cout << "index: " << index << endl;
            v[index] = schritte;
            idy++;
        }
        idx++;
    }

    img->SetImage(v,width,width);
    img->WriteImage("mandelbrot.png");

    return 0;
}