# include <stdio.h>  
int  main(){  
    int x,y,t;  
    int r; 
    int n1,n2;
    printf("������������������\n");  
    scanf("%d %d", &n1, &n2);  
    r = n1 % n2;  
    t = n2;
    while(r!=0)  
    {  
        n1 = n2;  
        n2 = r;  
        r = n1 % n2;  
    }  
printf("���ǵ����Լ��Ϊ��%d\n", n2);  
    printf("���ǵ���С������Ϊ��%d\n", n1*t/n2); 
    return 0;  
} 
