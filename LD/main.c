int uninit_global;
int init_global = 10;

extern char _dst_start_data;
extern char _dst_end_data;
extern char _src_start_data;

extern char _start_bss;
extern char _end_bss;
int foo(int local){
	return local + uninit_global + init_global;
}

void __attribute__((section(".rajesh"))) init(int local) {

	char *src = &_src_start_data;
	char *dst = &_dst_start_data;
	char *dst_end = &_dst_end_data;

	//bss zeroing
	char *start_bss = &_start_bss;
	char *end_bss = &_end_bss;

	while(dst != dst_end){
		*dst = *src;
		src++;
		dst++;
	}
	
	while(start_bss != end_bss){
		*start_bss = 0;
		start_bss++;
	}
}

