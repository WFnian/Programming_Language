/*
��Ŀ����
��n��t���ݵ����һλ��n>0,n<1000000,t>=0,t<1000000��;

����
����n��t����������

���
���n��t���ݵ����һλ��

��������
5 3
2 3
10 5
�������
5
8
0
*/
//�ҵķ�����ʾ����
#include<stdio.h>
#include<math.h>
int main(){
	long long a, b;
	int c;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		 c =pow(a,b);
		if(abs(c)<1)
			printf("0\n");
		else printf("%d\n",abs(c)%10);
	}
	
}
//�ڶ��ַ���

#include<stdio.h>
int main()
{
    int n,t;
    int i=0;
    int ans;
    while(scanf("%d%d",&n,&t)!=EOF)
    {
        ans=1;
        for(i=0;i<t;i++)
        {
            ans=ans*n%10;
        }
        printf("%d\n",ans);
    }
    return 0;
}