#include "helper.h"
#include <math.h>
//Вообще большинство операций проходит на qml, однако они являются интерфейсными. Для реализации функций управления некоторым телом
//Использовал С++, и то лишь для расчёта, например, вектора движения тела, его поворот в различных ситуациях, а также реакцию на столкновение с другим объектом.
vector vect(double x, double y){

    if (x==y && x==0)
    {
        vector exam;
        exam.x1 = 0;
        exam.x2 = 0;
        return exam;
    }
    double x2 = x/(sqrt(x*x+y*y));
    double y2 = y/(sqrt(x*x+y*y));
vector example;

example.x1 = x2;
example.x2 = y2;

return example;

}


double atang(double x, double y){

    if (x==0)
        return 0;

    double tan = (y/x);
    double atang = atan(tan)*180/M_PI-90;
    if ((x > 0 && y < 0) || (x>0 && y>0))
        atang +=180;

    return atang;
}

double reject(double x){


double grad = 0;    

    if (x > 0)
    {
        grad = 180 - x;
    }
    if (x < 0)
    {
        grad = -180 - x;
    }

    if (x==0 || x == 90 || x ==-90)
        grad = 180;

    return grad;
}

vector stolk(double x, double y, double reverse){
    double rasst;
    vector example;

    rasst = sqrt(x*x+y*y);
    if (rasst <= 50){
        example.x1 = true;
        example.x2 = reverse + 180;
    }
    else {
        example.x1 = false;
        example.x2 = reverse;
    }


    return example;
}

