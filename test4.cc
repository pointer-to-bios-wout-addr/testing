#include

/*
题目描述：找到模块间依赖关系
一个模块依赖的所有模块称为其父模块，父模块的父模块成为其祖先模块。
父子模块的共同祖先模块是父模块。
找出任意两个模块所有共同祖先模块。

输入格式：
第1行，整数n，表示模块数量。
第2~n+1行，每行第一个字符串为模块名，后面多个字符串，表示其依赖的模块，以字符串end结尾。
第n+2行，询问的数量m。
第n+3~n+m+2行，给出两个模块名。
输入确保模块间无循环依赖。

输出格式：
共m行，每行是输入中询问的两模块的共同祖先模块，可以有多个，由空格分隔。
无共同祖先模块的输出"No shared fathers."

样例输入：
--------
5
file io base
amc file base
io base
vmem amc file base
log file
3
log vmem
vmem amc
io log
--------

样例输出：
--------
file io base
amc file io base
No shared fathers.
--------
*/

int main()
{
}
