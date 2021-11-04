#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{   int n, n1, n2, i=0, s[8], sum, check=0  ;
    int j=0 ;
    srand(time(NULL));
    char letter[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    n = ( rand() % 24 ) + 10 ;
    n1 = n/10 ;
    n2 = n%10 ;

    //把隨機產生的n = 10~33數字對應到A~Z，儲存到字串內

    j = rand() % 2 +1  ;


    for (i = 0; i < 8;i++)s[i] = rand () % 10;
    //隨機產生末8碼

    sum = n1 +  n2 * 9  +  j * 8  +( s[0] * 7 ) +
    ( s[1] * 6 ) + ( s[2] * 5 ) + ( s[3] * 4 ) + ( s[4] * 3) +
    ( s[5] * 2) + ( s[6] * 1);
 sum = sum % 10;
 check = 10 - sum;



    printf("%c%d%d%d%d%d%d%d%d%d",letter[n],j,s[0],s[1],s[2],s[3],s[4],s[5],s[6],check);





    return 0;
}
