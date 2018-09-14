#include "glmc.h"

void glmc_mat4_add(mat4 dest,mat4 src_a,mat4 src_b){
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			dest[i][j] = src_a[i][j] + src_a[i][j];
		}
	}
}

void glmc_mat4_sub(mat4 dest,mat4 src_a,mat4 src_b){
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			dest[i][j] = src_a[i][j] - src_a[i][j];
		}
	}
}

void glmc_mat4_mul(mat4 dest,mat4 src_a,mat4 src_b){
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			dest[i][j] = 0;
			for (int k=0;k<4;k++){
				dest[i][j] += src_a[i][k] * src_a[k][j];
			}
		}
	}
}

void glmc_mat4_div(mat4 dest,mat4 src_a,mat4 src_b){
	mat4 inv;
	glmc_mat4_inverse(inv,src_b);
	glmc_mat4_mul(dest,src_a,inv);
}

void glmc_mat4_mul_scalar(mat4 dest,mat4 src_a,float src){
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			dest[i][j] = src_a[i][j]*src;
		}
	}
}

void glmc_mat4_div_scalar(mat4 dest,mat4 src_a,float src){
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			dest[i][j] = src_a[i][j]/src;
		}
	}
}

void glmc_mat4_normalize(mat4 dest,mat4 src_a){
	float magnitude = 0;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			magnitude += src_a[i][j]*src_a[i][j];
		}
	}
	magnitude = sqrt(magnitude);
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			dest[i][j] = src_a[i][j]/magnitude;
		}
	}
}

void glmc_mat4_madd(mat4 dest,mat4 src_a,mat4 src_b){
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			dest[i][j] += (src_a[i][j]*src_b[i][j]);
		}
	}
}

void glmc_mat4_msub(mat4 dest,mat4 src_a,mat4 src_b){
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			dest[i][j] -= (src_a[i][j]*src_b[i][j]);
		}
	}
}

float glmc_mat4_discriminant(mat4 dest){
	float disc = 0;
	mat3 temp;
	for (int i=0;i<4;i++){
		for (int j=1;j<4;j++){
			for (int k=i+1,t=0;k<i+4;k++,t++){
				temp[j-1][t]=dest[j][k%4];
			}
		}
		disc += dest[0][i]*(glmc_mat3_discriminant(temp));
	}
	return disc;
}
/*
void glmc_mat4_inverse(mat4 dest,mat4 src){
	float det = glmc_mat4_discriminant(src);
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			if ((i+j)%2==0){
				dest[j][i] = ((src[(i+1)%4][(j+1)%4]*src[(i+2)%4][(j+2)%4])-(src[(i+2)%4][(j+1)%4]*src[(i+1)%4][(j+2)%4]))/det;
			}
			else{
				dest[j][i] = -((src[(i+1)%4][(j+1)%4]*src[(i+2)%4][(j+2)%4])-(src[(i+2)%4][(j+1)%4]*src[(i+1)%4][(j+2)%4]))/det;
			}
		}
	}
}
*/	


void glmc_mat4_transpose(mat4 dest,mat4 src){
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			dest[j][i] = src[i][j];
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