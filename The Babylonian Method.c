#include <stdio.h>
int main(){
	double arr[100], s;
	int m;
	arr[0] = 1;
	printf("ã�� ���� 0 ���� ū ������ �Է��ϼ��� : ");
	scanf("%lf", &s);
	printf("�� �� �ݺ� �ұ��?");
	scanf("%d", &m);
	for(int i = 1;i <= m;i++){
		arr[i] = (arr[i-1] + (s / (arr[i-1]))) / 2;
		printf("%d ��° : %lf\n", i, arr[i]);
	} 
	printf("��� : %lf",arr[m]); 
}
