MEMORY {
	ROM : ORIGIN = 0xc000 , LENGTH = 0x1000
	RAM : ORIGIN = 0xa000 , LENGTH = 0x1000
}

a = 10;
_this.is.a.variable = 10;
"this is a symbol" = 100;

SECTIONS {
	b = 20;
	arithmetic : {
		c = a + b;
		d = a - b;
		e = a / b;
		f = a *b ;
	} > RAM AT > RAM


	rajeshwar : {
		*(.rajesh)
	        . = . + a + 0x10;
	} > ROM AT > ROM

	.text : {
		*(.rajesh)
		*(.text)
	} > ROM AT > ROM

	.rodata : {
		*(.rodata)
		_src_start_data = .;
	} > ROM AT > ROM

	.data : {
		rule_3 = 4;
		_dst_start_data = .;
		*(.data)
		_dst_end_data = .;
	} > RAM AT > ROM

	.bss : {
		_start_bss = .;
		*(.bss)
		*(COMMON)
		_end_bss = .;
	} > RAM AT > RAM 

	/DISCARD/ : {
		*(*)
	}
}
