#include <stdio.h>

int main(){
    int one, two, three;
    int result=0;
    scanf("%d %d %d", &one, &two, &three);
    
    if(one == two && one == three)
        result = 10000 + one * 1000;
    else if (one == two)
        result = 1000 + one*100;
    else if (one == three)
        result = 1000 + one*100;
    else if (two == three)
        result = 1000 + two*100;
    else{
        if(one > two && one > three)
            result = one * 100;
        else if(two > one && two > three)
            result = two * 100;
        else
            result = three * 100;
    }
    printf("%d", result);
}