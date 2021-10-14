#include <stdio.h>

int main(){

int a,b,c,d ,e,f,g,h, i,j,k,l ,m,n,o,p;

printf("第一行：\n");
scanf("%d %d %d %d",&a,&b,&c,&d);

printf("第二行：\n");
scanf("%d %d %d %d",&e,&f,&g,&h);


printf("第三行：\n");
scanf("%d %d %d %d",&i,&j,&k,&l);


printf("第四行：\n");
scanf("%d %d %d %d",&m,&n,&o,&p);

int ans;
ans = a*(f*k*p + g*l*n + h*j*o - h*k*n - f*l*o - g*j*p) - b*(e*k*p + g*l*m + h*i*o - h*k*m - l*o*e - g*i*p) + c*(e*j*p + f*l*m + h*i*n - h*j*m - f*i*p - e*l*n) - d*(e*j*o + f*k*m + g*i*n - g*j*m - f*i*o - e*k*n);

printf("该四阶行列式等于%d",ans);

return 0;
}
