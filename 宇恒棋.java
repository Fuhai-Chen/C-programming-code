/*
A. 宇恒棋
单点时限: 1.0 sec

内存限制: 256 MB

QQ小方以前不会下宇恒棋，现在他会了，所以他急切的想教会你。

宇恒棋的规则是这样的：在一个  的棋盘上，QQ小方和你各有一枚棋子。你们轮流行动，每一次轮到一方的回合时，他必须把自己的棋子往上，下，左或右移动一格，但不能超出棋盘的边界。如果这一方的棋子吃掉了另一方的棋子，也就是这一方在他的回合将自己的棋子移动到了另一方棋子的位置上，那这一方就赢得了这局比赛。

单单讲给你听肯定是不够的，为了表现自己，QQ小方现在要考考你。

现在，该轮到QQ小方行动了。QQ小方想知道在双方采取最优策略的情况下，比赛结果究竟会是怎样的。

输入格式
第一行两个数 n , m  ( 1 <= n, m <= 100  )，代表棋盘有 n 行 m 列。

第二行四个整数 x1 , y1 , x2 , y2 ( 1 <= x1, x2 <= n, 1 <= y1, y2 <= m )，代表QQ小方的棋子在第 x1 行 y1 列，而你的棋子在第 x2 行 y2 列，保证一开始给出的两个棋子坐标不会重合。

输出格式
一行一个字符串，如果你赢则输出 Win，如果QQ小方赢则输出 Lose，如果平局则输出 Tie。

样例
input
2 2
1 1 2 2
output
Win

input
3 3
2 2 2 3
output
Lose

提示
在第一组样例中，QQ小方可以走向 (  ) 或 (  )，但都会马上被你吃掉。

在第二组样例中，QQ小方可以直接吃掉你的棋子。
*/

import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc1 = new Scanner(System.in);
        int n = sc1.nextInt();
        int m = sc1.nextInt();
        int x1 = sc1.nextInt();
        int y1 = sc1.nextInt();
        int x2 = sc1.nextInt();
        int y2 = sc1.nextInt();
        if((Math.abs(x1 - x2) + Math.abs(y1 - y2)) % 2 == 0){
            System.out.println("Win");
        }
        else{
            System.out.println("Lose");
        }
    }
}