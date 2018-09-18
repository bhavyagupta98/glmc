#include "glmc.h"

void glmc_mat3_add(mat3 dest,mat3 src_a,mat3 src_b){
	dest[0][0] = src_a[0][0] + src_b[0][0];
	dest[0][1] = src_a[0][1] + src_b[0][1];
	dest[1][0] = src_a[1][0] + src_b[1][0];
	dest[1][1] = src_a[1][1] + src_b[1][1];
	dest[0][2] = src_a[0][2] + src_b[0][2];
	dest[1][2] = src_a[1][2] + src_b[1][2];
	dest[2][0] = src_a[2][0] + src_b[2][0];
	dest[2][1] = src_a[2][1] + src_b[2][1];
	dest[2][2] = src_a[2][2] + src_b[2][2];
}

void glmc_mat3_sub(mat3 dest,mat3 src_a,mat3 src_b){
	dest[0][0] = src_a[0][0] - src_b[0][0];
	dest[0][1] = src_a[0][1] - src_b[0][1];
	dest[1][0] = src_a[1][0] - src_b[1][0];
	dest[1][1] = src_a[1][1] - src_b[1][1];
	dest[0][2] = src_a[0][2] - src_b[0][2];
	dest[1][2] = src_a[1][2] - src_b[1][2];
	dest[2][0] = src_a[2][0] - src_b[2][0];
	dest[2][1] = src_a[2][1] - src_b[2][1];
	dest[2][2] = src_a[2][2] - src_b[2][2];
}

void glmc_mat3_mul(mat3 dest,mat3 src_a,mat3 src_b){
	dest[0][0] = src_a[0][0]*src_b[0][0] + src_a[0][1]*src_b[1][0] + src_a[0][2]*src_b[2][0];
	dest[0][1] = src_a[0][0]*src_b[0][1] + src_a[0][1]*src_b[1][1] + src_a[0][2]*src_b[2][1];
	dest[0][2] = src_a[0][0]*src_b[0][2] + src_a[0][1]*src_b[1][2] + src_a[0][2]*src_b[2][2];
	dest[1][0] = src_a[1][0]*src_b[0][0] + src_a[1][1]*src_b[1][0] + src_a[1][2]*src_b[2][0];
	dest[1][1] = src_a[1][0]*src_b[0][1] + src_a[1][1]*src_b[1][1] + src_a[1][2]*src_b[2][1];
	dest[1][2] = src_a[1][0]*src_b[0][2] + src_a[1][1]*src_b[1][2] + src_a[1][2]*src_b[2][2];
	dest[2][0] = src_a[2][0]*src_b[0][0] + src_a[2][1]*src_b[1][0] + src_a[2][2]*src_b[2][0];
	dest[2][1] = src_a[2][0]*src_b[0][1] + src_a[2][1]*src_b[1][1] + src_a[2][2]*src_b[2][1];
	dest[2][2] = src_a[2][0]*src_b[0][2] + src_a[2][1]*src_b[1][2] + src_a[2][2]*src_b[2][2];
}

void glmc_mat3_div(mat3 dest,mat3 src_a,mat3 src_b){
	mat3 inv;
	glmc_mat3_inverse(inv,src_b);
	glmc_mat3_mul(dest,src_a,inv);
}

void glmc_mat3_mul_scalar(mat3 dest,mat3 src_a,float src){
	dest[0][0] = src_a[0][0] * src;
	dest[0][1] = src_a[0][1] * src;
	dest[1][0] = src_a[1][0] * src;
	dest[1][1] = src_a[1][1] * src;
	dest[0][2] = src_a[0][2] * src;
	dest[1][2] = src_a[1][2] * src;
	dest[2][0] = src_a[2][0] * src;
	dest[2][1] = src_a[2][1] * src;
	dest[2][2] = src_a[2][2] * src;
}

void glmc_mat3_div_scalar(mat3 dest,mat3 src_a,float src){
	dest[0][0] = src_a[0][0] / src;
	dest[0][1] = src_a[0][1] / src;
	dest[1][0] = src_a[1][0] / src;
	dest[1][1] = src_a[1][1] / src;
	dest[0][2] = src_a[0][2] / src;
	dest[1][2] = src_a[1][2] / src;
	dest[2][0] = src_a[2][0] / src;
	dest[2][1] = src_a[2][1] / src;
	dest[2][2] = src_a[2][2] / src;
}

void glmc_mat3_normalize(mat3 dest,mat3 src_a){
	float magnitude = 0;
	magnitude += src_a[0][0] * src_a[0][0];
	magnitude += src_a[0][1] * src_a[0][1];
	magnitude += src_a[1][0] * src_a[1][0];
	magnitude += src_a[1][1] * src_a[1][1];
	magnitude += src_a[0][2] * src_a[0][2];
	magnitude += src_a[1][2] * src_a[1][2];
	magnitude += src_a[2][0] * src_a[2][0];
	magnitude += src_a[2][1] * src_a[2][1];
	magnitude += src_a[2][2] * src_a[2][2];
	magnitude = sqrt(magnitude);
	glmc_mat3_div_scalar(dest,src_a,magnitude);
}

void glmc_mat3_madd(mat3 dest,mat3 src_a,mat3 src_b){
	dest[0][0] += src_a[0][0]*src_b[0][0] + src_a[0][1]*src_b[1][0] + src_a[0][2]*src_b[2][0];
	dest[0][1] += src_a[0][0]*src_b[0][1] + src_a[0][1]*src_b[1][1] + src_a[0][2]*src_b[2][1];
	dest[0][2] += src_a[0][0]*src_b[0][2] + src_a[0][1]*src_b[1][2] + src_a[0][2]*src_b[2][2];
	dest[1][0] += src_a[1][0]*src_b[0][0] + src_a[1][1]*src_b[1][0] + src_a[1][2]*src_b[2][0];
	dest[1][1] += src_a[1][0]*src_b[0][1] + src_a[1][1]*src_b[1][1] + src_a[1][2]*src_b[2][1];
	dest[1][2] += src_a[1][0]*src_b[0][2] + src_a[1][1]*src_b[1][2] + src_a[1][2]*src_b[2][2];
	dest[2][0] += src_a[2][0]*src_b[0][0] + src_a[2][1]*src_b[1][0] + src_a[2][2]*src_b[2][0];
	dest[2][1] += src_a[2][0]*src_b[0][1] + src_a[2][1]*src_b[1][1] + src_a[2][2]*src_b[2][1];
	dest[2][2] += src_a[2][0]*src_b[0][2] + src_a[2][1]*src_b[1][2] + src_a[2][2]*src_b[2][2];
}

void glmc_mat3_msub(mat3 dest,mat3 src_a,mat3 src_b){
	dest[0][0] -= src_a[0][0]*src_b[0][0] + src_a[0][1]*src_b[1][0] + src_a[0][2]*src_b[2][0];
	dest[0][1] -= src_a[0][0]*src_b[0][1] + src_a[0][1]*src_b[1][1] + src_a[0][2]*src_b[2][1];
	dest[0][2] -= src_a[0][0]*src_b[0][2] + src_a[0][1]*src_b[1][2] + src_a[0][2]*src_b[2][2];
	dest[1][0] -= src_a[1][0]*src_b[0][0] + src_a[1][1]*src_b[1][0] + src_a[1][2]*src_b[2][0];
	dest[1][1] -= src_a[1][0]*src_b[0][1] + src_a[1][1]*src_b[1][1] + src_a[1][2]*src_b[2][1];
	dest[1][2] -= src_a[1][0]*src_b[0][2] + src_a[1][1]*src_b[1][2] + src_a[1][2]*src_b[2][2];
	dest[2][0] -= src_a[2][0]*src_b[0][0] + src_a[2][1]*src_b[1][0] + src_a[2][2]*src_b[2][0];
	dest[2][1] -= src_a[2][0]*src_b[0][1] + src_a[2][1]*src_b[1][1] + src_a[2][2]*src_b[2][1];
	dest[2][2] -= src_a[2][0]*src_b[0][2] + src_a[2][1]*src_b[1][2] + src_a[2][2]*src_b[2][2];
}

float glmc_mat3_discriminant(mat3 dest){
	float disc = 0;
	disc += dest[0][0]*(dest[1][1]*dest[2][2] - dest[1][2]*dest[2][1]);
	disc += dest[0][1]*(dest[1][0]*dest[2][2] - dest[1][2]*dest[2][0]);
	disc += dest[0][2]*(dest[1][0]*dest[2][1] - dest[1][1]*dest[2][0]);
	return disc;
}

void glmc_mat3_inverse(mat3 dest,mat3 src){
	float det = glmc_mat3_discriminant(src);
	dest[0][0] = src[0][0]*(src[1][1]*src[2][2] - src[1][2]*src[2][1])/det;
	dest[1][0] = src[0][1]*(src[1][0]*src[2][2] - src[1][2]*src[2][0])/det;
	dest[2][0] = src[0][2]*(src[1][0]*src[2][1] - src[1][1]*src[2][0])/det;
	dest[0][1] = src[1][0]*(src[2][1]*src[0][2] - src[0][1]*src[2][2])/det;
	dest[1][1] = src[1][1]*(src[0][0]*src[2][2] - src[0][2]*src[0][2])/det;
	dest[2][1] = src[1][2]*(src[2][0]*src[0][1] - src[0][0]*src[2][1])/det;
	dest[0][2] = src[2][0]*(src[0][1]*src[1][2] - src[0][2]*src[1][1])/det;
	dest[1][2] = src[2][1]*(src[0][2]*src[1][0] - src[0][0]*src[1][2])/det;
	dest[2][2] = src[2][2]*(src[0][0]*src[1][1] - src[0][1]*src[1][0])/det;
}	


void glmc_mat3_transpose(mat3 dest,mat3 src){
	dest[0][0] = src[0][0];
	dest[0][1] = src[1][0];
	dest[0][2] = src[2][0];
	dest[1][0] = src[0][1];
	dest[1][1] = src[1][1];
	dest[1][2] = src[2][1];
	dest[2][0] = src[0][2];
	dest[2][1] = src[1][2];
	dest[2][2] = src[2][2];
}