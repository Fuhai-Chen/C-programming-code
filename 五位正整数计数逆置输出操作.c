//问题描述：给一个不多于5位的正整数，
//          要求如下： 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321，应输出123


#include <stdio.h>
#include <math.h>

//函数声明！！！！必须添加 否则会显示找不到标识符
int GetFigures(int n);
void PrintOrder(int n);
void PrintReverse(int n);


int main()
{
    int n, a;
    printf("请输入数字\n");
    scanf_s("%d", &n);
    printf("\n");
    a = GetFigures(n);
    printf("这个数字是%d位数\n\n", a);
    printf("各个位数是:\n");
    PrintOrder(n);
    printf("逆序输出：\n");
    PrintReverse(n);
    return 0;
}

//求出该数是几位数
/*算法分析：
    设定标记数，循环执行除10运算来消去最后一位数字，执行循环时累加标记数来实现计数效果。
    时间复杂度： O （n），（n为数字长度）
*/
int GetFigures(int n) {
    int count = 0;  //计数变量
    do
    {
        count++;    //先执行count++
        n /= 10;    //再对n除10，去掉最后一位数字
    } while (n != 0);   //当n为零时，循环结束
    return count;
}

//分别输出每一位数字
/*算法分析：
    建立循环，先将该数除于10^n，得到最高位数，再通过取余来得到除最高位数外的其他位数，再进行累除，依次类推。循环时，输出各最高位数。
    时间复杂度： O （n），（n为数字长度）
*/
void PrintOrder(int n) {
    int len = GetFigures(n);    //调用GetFigure函数，返回值赋给len
    int power = pow(10.0, len - 1);     //10的n次方，头文件需调用<math.h>
    for (int i = 0; i < len; i++)
    {
        printf("%d", n / power);
        n %= power;
        power /= 10;
    }
    printf("\n");
}

//按逆序输出各位数字
/*算法分析：
    按逆序输出，即该正整数对10取余，得到的值便为该正整数的最后一位数，再对10整除，得到去掉最后一位数的正整数，依次循环，依次输出对10取余的每一位数，便可逆序输出；
    时间复杂度： O （n），（n为数字长度）
*/
void PrintReverse(int n) {
    do
    {
        printf("%d", n % 10);
        n /= 10;
    } while (n != 0);
    printf("\n");
}

