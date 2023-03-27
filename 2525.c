#include <stdio.h>
#include <stdlib.h>
int main(){
    int h, m;
    int num;
    scanf("%d %d\n", &h, &m);
    scanf("%d", &num);
    h += num/60;
    m += num%60;
    if(m>=60){
        h++;
        m -= 60;
    }
    if(h>=24){
        h-=24;
    
    }
    printf("%d %d", h, m);


    
    return 0;
}