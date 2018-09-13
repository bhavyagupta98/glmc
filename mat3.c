#include "glmc.h"

void glmc_mat3_add(mat3 dest,mat3 src_a,mat3 src_b){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			dest[i][j] = src_a[i][j] + src_a[i][j];
		}
	}
}

void glmc_mat3_sub(mat3 dest,mat3 src_a,mat3 src_b){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			dest[i][j] = src_a[i][j] - src_a[i][j];
		}
	}
}

void glmc_mat3_mul(mat3 dest,mat3 src_a,mat3 src_b){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			dest[i][j] = 0;
			for (int k=0;k<3;k++){
				dest[i][j] += src_a[i][k] * src_a[k][j];
			}
		}
	}
}

void glmc_mat3_div(mat3 dest,mat3 src_a,mat3 src_b){
	mat3 inv;
	glmc_mat3_inverse(inv,src_b);
	glmc_mat3_mul(dest,src_a,inv);
}

void glmc_mat3_mul_scalar(mat3 dest,mat3 src_a,float src){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			dest[i][j] = src_a[i][j]*src;
		}
	}
}

void glmc_mat3_div_scalar(mat3 dest,mat3 src_a,float src){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			dest[i][j] = src_a[i][j]/src;
		}
	}
}

void glmc_mat3_normalize(mat3 dest,mat3 src_a){
	float magnitude = 0;
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			magnitude += src_a[i][j]*src_a[i][j];
		}
	}
	magnitude = sqrt(magnitude);
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			dest[i][j] = src_a[i][j]/magnitude;
		}
	}
}

void glmc_mat3_madd(mat3 dest,mat3 src_a,mat3 src_b){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			dest[i][j] += (src_a[i][j]*src_b[i][j]);
		}
	}
}

void glmc_mat3_msub(mat3 dest,mat3 src_a,mat3 src_b){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			dest[i][j] -= (src_a[i][j]*src_b[i][j]);
		}
	}
}

float glmc_mat3_discriminant(mat3 dest){
	float disc = 0;
	for(int i=0;i<3;i++){
		int j = i+1;
		if(i==1){
			disc += dest[0][i]*(dest[1][(j+1)%3]*dest[2][j%3]);
		}
		else {
			disc += -(dest[0][i]*(dest[1][(j+1)%3]*dest[2][j%3]));
		}
	}
	return disc;
}

void glmc_mat3_inverse(mat3 dest,mat3 src){
	float det = glmc_mat3_discriminant(src);
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if ((i+j)%2==0){
				dest[j][i] = ((src[(i+1)%3][(j+1)%3]*src[(i+2)%3][(j+2)%3])-(src[(i+2)%3][(j+1)%3]*src[(i+1)%3][(j+2)%3]))/det;
			}
			else{
				dest[j][i] = -((src[(i+1)%3][(j+1)%3]*src[(i+2)%3][(j+2)%3])-(src[(i+2)%3][(j+1)%3]*src[(i+1)%3][(j+2)%3]))/det;
			}
		}
	}
}	


void glmc_mat3_transpose(mat3 dest,mat3 src){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			dest[j][i] = src[i][j];
		}
	}
}