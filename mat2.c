#include "glmc.h"

void glmc_mat2_add(mat2 dest,mat2 src_a,mat2 src_b){
	dest[0][0] = src_a[0][0] + src_b[0][0];
	dest[0][1] = src_a[0][1] + src_b[0][1];
	dest[1][0] = src_a[1][0] + src_b[1][0];
	dest[1][1] = src_a[1][1] + src_b[1][1];
}

void glmc_mat2_sub(mat2 dest,mat2 src_a,mat2 src_b){
	dest[0][0] = src_a[0][0] - src_b[0][0];
	dest[0][1] = src_a[0][1] - src_b[0][1];
	dest[1][0] = src_a[1][0] - src_b[1][0];
	dest[1][1] = src_a[1][1] - src_b[1][1];
}

void glmc_mat2_mul(mat2 dest,mat2 src_a,mat2 src_b){
	dest[0][0] = (src_a[0][0]*src_b[0][0]) + (src_a[0][1]*src_b[1][0]);
	dest[0][1] = (src_a[0][0]*src_b[0][1]) + (src_a[0][1]*src_b[1][1]);
	dest[1][0] = (src_a[1][0]*src_b[0][0]) + (src_a[1][1]*src_b[1][0]);
	dest[1][1] = (src_a[1][0]*src_b[0][1]) + (src_a[1][1]*src_b[1][1]);
}

void glmc_mat2_div(mat2 dest,mat2 src_a,mat2 src_b){
	mat2 inv;
	glmc_mat2_inverse(inv,src_b);
	glmc_mat2_mul(dest,src_a,inv);
}

void glmc_mat2_mul_scalar(mat2 dest,mat2 src_a,float src){
	dest[0][0] = src_a[0][0]*src;
	dest[0][1] = src_a[0][1]*src;
	dest[1][0] = src_a[1][0]*src;
	dest[1][1] = src_a[1][1]*src;
}

void glmc_mat2_div_scalar(mat2 dest,mat2 src_a,float src){
	dest[0][0] = src_a[0][0]/src;
	dest[0][1] = src_a[0][1]/src;
	dest[1][0] = src_a[1][0]/src;
	dest[1][1] = src_a[1][1]/src;
}

void glmc_mat2_normalize(mat2 dest,mat2 src_a){
	float magnitude = 0;
	magnitude += src_a[0][0]*src_a[0][0];
	magnitude += src_a[0][1]*src_a[0][1];
	magnitude += src_a[1][0]*src_a[1][0];
	magnitude += src_a[1][1]*src_a[1][1];
	
	magnitude = sqrt(magnitude);
	glmc_mat2_div_scalar(dest,src_a,magnitude);
}

void glmc_mat2_madd(mat2 dest,mat2 src_a,mat2 src_b){
	dest[0][0] += (src_a[0][0]*src_b[0][0]) + (src_a[0][1]*src_b[1][0]);
	dest[0][1] += (src_a[0][0]*src_b[0][1]) + (src_a[0][1]*src_b[1][1]);
	dest[1][0] += (src_a[1][0]*src_b[0][0]) + (src_a[1][1]*src_b[1][0]);
	dest[1][1] += (src_a[1][0]*src_b[0][1]) + (src_a[1][1]*src_b[1][1]);
}

void glmc_mat2_msub(mat2 dest,mat2 src_a,mat2 src_b){
	dest[0][0] -= (src_a[0][0]*src_b[0][0]) + (src_a[0][1]*src_b[1][0]);
	dest[0][1] -= (src_a[0][0]*src_b[0][1]) + (src_a[0][1]*src_b[1][1]);
	dest[1][0] -= (src_a[1][0]*src_b[0][0]) + (src_a[1][1]*src_b[1][0]);
	dest[1][1] -= (src_a[1][0]*src_b[0][1]) + (src_a[1][1]*src_b[1][1]);
}

float glmc_mat2_discriminant(mat2 dest){
	float disc = (dest[0][0]*dest[1][1]) - (dest[0][1]*dest[1][0]);
	return disc;
}

void glmc_mat2_inverse(mat2 dest,mat2 src){
	dest[0][0] = src[1][1];
	dest[1][1] = src[0][0];
	dest[1][0] = -src[1][0];
	dest[0][1] = -src[0][1];
}

void glmc_mat2_transpose(mat2 dest,mat2 src){
	dest[0][0] = src[0][0];
	dest[0][1] = src[1][0];
	dest[1][0] = src[0][1];
	dest[1][1] = src[1][1];
}