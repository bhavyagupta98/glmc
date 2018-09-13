#include "glmc.h"

void glmc_mat2_add(mat2 dest,mat2 src_a,mat2 src_b){
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			dest[i][j] = src_a[i][j] + src_a[i][j];
		}
	}
}

void glmc_mat2_sub(mat2 dest,mat2 src_a,mat2 src_b){
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			dest[i][j] = src_a[i][j] - src_a[i][j];
		}
	}
}

void glmc_mat2_mul(mat2 dest,mat2 src_a,mat2 src_b){
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			dest[i][j] = 0;
			for (int k=0;k<2;k++){
				dest[i][j] += src_a[i][k] * src_a[k][j];
			}
		}
	}
}

void glmc_mat2_div(mat2 dest,mat2 src_a,mat2 src_b){
	mat2 inv;
	glmc_mat2_inverse(inv,src_b);
	glmc_mat2_mul(dest,src_a,inv);
}

void glmc_mat2_mul_scalar(mat2 dest,mat2 src_a,float src){
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			dest[i][j] = src_a[i][j]*src;
		}
	}
}

void glmc_mat2_div_scalar(mat2 dest,mat2 src_a,float src){
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			dest[i][j] = src_a[i][j]/src;
		}
	}
}

void glmc_mat2_normalize(mat2 dest,mat2 src_a){
	float magnitude = 0;
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			magnitude += src_a[i][j]*src_a[i][j];
		}
	}
	magnitude = sqrt(magnitude);
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			dest[i][j] = src_a[i][j]/magnitude;
		}
	}
}

void glmc_mat2_madd(mat2 dest,mat2 src_a,mat2 src_b){
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			dest[i][j] += (src_a[i][j]*src_b[i][j]);
		}
	}
}

void glmc_mat2_msub(mat2 dest,mat2 src_a,mat2 src_b){
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			dest[i][j] -= (src_a[i][j]*src_b[i][j]);
		}
	}
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
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			dest[j][i] = src[i][j];
		}
	}
}