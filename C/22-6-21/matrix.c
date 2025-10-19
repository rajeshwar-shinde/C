#include <stdio.h>
int main(){
int arr[3][4]={
		{10,11,12,13},
		{20,21,22,23},
		{30,31,32,33}};

for(char i=0;i<3;i++){
printf("Address of %dth array = %u %u\n",i,arr[i],*(arr+i));
for(char j=0;j<4;j++){
printf("\n%d" ,arr[i][j]);
printf("\n%d",*(*(arr+ i)+j));
//printf("\n%d",(*(*arr + i)+j));
}
//printf("\n");

}}}
