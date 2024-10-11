 #include <stdio.h>    // 97-122 --> a-z

 int main()
 {
   char ch;
   printf("enter the character\n");
   scanf("%c", &ch);

   if(ch<=122 && ch>=97)
   {printf("it is lowercase\n");}

   else{
      printf("it is not a lowercase\n");
   }
   
    return 0;
 }