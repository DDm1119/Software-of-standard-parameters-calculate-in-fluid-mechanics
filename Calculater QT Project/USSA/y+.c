#include <stdio.h>
#include <math.h>

typedef	struct //����ṹ�� 
	{
	double deltas;
	double Rex;
 	
	}stu;

stu getStu(double a,double b )  //����main���������������ò��� 
{
	
	stu result;  //������� 
	result.deltas=a;
	result.Rex=b;
	return result;	//����ֵ 
}


int main()
{
	double Uinfinite, rho, mu, L, Y ; 
	double Rex,Cf,tauwall,Ufric, deltas;
	printf("��ֱ�����Uinfinite,rho,mu,L,Y+\n�ÿո����\nȫ��������ɺ󰴻س���\n�����س�Ҳ��\n");
	scanf("%lf",&Uinfinite);  
	scanf("%lf",&rho);
	scanf("%lf",&mu);
	scanf("%lf",&L);
	scanf("%lf",&Y);
 
Rex = rho * Uinfinite * L / mu*1.0;
Cf = 0.026 / pow(Rex ,1.0 / 7);
tauwall = Cf * rho *pow (Uinfinite , 2) / 2.0;
Ufric =pow( (tauwall / rho), 0.5);
deltas = Y *mu / (Ufric * rho);	 
 
	stu test=getStu(deltas,Rex);//��stu�� �������� test 
	printf("deltas:%.2f\nRex:%.2f\n",test.deltas,test.Rex);
	return 0;
 } 
