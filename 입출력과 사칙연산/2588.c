 #include <stdio.h>

int main(){
    int A, B, tmp, h, t, o;

    scanf("%d", &A);
    scanf("%d", &B);
    tmp = B;
    h = B / 100;
    tmp %= 100;
    t = tmp / 10;
    tmp %= 10;
    o = tmp;

    printf("%d\n", A*o);
    printf("%d\n", A*t);
    printf("%d\n", A*h);
    printf("%d", A*B);
}