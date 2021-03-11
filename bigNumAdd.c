#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bigNumAdd(const char* str1, const char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	int maxlen;
	if (len1 >= len2)
		maxlen =len1;
	else
		maxlen = len2;

	int* NumA = malloc(sizeof(int) * (maxlen + 1));
	int* NumB = malloc(sizeof(int) * (maxlen + 1));

	int* result = malloc(sizeof(int) * (maxlen + 1));
	
	memset(NumA, 0, sizeof(NumA));
	memset(NumB, 0, sizeof(NumB));
	memset(result, 0, sizeof(result));
	
	int i = 0;
	for (;i < len1; i++) {
		NumA[i] = str1[len1-1-i] -'0';
	}
	
	for (i =0;i < len2; i++) {
		NumB[i] = str2[len2-1-i] -'0';
	}

	int tmp;
	
	for(i=0; i < maxlen + 1; i++) {
		tmp = result[i];
		tmp += NumA[i];
		tmp += NumB[i];
		
		if (tmp >= 10) {
			tmp = tmp - 10;
			result[i+1] = 1;
		}
		result[i] = tmp;
	}
	
	int flag = 0;
	
	for (i=maxlen; i >=0; i--)
	{
		if (!flag) {
			if (result[i] == 0) {
				continue;
			}
			flag = 1;
		}
		printf("%c", result[i] + '0');
	}
	
	printf("\n");
	
	free(NumA);
	free(NumB);
	free(result);
}

int main(int argc, char* argv[])
{
	
	printf("%s + %s = \n", argv[1], argv[2]);
	bigNumAdd(argv[1], argv[2]);
	return 0;
}
