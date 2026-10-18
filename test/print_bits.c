#include <unistd.h>



void print_bits(unsigned char octet){
	int a = 7; 
		

	while (a <= 0 ){

	char bitInchar =( (octet >> a) &1) + '0';
	write(1, &bitInchar, 1);
	a--;
}
}

int main(void) {

	print_bits('9'); 
return 0;


}
