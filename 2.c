#include <stdio.h>
#include <math.h>

double an(int n){

    int r = 1;
    for (int i = 2; i <= n; ++i){
        r *= i;
    }
    return r;            
}

double rad(double x){
    double s = 1, r;
    int i;
    for(i = 1;;i+=1){
        r = (pow(-1, i)*pow(x, 2*i))/an(i);
        if (r < 0.000001){
            return s;
        }
        s += r
    
    }

}

int main(){
    double chislo;
    int n;
    scanf("%lf", &chislo);
    printf("%lf", rad(chislo));
    
}
