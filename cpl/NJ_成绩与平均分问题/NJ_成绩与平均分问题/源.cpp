/*�ɼ���ƽ��������
��������
   ��д����ReadScore()��Average()������ĳ��ѧ��ĳ�ſεĳɼ�����಻����40�ˣ���
   ������Ϊ��ֵʱ����ʾ����������ú������ͳ�Ƴɼ�����ƽ���ֵ�ѧ��������
����
   �������ɸ���������������֮����һ���ո������
���
   ����ɼ�����ƽ���ֵ�ѧ��������
����ʾ��
   70 90 58 -5
���ʾ��
   1
���ݷ�Χ
   ����������Ϊint��Χ������
*/
#include<stdio.h>
int a[22];
int M;
int main() {
	int  i, M=0 ;
	for (i = 0;; i++) {
		scanf("%d", &a[i]);
		if (a[i] < 0) {
			break;
		}
		M++;
	}
	int ReadScore(int b[], int N);
	int Num = ReadScore(a, M);
	printf("%d\n", Num);
	
	return 0;

}
int ReadScore(int b[],int N) {
	int a = 0;
	int Average(int arr[], int N);
	int ave = Average(b, N);
	for (int i = 0; i < N; i++) {
		if (b[i] > ave) {
			a++;
		}
	}
	return a;
}
int Average(int arr[],int N) {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}
	int average = sum / N;
	return average;
}