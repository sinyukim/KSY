#include <stdio.h>


void sub1(){
 for(int i=1; i<=10; i++){
    for(int j=1; j<=i; j++){
       printf("*");
      }
   }
}
void sub2();
void sub3();
void sub4();

int main(){

printf("START");

sub1();
sub2();
sub3();
sub4();

return 0;

}
