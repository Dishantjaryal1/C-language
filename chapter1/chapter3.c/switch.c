#include <stdio.h>
// sequence like 1,2,3.. is not compulsory we can write 2,4,1 also.
// nested cases are allowed but not recomended.
// 2+3 can work while a=2,a+3 will not work.
// can not check conditions in switch like a>10.
int main()
{
    int rating;
    printf("the raiting from 1 to 5 is\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("your rating is 1\n");
        break;
    case 2:
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;
    case 5:
        printf("your rating is 5\n");
        break;
    default:
        printf("Invalid operation");
    }
    return 0;
}
