#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    while (1){
        int x = 0;
        int money_kind[5] = {1000,500,100,50,10};
        int item_price[7] = {150, 190, 200, 240, 420, 510, 590};
        int input_money[5] = {0};
        printf("\n\n(土呂,1) (大宮,2) (新都心,3) (浦和,4) (赤羽,5) (尾久,6) (上野,7)\n");
        do
        {
            printf("station number:int>>");
            scanf("%d", &x);
        } while (!(1<=x && x<=7));

        x--;
        printf("%d\n",item_price[x]);
        printf("input money\n");
        for(int i = 0; i < 5; i++){
            do
            {
                printf("%d-->",money_kind[i]);
                scanf("%d", &input_money[i]);
            } while (input_money[i] < 0);

        }
        int total_input = 0;
        for(int i = 0; i < 5; i++){
            total_input += input_money[i] * money_kind[i];
        }
        int change = total_input - item_price[x];
        int tempchange = 0;
        int i = 0;
        int output_money[5] = {0};
        printf("change:%d\n", change);
        while (i < 5)
        {
            tempchange = change / money_kind[i];//商
            output_money[i] = tempchange;
            change -= output_money[i] * money_kind[i];//あまりの部分をchangeに保存して次に使う
            i++;
        }
        for(int i = 0; i < 5; i++){
            printf("%d-->%d\n", money_kind[i], output_money[i]);
        }
    }

    return 0;
}
