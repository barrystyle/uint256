#include <stdio.h>
#include "arith_uint256.h"

int main()
{
	for (int i=1; i<64; i++) {
           arith_uint256 bnTargetLimit = (~arith_uint256(0) >> i);
           printf("uint256(0) >> %3d  =  %s\n", i, bnTargetLimit.ToString().c_str());
        }
        return (0);
}
