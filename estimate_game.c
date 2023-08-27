#include <stdio.h>
#include <stdlib.h>



int main()
{
int secretNumber = 8;
int estimate;
int estimatecount =0;
int numlimit =3;
int outOfLimit = 0;

while (estimate!= secretNumber && outOfLimit == 0){
    if(estimatecount < numlimit){
        printf("Enter a Number:");
        scanf("%d", &estimate);
       estimatecount++;
    }else{
        outOfLimit = 1;
    }
}
if (outOfLimit == 1){
    printf("out of estimate");
}else{
    printf("you win!");
}
}

