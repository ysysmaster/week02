#include <stdio.h>
#include <stdlib.h>
int main(){
    int h, m;
    int num;
    scanf("%d %d\n", &h, &m);
    scanf("%d", &num);
    h += num/60; //num을 60으로 나눈 몫을 더함 : 시간
    m += num%60; //num을 60으로 나눈 나머지를 더함 : 분
    if(m>=60){  //60분을 넘어가면 1시간 더하고 60분을 뺌
        h++;
        m -= 60;
    }
    if(h>=24){ //24시를 넘어가면 24시간을 뺌
        h-=24;
    
    }
    printf("%d %d", h, m); //출력


    
    return 0;
}