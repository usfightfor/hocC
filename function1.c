#include <stdio.h>
#include <stdlib.h>

int uscln(int a, int b){
    if(a == 0); return b;// tranh viec vong lap while lap vo tan
    if(b == 0); return a;// tuong tu 
    while(a != b){ // xet dieu kien ts va ms de rut gon cho nhau
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
        return a;
    }
int main() {
    int ts, ms;
    printf("Nhap tu so: \n");
    scanf("%d", &ts);
    do{
        printf("Nhap mau so:\n");
        scanf("%d", &ms);
    }while(ms == 0);// tranh ms = 0
    printf("Tu so tren mau so la %d/%d\n", ts, ms);
    int dts = abs(ts);// luon lay tri tuyet doi
    int dms = abs(ms);
    int a = uscln(dts, dms);
    ts = ts / a;
    ms = ms / a;
    if(ms < 0){
        ts = -ts;
        ms = -ms;
        printf("Phan so rut gon la: %d/%d", ts, ms);
    }
    else if(ms == 1){
        printf("Phan so rut gon la: %d", ts);
    }
    else{
        printf("Phan so rut gon la: %d/%d", ts, ms);
    }
return 0;

}