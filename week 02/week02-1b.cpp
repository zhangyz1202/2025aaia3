// week02-1b.cpp Part 1
// SOIT06_ADVANCE_001 Using C
#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int b = n; // backup
   int ans = 0;
   while( n > 0 ){ // Bo-Pi Fa
      ans = ans * 10 + n%10;
      n = n / 10;
   }

   printf("%d+%d=%d\n", b, ans, b+ans);
   // printf("%d",ans);
}
