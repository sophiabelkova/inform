#include <iostream>
char* strcpy(char* s1, char* s2)
{
char* s = s1;
while (*s1++ = *s2++);
return(s);
}


int main()
{
char s2[] = "Hello world";
char s1[20];
std::cout<<("%s", strcpy(s1, s2))<<std::endl;
return 0;
}
