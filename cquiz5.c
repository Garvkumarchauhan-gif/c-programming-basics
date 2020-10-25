#include<stdio.h>
int main()
{
    static char c='A';
    if(c<=90 &&  printf("%c",c) && main(c+1))
    {}
}
