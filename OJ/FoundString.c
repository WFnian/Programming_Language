/* 
#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
int findfirst(char* s1, char* s2) {
    int i = 0, j = 0;
    int len1, len2;
    len1 = strlen(s1);
    len2 = strlen(s2);
    for (i = 0; i <= (len1 - len2); ++i) {
        for (j = 0; j < len2; j++) {
            if (s1[i + j] == s2[j])
                continue;
            else
                break;
        }
 
        if (j == len2)
            return (i + 1);
    }
    return 0;
}
int main() {
    char str1[99], str2[99];
    int pos;
    while(scanf("%s %s",str1,str2)!=EOF){
        pos = findfirst(str1, str2);
        printf("%d\n", pos);
    }
    return 0;
}
 

���ɶ��ַ�����ÿ���ַ���ռһ�в���һ���ո�ֿ���ǰһ���ַ���Ϊĸ��������Ϊ�Ӵ����ַ���ֻ����Ӣ����ĸ�Ĵ�Сд��ÿ���ַ���������98���ַ���

���

����Ӵ���ĸ�����״γ��ֵ�λ�ã����ĸ���в������Ӵ������0��ÿ������ռһ�С�

��������

ACMCLUB ACM
DataStructure data
domybest my

�������

1
0
3
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Found (char str1[], char str2[]){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i, j;
	if (len2 > len1)
		return 0;
	for (i = 0; i < len2 + len1; i++){
		for (j = 0; j < len2; j++){
			if (str1[i + j] == str2[j])
				continue;
			else
				break;
		}
		if (j == len2)
			return  i+1;
	}
	
	return 0;
	
}
int main(){
	char str1[222], str2[222];
	while (scanf("%s %s", str1, str2) != NULL){
		int pos = Found (str1, str2);
		printf("%d\n",pos);
	}
	
	return 0;
	
} 
