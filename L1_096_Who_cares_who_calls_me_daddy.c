#include<stdio.h>
int sum(int A){
    int i,temp,sum=0,container;
    temp = A;
    while(temp){
        container = temp % 10;
        sum+=container;
        temp/=10;
    }
    return sum;
}
int main(){
    /*
    L1-096 谁管谁叫爹
    分数 20
    作者 陈越
    单位 浙江大学
    《咱俩谁管谁叫爹》是网上一首搞笑饶舌歌曲，来源于东北酒桌上的助兴游戏。现在我们把这个游戏的难度拔高一点，多耗一些智商。
    不妨设游戏中的两个人为 A 和 B。游戏开始后，两人同时报出两个整数NA和NB。判断谁是爹的标准如下：
    将两个整数的各位数字分别相加，得到两个和SA和SB。如果NA正好是SB的整数倍，则 A 是爹；如果 NB​正好是SA的整数倍，
    则 B 是爹；
    如果两人同时满足、或同时不满足上述判定条件，则原始数字大的那个是爹。
    本题就请你写一个自动裁判程序，判定谁是爹。
    输入格式：
    输入第一行给出一个正整数 N（≤100），为游戏的次数。以下 N 行，每行给出一对不超过 9 位数的正整数，
    对应 A 和 B 给出的原始数字。题目保证两个数字不相等。
    输出格式：
    对每一轮游戏，在一行中给出赢得“爹”称号的玩家（A 或 B）。
    输入样例：
    4
    999999999 891
    78250 3859
    267537 52654299
    6666 120
    输出样例：
    B
    A
    B
    A
    */
    int N,i,j,A,B,SA,SB,flagA,flagB;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        flagA=0;
        flagB=0;
        scanf("%d %d",&A,&B);
        SA = sum(A);
        SB = sum(B);
        if(A%SB==0){
            flagA=1;
        }
        if(B%SA==0){
            flagB=1;
        }
        if(flagA==1&&flagB==1 || flagA==0&&flagB==0){
            if(A>B){
                printf("A\n");
            }else{
                printf("B\n");
            }
        }else if(flagA==1){
            printf("A\n");
        }else if(flagB==1){
            printf("B\n");
        }
    }
    return 0;
}