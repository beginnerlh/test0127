//给定一个整数，编写一个函数来判断它是否是 2 的幂次方。
//
//示例 1:
//
//输入 : 1
//输出 : true
// 解释 : 20 = 1
//	  示例 2 :
//
//  输入 : 16
//   输出 : true
//	解释 : 24 = 16
//		 示例 3 :
//
//	 输入 : 218
//	  输出 : false
//
//
//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的一个字母异位词。
//
//示例 1:
//
//输入 : s = "anagram", t = "nagaram"
//输出 : true
//	 示例 2 :
//
// 输入 : s = "rat", t = "car"
//  输出 : false
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPowerOfTwo(int n) {

	if (n <= 0)
	{
		return false;
	}
	else
	{
		if ((n&n - 1) == 0)
		{
			return true;
		}
	}
	return false;

}
bool isAnagram(char *s, char *t)
{
	int i;
	int x[26] = { 0 }; //a—z 26位   //可以看做每个字符占一位
	int y[26] = { 0 };
	for (i = 0; s[i] != '\0'; i++)
	{
		x[s[i] - 'a']++;//字符所在位置+1
	}
	for (i = 0; t[i] != '\0'; i++)
	{
		y[t[i] - 'a']++;
	}

	for (i = 0; i < 26; i++)
	{
		if (x[i] != y[i]) //比较两个数组中相同位置的数字
		{
			return false;
		}
	}
	return true;
}


int main()
{
	//int a = isPowerOfTwo(2);
	int a = isAnagram("anagram", "nagaram");

	printf("%d\n", a);
	system("pause");
	return 0;
}
