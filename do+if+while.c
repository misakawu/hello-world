#include <stdio.h>

int main (){

int a,b,sum;
sum = 0;
	do {
		printf("输入一个int：\n"); scanf("%d",&a);
sum += a;

	printf("求和：%d \n",sum); 
	printf("是否继续循环?(y=1/n=0)\n"); scanf("%d",&b);

if (b != 0&&1 ){

printf("请输入0（放弃）或1（继续）");
scanf("%d",&b);

while (b != 0&&1) {
printf("请输入0（放弃）或1（继续）");
scanf("%d",&b);
break;
}

}

} while (b == 1);

return 0;
}
