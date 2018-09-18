#include "glmc.h"

void glmc_mat4_add(mat4 dest,mat4 src_a,mat4 src_b){
	dest[0][0] = src_a[0][0] + src_b[0][0];
	dest[0][1] = src_a[0][1] + src_b[0][1];
	dest[0][2] = src_a[0][2] + src_b[0][2];
	dest[0][3] = src_a[0][3] + src_b[0][3];
	dest[1][0] = src_a[1][0] + src_b[1][0];
	dest[1][1] = src_a[1][1] + src_b[1][1];
	dest[1][2] = src_a[1][2] + src_b[1][2];
	dest[1][3] = src_a[1][3] + src_b[1][3];
	dest[2][0] = src_a[2][0] + src_b[2][0];
	dest[2][1] = src_a[2][1] + src_b[2][1];
	dest[2][2] = src_a[2][2] + src_b[2][2];
	dest[2][3] = src_a[2][3] + src_b[2][3];
	dest[3][0] = src_a[3][0] + src_b[3][0];
	dest[3][1] = src_a[3][1] + src_b[3][1];
	dest[3][2] = src_a[3][2] + src_b[3][2];
	dest[3][3] = src_a[3][3] + src_b[3][3];
}

void glmc_mat4_sub(mat4 dest,mat4 src_a,mat4 src_b){
	dest[0][0] = src_a[0][0] - src_b[0][0];
	dest[0][1] = src_a[0][1] - src_b[0][1];
	dest[0][2] = src_a[0][2] - src_b[0][2];
	dest[0][3] = src_a[0][3] - src_b[0][3];
	dest[1][0] = src_a[1][0] - src_b[1][0];
	dest[1][1] = src_a[1][1] - src_b[1][1];
	dest[1][2] = src_a[1][2] - src_b[1][2];
	dest[1][3] = src_a[1][3] - src_b[1][3];
	dest[2][0] = src_a[2][0] - src_b[2][0];
	dest[2][1] = src_a[2][1] - src_b[2][1];
	dest[2][2] = src_a[2][2] - src_b[2][2];
	dest[2][3] = src_a[2][3] - src_b[2][3];
	dest[3][0] = src_a[3][0] - src_b[3][0];
	dest[3][1] = src_a[3][1] - src_b[3][1];
	dest[3][2] = src_a[3][2] - src_b[3][2];
	dest[3][3] = src_a[3][3] - src_b[3][3];
}

void glmc_mat4_mul(mat4 dest,mat4 src_a,mat4 src_b){
	dest[0][0] = src_a[0][0]*src_b[0][0] + src_a[0][1]*src_b[1][0] + src_a[0][2]*src_b[2][0] + src_a[0][3]*src_b[3][0];
	dest[0][1] = src_a[0][0]*src_b[0][1] + src_a[0][1]*src_b[1][1] + src_a[0][2]*src_b[2][1] + src_a[0][3]*src_b[3][1];
	dest[0][2] = src_a[0][0]*src_b[0][2] + src_a[0][1]*src_b[1][2] + src_a[0][2]*src_b[2][2] + src_a[0][3]*src_b[3][2];
	dest[0][3] = src_a[0][0]*src_b[0][3] + src_a[0][1]*src_b[1][3] + src_a[0][2]*src_b[2][3] + src_a[0][3]*src_b[3][3];
	dest[1][0] = src_a[1][0]*src_b[0][0] + src_a[1][1]*src_b[1][0] + src_a[1][2]*src_b[2][0] + src_a[1][3]*src_b[3][0];
	dest[1][1] = src_a[1][0]*src_b[0][1] + src_a[1][1]*src_b[1][1] + src_a[1][2]*src_b[2][1] + src_a[1][3]*src_b[3][1];
	dest[1][2] = src_a[1][0]*src_b[0][2] + src_a[1][1]*src_b[1][2] + src_a[1][2]*src_b[2][2] + src_a[1][3]*src_b[3][2];
	dest[1][3] = src_a[1][0]*src_b[0][3] + src_a[1][1]*src_b[1][3] + src_a[1][2]*src_b[2][3] + src_a[1][3]*src_b[3][3];
	dest[2][0] = src_a[2][0]*src_b[0][0] + src_a[2][1]*src_b[2][0] + src_a[2][2]*src_b[2][0] + src_a[2][3]*src_b[3][0];
	dest[2][1] = src_a[2][0]*src_b[0][1] + src_a[2][1]*src_b[2][1] + src_a[2][2]*src_b[2][1] + src_a[2][3]*src_b[3][1];
	dest[2][2] = src_a[2][0]*src_b[0][2] + src_a[2][1]*src_b[2][2] + src_a[2][2]*src_b[2][2] + src_a[2][3]*src_b[3][2];
	dest[2][3] = src_a[2][0]*src_b[0][3] + src_a[2][1]*src_b[2][3] + src_a[2][2]*src_b[2][3] + src_a[2][3]*src_b[3][3];
	dest[3][0] = src_a[3][0]*src_b[0][0] + src_a[3][1]*src_b[1][0] + src_a[3][2]*src_b[2][0] + src_a[3][3]*src_b[3][0];
	dest[3][1] = src_a[3][0]*src_b[0][1] + src_a[3][1]*src_b[1][1] + src_a[3][2]*src_b[2][1] + src_a[3][3]*src_b[3][1];
	dest[3][2] = src_a[3][0]*src_b[0][2] + src_a[3][1]*src_b[1][2] + src_a[3][2]*src_b[2][2] + src_a[3][3]*src_b[3][2];
	dest[3][3] = src_a[3][0]*src_b[0][3] + src_a[3][1]*src_b[1][3] + src_a[3][2]*src_b[2][3] + src_a[3][3]*src_b[3][3];
}

void glmc_mat4_div(mat4 dest,mat4 src_a,mat4 src_b){
	mat4 inv;
	glmc_mat4_inverse(inv,src_b);
	glmc_mat4_mul(dest,src_a,inv);
}

void glmc_mat4_mul_scalar(mat4 dest,mat4 src_a,float src){
	dest[0][0] = src_a[0][0] * src ;
	dest[0][1] = src_a[0][1] * src ;
	dest[0][2] = src_a[0][2] * src ;
	dest[0][3] = src_a[0][3] * src ;
	dest[1][0] = src_a[1][0] * src ;
	dest[1][1] = src_a[1][1] * src ;
	dest[1][2] = src_a[1][2] * src ;
	dest[1][3] = src_a[1][3] * src ;
	dest[2][0] = src_a[2][0] * src ;
	dest[2][1] = src_a[2][1] * src ;
	dest[2][2] = src_a[2][2] * src ;
	dest[2][3] = src_a[2][3] * src ;
	dest[3][0] = src_a[3][0] * src ;
	dest[3][1] = src_a[3][1] * src ;
	dest[3][2] = src_a[3][2] * src ;
	dest[3][3] = src_a[3][3] * src ;
}

void glmc_mat4_div_scalar(mat4 dest,mat4 src_a,float src){
	dest[0][0] = src_a[0][0] / src ;
	dest[0][1] = src_a[0][1] / src ;
	dest[0][2] = src_a[0][2] / src ;
	dest[0][3] = src_a[0][3] / src ;
	dest[1][0] = src_a[1][0] / src ;
	dest[1][1] = src_a[1][1] / src ;
	dest[1][2] = src_a[1][2] / src ;
	dest[1][3] = src_a[1][3] / src ;
	dest[2][0] = src_a[2][0] / src ;
	dest[2][1] = src_a[2][1] / src ;
	dest[2][2] = src_a[2][2] / src ;
	dest[2][3] = src_a[2][3] / src ;
	dest[3][0] = src_a[3][0] / src ;
	dest[3][1] = src_a[3][1] / src ;
	dest[3][2] = src_a[3][2] / src ;
	dest[3][3] = src_a[3][3] / src ;
}

void glmc_mat4_normalize(mat4 dest,mat4 src_a){
	float magnitude = 0;
	magnitude += src_a[0][0] * src_a[0][0];
	magnitude += src_a[0][1] * src_a[0][1];
	magnitude += src_a[0][2] * src_a[0][2];
	magnitude += src_a[0][3] * src_a[0][3];
	magnitude += src_a[1][0] * src_a[1][0];
	magnitude += src_a[1][1] * src_a[1][1];
	magnitude += src_a[1][2] * src_a[1][2];
	magnitude += src_a[1][3] * src_a[1][3];
	magnitude += src_a[2][0] * src_a[2][0];
	magnitude += src_a[2][1] * src_a[2][1];
	magnitude += src_a[2][2] * src_a[2][2];
	magnitude += src_a[2][3] * src_a[2][3];
	magnitude += src_a[3][0] * src_a[3][0];
	magnitude += src_a[3][1] * src_a[3][1];
	magnitude += src_a[3][2] * src_a[3][2];
	magnitude += src_a[3][3] * src_a[3][3];
	magnitude = sqrt(magnitude);
	glmc_mat4_div_scalar(dest,src_a,magnitude);
}


void glmc_mat4_madd(mat4 dest,mat4 src_a,mat4 src_b){
	dest[0][0] += src_a[0][0]*src_b[0][0] + src_a[0][1]*src_b[1][0] + src_a[0][2]*src_b[2][0] + src_a[0][3]*src_b[3][0];
	dest[0][1] += src_a[0][0]*src_b[0][1] + src_a[0][1]*src_b[1][1] + src_a[0][2]*src_b[2][1] + src_a[0][3]*src_b[3][1];
	dest[0][2] += src_a[0][0]*src_b[0][2] + src_a[0][1]*src_b[1][2] + src_a[0][2]*src_b[2][2] + src_a[0][3]*src_b[3][2];
	dest[0][3] += src_a[0][0]*src_b[0][3] + src_a[0][1]*src_b[1][3] + src_a[0][2]*src_b[2][3] + src_a[0][3]*src_b[3][3];
	dest[1][0] += src_a[1][0]*src_b[0][0] + src_a[1][1]*src_b[1][0] + src_a[1][2]*src_b[2][0] + src_a[1][3]*src_b[3][0];
	dest[1][1] += src_a[1][0]*src_b[0][1] + src_a[1][1]*src_b[1][1] + src_a[1][2]*src_b[2][1] + src_a[1][3]*src_b[3][1];
	dest[1][2] += src_a[1][0]*src_b[0][2] + src_a[1][1]*src_b[1][2] + src_a[1][2]*src_b[2][2] + src_a[1][3]*src_b[3][2];
	dest[1][3] += src_a[1][0]*src_b[0][3] + src_a[1][1]*src_b[1][3] + src_a[1][2]*src_b[2][3] + src_a[1][3]*src_b[3][3];
	dest[2][0] += src_a[2][0]*src_b[0][0] + src_a[2][1]*src_b[2][0] + src_a[2][2]*src_b[2][0] + src_a[2][3]*src_b[3][0];
	dest[2][1] += src_a[2][0]*src_b[0][1] + src_a[2][1]*src_b[2][1] + src_a[2][2]*src_b[2][1] + src_a[2][3]*src_b[3][1];
	dest[2][2] += src_a[2][0]*src_b[0][2] + src_a[2][1]*src_b[2][2] + src_a[2][2]*src_b[2][2] + src_a[2][3]*src_b[3][2];
	dest[2][3] += src_a[2][0]*src_b[0][3] + src_a[2][1]*src_b[2][3] + src_a[2][2]*src_b[2][3] + src_a[2][3]*src_b[3][3];
	dest[3][0] += src_a[3][0]*src_b[0][0] + src_a[3][1]*src_b[1][0] + src_a[3][2]*src_b[2][0] + src_a[3][3]*src_b[3][0];
	dest[3][1] += src_a[3][0]*src_b[0][1] + src_a[3][1]*src_b[1][1] + src_a[3][2]*src_b[2][1] + src_a[3][3]*src_b[3][1];
	dest[3][2] += src_a[3][0]*src_b[0][2] + src_a[3][1]*src_b[1][2] + src_a[3][2]*src_b[2][2] + src_a[3][3]*src_b[3][2];
	dest[3][3] += src_a[3][0]*src_b[0][3] + src_a[3][1]*src_b[1][3] + src_a[3][2]*src_b[2][3] + src_a[3][3]*src_b[3][3];
}

void glmc_mat4_msub(mat4 dest,mat4 src_a,mat4 src_b){
	dest[0][0] -= src_a[0][0]*src_b[0][0] + src_a[0][1]*src_b[1][0] + src_a[0][2]*src_b[2][0] + src_a[0][3]*src_b[3][0];
	dest[0][1] -= src_a[0][0]*src_b[0][1] + src_a[0][1]*src_b[1][1] + src_a[0][2]*src_b[2][1] + src_a[0][3]*src_b[3][1];
	dest[0][2] -= src_a[0][0]*src_b[0][2] + src_a[0][1]*src_b[1][2] + src_a[0][2]*src_b[2][2] + src_a[0][3]*src_b[3][2];
	dest[0][3] -= src_a[0][0]*src_b[0][3] + src_a[0][1]*src_b[1][3] + src_a[0][2]*src_b[2][3] + src_a[0][3]*src_b[3][3];
	dest[1][0] -= src_a[1][0]*src_b[0][0] + src_a[1][1]*src_b[1][0] + src_a[1][2]*src_b[2][0] + src_a[1][3]*src_b[3][0];
	dest[1][1] -= src_a[1][0]*src_b[0][1] + src_a[1][1]*src_b[1][1] + src_a[1][2]*src_b[2][1] + src_a[1][3]*src_b[3][1];
	dest[1][2] -= src_a[1][0]*src_b[0][2] + src_a[1][1]*src_b[1][2] + src_a[1][2]*src_b[2][2] + src_a[1][3]*src_b[3][2];
	dest[1][3] -= src_a[1][0]*src_b[0][3] + src_a[1][1]*src_b[1][3] + src_a[1][2]*src_b[2][3] + src_a[1][3]*src_b[3][3];
	dest[2][0] -= src_a[2][0]*src_b[0][0] + src_a[2][1]*src_b[2][0] + src_a[2][2]*src_b[2][0] + src_a[2][3]*src_b[3][0];
	dest[2][1] -= src_a[2][0]*src_b[0][1] + src_a[2][1]*src_b[2][1] + src_a[2][2]*src_b[2][1] + src_a[2][3]*src_b[3][1];
	dest[2][2] -= src_a[2][0]*src_b[0][2] + src_a[2][1]*src_b[2][2] + src_a[2][2]*src_b[2][2] + src_a[2][3]*src_b[3][2];
	dest[2][3] -= src_a[2][0]*src_b[0][3] + src_a[2][1]*src_b[2][3] + src_a[2][2]*src_b[2][3] + src_a[2][3]*src_b[3][3];
	dest[3][0] -= src_a[3][0]*src_b[0][0] + src_a[3][1]*src_b[1][0] + src_a[3][2]*src_b[2][0] + src_a[3][3]*src_b[3][0];
	dest[3][1] -= src_a[3][0]*src_b[0][1] + src_a[3][1]*src_b[1][1] + src_a[3][2]*src_b[2][1] + src_a[3][3]*src_b[3][1];
	dest[3][2] -= src_a[3][0]*src_b[0][2] + src_a[3][1]*src_b[1][2] + src_a[3][2]*src_b[2][2] + src_a[3][3]*src_b[3][2];
	dest[3][3] -= src_a[3][0]*src_b[0][3] + src_a[3][1]*src_b[1][3] + src_a[3][2]*src_b[2][3] + src_a[3][3]*src_b[3][3];
}

float glmc_mat4_discriminant(mat4 dest){
	float disc = 0;
	mat3 temp ;
	int i,j,k;
	for (i=0;i<4;i++){
		for (j=i+1;j<i+4;j++){
			for (k=1;k<4;k++){
				temp[j-i-1][k-1] = dest[j%4][k]; 
			}
		}
		if(i%2==0){
			disc += dest[0][i]*glmc_mat3_discriminant(temp);
		}
		else{
			disc -= dest[0][i]*glmc_mat3_discriminant(temp);
		}
	}
	return disc;
}

void glmc_mat4_inverse(mat4 dest,mat4 src){
	float det = glmc_mat4_discriminant(src);
	mat3 temp;
	int i,j,a,b;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			for(a=i+1;a<i+4;a++){
				for(b=j+1;b<i+4;b++){
					temp[a-i-1][b-j-1]=src[a%4][b%4];
				}
			}
			if((i+j)%2==0){
				dest[j][i] = src[i][j]*(glmc_mat3_discriminant(temp))/det;
			}
			else{
				dest[j][i] = -src[i][j]*(glmc_mat3_discriminant(temp))/det;
			}
		}
	}
}
	


void glmc_mat4_transpose(mat4 dest,mat4 src){
	dest[0][0] = src[0][0];
	dest[0][1] = src[1][0];
	dest[0][2] = src[2][0];
	dest[0][3] = src[3][0];
	dest[1][0] = src[0][1];
	dest[1][1] = src[1][1];
	dest[1][2] = src[2][1];
	dest[1][3] = src[3][1];
	dest[2][0] = src[0][2];
	dest[2][1] = src[1][2];
	dest[2][2] = src[2][2];
	dest[2][3] = src[3][2];
	dest[3][0] = src[0][3];
	dest[3][1] = src[1][3];
	dest[3][2] = src[2][3];
	dest[3][3] = src[3][3];
}

float glmc_mat3_discriminant(mat3 dest){
	float disc = 0;
	disc += dest[0][0]*(dest[1][1]*dest[2][2] - dest[1][2]*dest[2][1]);
	disc += dest[0][1]*(dest[1][0]*dest[2][2] - dest[1][2]*dest[2][0]);
	disc += dest[0][2]*(dest[1][0]*dest[2][1] - dest[1][1]*dest[2][0]);
	return disc;
}