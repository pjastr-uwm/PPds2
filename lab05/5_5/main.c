#include <stdio.h>
int main() {
    float a = 10.5;  // a =10.5 , b = , c =
    float b = 2.0;   // a =10.5 , b =2 , c =
    float c = 0.5;   // a =10.5 , b =2 , c =0.5
    a = a / b;       // a =5.25 , b =2 , c =0.5
    b = b * 3;       // a =5.25 , b =6 , c =0.5
    c = a + b;       // a =6.25 , b =6 , c =11.25
    a = c - a;       // a =6 , b =6 , c =11.25
    b = b / 2;       // a =6 , b =3 , c =11.25
    c = a * b;       // a =6 , b =3 , c =18
    a = c + 0.5;     // a =18.5 , b =3 , c =18
    b = a - c;       // a =18.5 , b =0.5 , c =18
    c = a / b;       // a =18.5 , b =0.5 , c =37
    return 0;
}
