#ifndef HELPER_H
#define HELPER_H

typedef struct vect{
 double x1, x2;
}vector;

vector vect(double x, double y);

    double atang(double x,double y);

    double reject(double x);

    vector stolk(double x, double y, double reverse);

#endif // HELPER_H
