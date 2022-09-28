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
    double s = 1;
    double y = pow(x, 2);
    for(int i = 1; i < n; i+=1){
        s += (s* pow(-1, i)*y)/i;
        
        
    }
    return s;
}

int main(){
    double chislo;
    int n;
    scanf("%lf", &chislo);
    printf("%lf", rad(chislo));
    
}
