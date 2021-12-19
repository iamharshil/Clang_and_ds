#include <stdio.h>
#include <limits.h>

int main()
{
	short unsigned int var1 = 0;
	short unsigned int var2 = USHRT_MAX;
	printf("%d\n%d\n", var1, var2); 
    // use %ld or %lu
	return 0;
}

// we can use long long int to00
// long int = 4bytes then long long int = 8 bytes.
// if long int = 8 bytes then long long int = 8bytes
// max limit is 8 bytes





// 1. sizeof(short) <= sizeof(int) <= sizeof(long)
// 2. writing signed int var_name; is equivalent to writing int var_name;
// 3. %d for signed int
// 4. %u unsigned int
// 5. %ld for long int equivalent to signed long int
// 6. %lu unsigned long int
// 7. %lld long long int
// 8. %llu unsigned long long int