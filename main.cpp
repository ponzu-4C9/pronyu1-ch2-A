#include <stdlib.h>
#include <stdio.h>
int main(){
    printf("行先\n土呂=1\n大宮=2\n新都心=3\n浦和=4\n赤羽=5\n尾久=6\n上野=7\n");
    int fees[7]={
        150,
        190,
        200,
        240,
        420,
        510,
        590
    };
    int destination;
    printf(">>");
    scanf("%d", &destination);
    if(!(1 <= destination && destination <= 7)){
        printf("invaild value\n");
        return 1;
    }
    printf("¥%d\n", fees[destination-1]);
    printf("お金投入\n");
    int money[5];
    int money_kinds[5] = {1000, 500, 100, 50, 10};
    int input_money = 0;//投入金額
    for(int i = 0; i < sizeof(money)/4;i++){
        printf("%d--> ", money_kinds[i]);
        scanf("%d", &money[i]);
        input_money = input_money + money[i] * money_kinds[i];
    };
    printf("投入金額%d\n",input_money);
    int change = input_money-fees[destination-1];
    printf("おつり%d\n",change);

    int changeAry[5] = {0};
    int i = 0;
    while (i < 5)
    {
        int tempchange = change - money_kinds[i];
        if(tempchange>=0){
            change = tempchange;
            changeAry[i]++;
        }else{
            
            i++;
        };
    }
    for(int i = 0; i < sizeof(money)/4;i++){
        printf("%d-->%d\n ", money_kinds[i],changeAry[i]);
    }
}