/*#include <stdio.h>
int main(){
 	int a[10]={1,3,3,2,5,1,1,5,6,6};
 	int i,j,k,x=10;
 	for(i=0;i<x;i++){
		  for(j=i+1;j<x;j++){
   			if(a[i]==a[j]){
    			x--;
    		for(k=j;k<x;k++){
     			a[k]=a[k+1];
    			}
    			j--;
   			}
  		}
 	}
 	for(i=0;i<x;i++)
	 printf("%d ",a[i]);
 	printf("\n");
 	return 0;
}*/
#include <stdio.h>
#define flag -1//���ⶨ����һ����ʶ�����ظ������ظ�ֵΪ�˱�ʶ��
int main()
{
 int a[10]={1,3,3,2,5,1,1,5,6,6};
 int b[10];//���ڴ洢�����ظ�Ԫ�ص����顣
 int i,j,x=10;//xΪ���ظ���ЧԪ�ظ���
 for(i=0;i<10;i++)
 {
  if(a[i]!=flag)//�����ʶ���ˣ��Ͳ��Ƚ���
  {
   for(j=i+1;j<10;j++)
   {
    if(a[i]==a[j]&&a[j]!=flag)
    {
     a[j]=flag;
     x--;//��ʶһ���ظ����Ч���ؼ���һ��
    }
   }
  }
 };
 for(i=0,j=0;i<10;i++)//�ѷǱ�ʶ��Ԫ�أ�������b[];
 {
  if(a[i]!=flag)
  { 
   b[j]=a[i];
   j++;
  }
 };
 for(i=0;i<x;i++)printf("%d",b[i]);
 printf("\n");
 return 0;
}
