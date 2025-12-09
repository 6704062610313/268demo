#include<stdio.h>
int main(){
	int mid,final,q1,q2,lab,sit;
	scanf("%d %d %d %d %d %d",&mid,&final,&q1,&q2,&lab,&sit);
	float m=(mid*30)/100;
	float f=(final*35)/120;
	float qq1=(q1*12)/60;
	float qq2=(q2*13)/60;
	float l=(lab*5)/16;
	float s=(sit*5)/16;
	printf("%10s=%8d => %5.2f\n%10s=%8d => %5.2f\n","Mid",mid,m,"Final",final,f);
	printf("%10s=%8d => %5.2f\n%10s=%8d => %5.2f\n","Q1",q1,qq1,"Q2",q2,qq2);
	printf("%10s=%8d => %5.2f\n%10s=%8d => %5.2f\n","lab",lab,l,"sit",sit,s);
	float t=(m+f+qq1+qq2+l+s);	
	printf("*****%5.2f******",t);
}
