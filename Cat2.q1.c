//c array
/*2d array
Author Kelvin Mwema Mutua 
Registration number CT101/G/24268/24
Date 7 Nov 2024
*/
 #include<stdio.h>
 int main(){
    int i,j,k;
    int scores[2][2][2]={
       {{65,92},{84,72}},
       {{35,70},{59,67}}
       };
       for(i=0;i<2;i++){
        for(j=0;j<2;j++){
         for(k=0;k<2;k++){
          printf("scores [%d][%d][%d]=%d\n",i,j,k, scores [i][j][k]);
         }
        }
       }
       return 0;
 }
