#include <stdio.h>

int main(){
    int h,m,cook;
    int result_h, result_m;
    scanf("%d %d",&h, &m);
    scanf("%d",&cook);
    
    if(m+cook/60 > 0){
        result_h = h + (m+cook)/60;
        result_m = m+cook - 60*((m+cook)/60);
        if (result_h > 23)
        {
            result_h -= 24;
        }
        
    }   
    else{
        result_h = h;
        result_m = m + cook;
    }
    printf("%d %d", result_h, result_m);
}