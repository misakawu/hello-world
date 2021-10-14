#include <stdio.h>

int main(){

int a,b,c,d,e,f,g,h,i;
printf("第一行：\n");
scanf("%d %d %d",&a,&b,&c);

printf("第二行：\n");
scanf("%d %d %d",&d,&e,&f);

printf("第三行：\n");
scanf("%d %d %d",&g,&h,&i);

int ans;
	ans = a*e*i + b*f*g + c*d*h - c*e*g - b*d*i - a*f*h;
	
printf("该三阶行列式等于%d",ans);

return 0;




}
