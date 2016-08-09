#include<stdio.h>

struct Nueros
{
    int A;
    int B;
    int C;
    int D;
    int F;
    int G;

};

void operaciones()
{
    struct Nueros Num;

    Num.A = 5;
    Num.B = 5;
    Num.C = 0;
    Num.D = 5;
    Num.F = 5;
    Num.G = 0;


    Num.C = Num.B + Num.A;
    Num.G = Num.D + Num.F;
    printf("\nSUmas de a+b= %d",Num.C);
    printf("\nSUmas de a+b= %d",Num.G);
}

 int main ()
 {

     operaciones();
     return 0;

 }
