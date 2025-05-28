#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    while (1)
    {
        int x = 4;
        int money_kind[5] = {1000,500,100,50,10};
        int item_price[7] = {150, 190, 200, 240, 420, 510, 590};
        int input_money[5] = {0};
        printf("土呂,1\n大宮,2\n新都心,3\n浦和,4\n赤羽,5\n尾久,6\n上野,7\n");
        printf("station number:int>>");
        x--;
        printf("%d",item_price[x]);

        for(int i = 0; i < x; i++){
            printf("%d-->",money_kind[i]);
            scanf("%d", &input_money[i]);
            if(input_money[i] < 0){
                printf("無効な金額です。\n");
                return 1; 
            }
        }

    }
    return 0;
}
