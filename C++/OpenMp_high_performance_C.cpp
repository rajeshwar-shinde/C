#include <iostream>
#include <chrono>
#include <omp.h>
#include <vector>
using namespace std;
void hello_openmp(){
//omp_set_num_threads(8);
#pragma omp parallel
{
cout <<"Hello , OpenMP"<<omp_get_thread_num()<<"/"<<omp_get_num_threads()<<endl;
} }

void sections(){

#pragma omp parallel sections
{
#pragma omp section
	{
		for(int i=0;i<1000;i++)
	{
		cout << i;
	}
       }

#pragma omp section
{
 for(int i=0;i<1000;i++){
  cout << static_cast<char>('a' + (i%26));
  }
 }
}}

void single_master(){
#pragma omp parallel
{
#pragma omp single
	printf("gathering input: %d\n",omp_get_thread_num());
      	printf("in parallel on %d\n",omp_get_thread_num());
#pragma omp barrier
#pragma omp master
	printf("output on: %d\n",omp_get_thread_num());
 }
}

void sync(){
printf("\nATOMIC\n");
int sum= 0;
#pragma omp parallel for num_threads(128)
for(int i=0;i<100;i++)
{
//to avoid race condition use 
#pragma omp atomic
++sum;
}
cout <<sum<<endl;

printf("\nORDERED\n");
vector<int> squares;
int j;
#pragma omp parallel for ordered
for(int i=0;i<20;++i)
{
printf("%d : %d\t",omp_get_thread_num(),i);
j=i*i;
//ordered
#pragma omp ordered
squares.push_back(j);
}
printf("\n");
for(auto v:squares)printf("%d\t",v);
}

void nowait_ex(){
printf("\nNO_WAIT\n");
#pragma omp parallel
{
#pragma omp single nowait
{
	int n;
	cin>>n;
	printf("gathering input: %d\n",omp_get_thread_num());
}
      	printf("in parallel on %d\n",omp_get_thread_num());
#pragma omp barrier
#pragma omp master
	printf("output on: %d\n",omp_get_thread_num());
 }
}

void data_sharing(){
int i=10;
//#pragma omp parallel for private(i)
//#pragma omp parallel for firstprivate(i)
#pragma omp parallel for lastprivate(i)
for(int a = 0;a<10;a++)
{
printf("thread %d i = %d\n",omp_get_thread_num(),i);
i = 1000 + omp_get_thread_num();
}
printf("%d\n",i);
}





int main(){
//hello_openmp();
//sections();
//single_master();
//sync();
//nowait_ex();
data_sharing();
getchar();
return 0;
}