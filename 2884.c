#include <stdio.h>

int main(){
    int H = 0, M = 0;
    scanf("%d %d",&H, &M);
    if(M >= 45){ 
        printf("%d %d", H, M-45);
    }
    else
    {
        M = 60 - 45 + M;
        H -=1;
        if (H < 0)
            H = 24 + H;
        printf("%d %d", H, M);
    }
}   