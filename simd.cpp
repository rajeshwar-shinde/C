

string get_cpu_name()
{
uinst_t data[4]= {0};
#pragma once
#include <iostream>
#include <string>
#include <array>
#include <memory>
using namespace std;
#include <intrin.h>

_asm{
cpuid;
mov data[0],ebx;
mov data[4],edx;
mov data[8],ecx;

}
return string((const char*)data);
}

void assembler(){

cout << "CPU is "<<get_cpu_name()<<endl;
float f1[] = {1.f,2.f,3.f,4.f};
float f2[]= {5.f,4.f,3.f,4.f};
float result[4] = {0.f};
_asm
{
movups xmm1,f1;
movups xmm2,f2;
mulps xmm1,xmm2;
movups result,xmm1;
}
for(size_t i=0;i<4;i++){
cout<<result[i]<<"\t"<<endl;
}
cout <<endl;
//find SSE support 
int d,c;
_asm{
 mov eax,1;
 cpuid;
 mov d,edx;
 mov c,ecx;
}
if((d&(1<<26))!=0) cout<<"SSE2 is supported"<<endl;
if((c&1)!= 0)cout <<"SSE3 is supported "<<endl;
if((c&(1<<19))!=0)cout <<"SSE4.1 is supported "<<endl;
if((c&(1<<20))!=0)cout <<"SSE4.2 is supported "<<endl;

}

//Intrinsics: C++ wrappers around instructions and registers
void intrinsics(){
//int cpuInfo[4];
//__cpuid(cpuInfo,1);
auto a = _mm_set_ps(1,2,3,4);
auto b = _mm_set_ps(4,3,2,1);
auto c = _mm_add_ps(a,b);
float f= c.m128_f32[0];
__try{
 __m256s z = _mm256_set_pd(1,2,3,4);
}
__except(1) cout <<"sorry you are not allowed this"<<endl;
}


//Compiler optimisations

void simple_mad(float *a,float *b,float *c,float * result,const int length){

for(size_t i =0;I<length;i++){
result[i] = a[i]*b[i] + c[i];
}
}

void optimization(){
const int length = 1024*1024*64;
float *a = new float[length];
float *b = new float[length];
float *c = new float[length];
float *result = new float[length];

mt19937_64 rng(random_device{}());
uniform_real_distribution<float> dist(0,1);

for(size_t i =0;i<length;i++)
{
a[i]=dist(rng);
b[i]=dist(rng);
c[i]=dist(rng);
}

auto begin = high_resolution_clock::now();
simple_mad(a,b,c,result,length);
auto end = high_resolution_clock::now();
cout << "MAD took up "<<duration_cast<millisecounds>(end-begin).count()<<"msec"<<endl;

delete[] a;
delete[] b;
delete[] c;
delete[] result;
}
//note- multiplying matrix using dgemm


int main(){
//assembler();
//intrinsics();
return 0;
}