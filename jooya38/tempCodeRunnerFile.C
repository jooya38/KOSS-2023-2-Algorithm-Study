#include<stdio.h>

int jhfuc(int);
int t;
int count_=0;

int printcount(int n){
    if(n==0){
        return 0;
    }
    printf("____");
    printcount(n-1);
}

int jhfuc(int t){
    if(t==1){
        printcount(count_);
        printf("\"재귀함수가 뭔가요?\"\n");
        printcount(count_);
        printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
        count_++;
    }else{
        printcount(count_);
        printf("\"재귀함수가 뭔가요?\"\n"); 
        printcount(count_);
        printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
        printcount(count_);
        printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
        printcount(count_);
        printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
        count_++;
        return jhfuc(t-1);
    }

}

int anfuc(int t){
    if(t==0){
        return 0;
    }
    printcount(count_);
    printf("라고 답변하였지.\n");
    count_--;
    return anfuc(t-1);
}

int main(){
    scanf("%d", &t);
    if(t<=50 && t>=1){
        printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
        jhfuc(t+1);
        count_--;
        anfuc(t+1);
    }
}