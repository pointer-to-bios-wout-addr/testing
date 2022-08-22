#include //c或者c++都可以

/*
题目描述：通过id找到对象的位置
给出一系列对象id与对象名称，询问某id的名称以及它的类型。

输入：
第1行，一个正整数n表示对象数量。
第2~n+1行，每行一个对象id以及对象名，对象名格式：`name:type`，冒号前为对象名，冒号后为类型。
第n+2行，表示m次询问。
第n+3~m+n+3行，表示询问的id。

输出：
m行，每行输出对象类型以及对象名。
若id没有对应对象，输出"Object not found."

样例输入：
--------------
5
1 inputfile:ifile
4 outputfile:ofile
5 hello_text:string
11 qsort:Function
12 integer_list:list<int>
3
10
4
12
--------------

样例输出：
--------------
Object not found.
ofile outputfile
list<int> integer_list
--------------
*/

int main()
{
}
