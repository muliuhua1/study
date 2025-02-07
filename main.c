#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b=a;//备份a
    int i;//逆置后的数
    while(a){
        i =i * 10 + a % 10;
        a = a/10;
    }
    if(b == i){
        printf("梁远航");
    }else{
        printf("不是对称数");
    }
}
