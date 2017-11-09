

/******************************************************************
Copyright (c) Swapnil Kadam kadamss15.it@coep.ac.in
This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program. 
*********************************************************************/



#include <stdio.h>
int main() {

	int m,n,r,s,a,b,i,j;
	printf("\n\t\t107 white rook				109 white pawn\n\t\t105 white knight			110 white pawn\n\t\t103 white bishop			111 white pawn\n\t\t101 white king				112 white pawn\n\t\t102 white queen				113 white pawn\n\t\t104 white bishop			114 white pawn\n\t\t106 white knight			115 white pawn\n\t\t108 white rook				116 white pawn\n\n\n");
	int ww[8], bb[8], pw[8], pb[8], c[9][9], e ,f, ab1, ab2, am1 = 0, am2 = 0 , ef1, f1, p;
	ww[3] = 101; ww[4] = 102; ww[2] = 103; ww[5] = 104; ww[1] = 105; ww[6] = 106; ww[0] = 107; ww[7] = 108; pw[0] = 109; pw[1] = 110; pw[2] = 111; pw[3] = 112; pw[4] = 113; 	pw[5] = 114; pw[6] = 115; pw[7] = 116;
        bb[3] = 201; bb[4] = 202 ;bb[2] = 203; bb[5] = 204; bb[1] = 205; bb[6] = 206; bb[0] = 207; bb[7] = 208; pb[0] = 209; pb[1] = 210; pb[2] = 211; pb[3] = 212; pb[4] = 		213;		 pb[5] = 214; pb[6] = 215; pb[7] = 216;
	c[0][8] = 1; c[1][8] = 2; c[2][8] = 3; c[3][8] = 4; c[4][8] = 5; c[5][8] = 6; c[6][8] = 7; c[7][8] = 8; c[8][0] = 1; c[8][1] = 2; c[8][2] = 3; c[8][3] = 4; c[8][4] = 5; 	c[8][5] = 6; c[8][6] = 7; c[8][7] = 8; c[8][8] = '\0';
	//int c[8][8], e ,f;  

	printf("\t--------------------------------------------------------------------------\n");	
	for(e=0; e<1; e++){
		printf("\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|");
		for(f=0;f<8; f++){
			c[e][f] = ww[f];
			printf("%d\t|", c[e][f]);
		}
		for(f=8;f<9;f++){
			printf(" | %d\t |", c[0][8]);
		}	
		printf("\n\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|---------------------------------------------------------------- |------|\n");
		//printf("\n\n\n");
	}
	for(e=1; e<2; e++){
		printf("\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|");
		for(f=0;f<8; f++){
			c[e][f] = pw[f];
			printf("%d\t|", c[e][f]);
		}
		for(f=8;f<9;f++){
			printf(" | %d\t |", c[e][f]);
		}
		printf("\n\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|---------------------------------------------------------------- |------|\n");
		//printf("%d", c[0][8]);
 
		//printf("\n\n\n");
	}
	for(e=2; e<6; e++){
		printf("\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|");
		for(f=0;f<8; f++){
			c[e][f] =0;
			printf("%d\t|", c[e][f]);
		}
		for(f=8;f<9;f++){
			printf(" | %d\t |", c[e][f]);
		}
		printf("\n\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|---------------------------------------------------------------- |------|\n");
		//printf("%d", c[0][8]);

		//printf("\n\n\n");
	}
	for(e=6; e<7; e++){
		printf("\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|");
		for(f=0;f<8; f++){
			c[e][f] = pb[f];
			printf("%d\t|", c[e][f]);
		}
		for(f=8;f<9;f++){
			printf(" | %d\t |", c[e][f]);
		}
		printf("\n\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|---------------------------------------------------------------- |------|\n");
		//printf("\n\n\n");
	}
	for(e=7; e<8; e++){
		printf("\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|");
		for(f=0;f<8; f++){
			c[e][f] = bb[f];
			printf("%d\t|", c[e][f]);
		}
		for(f=8;f<9;f++){
			printf(" | %d\t |", c[e][f]);
		}
		printf("\n\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|---------------------------------------------------------------- |------|\n");
		//printf("\n\n\n");
	}
	printf("\t|-----------------------------------------------------------------|------|\n");
	for(e=8;e<9;e++){
		printf("\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t|");
		for(f=0;f<8;f++){
			printf("%d\t|", c[e][f]);
		}
		for(f=8;f<9;f++){
			printf(" | %d\t |", c[e][f]);
		}
		printf("\n\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
		printf("\t--------------------------------------------------------------------------\n");
		//printf("\n\n\n");
	}		
	
	printf("\n\n\t\t207 black rook				209 black pawn\n\t\t205 black knight			210 black pawn\n\t\t203 black bishop			211 black pawn\n\t\t201 black king				212 black pawn\n\t\t202 black queen				213 black pawn\n\t\t204 black bishop			214 black pawn\n\t\t206 black knight			215 black pawn\n\t\t208 black rook				216 black pawn\n\n");


	
	int k=0;
	
	while(k<100){
		p = 0;
		for(e=0;e<8;e++){
			for(f=0;f<8;f++){
				if(c[e][f] == 101 || c[e][f] == 201){
						p++;
				}
			}
		}
		if(p == 1){
			if(k%2 == 0){
				printf("BLACK i.e. 200 series WINS\n");
				break;
			}
			else{
				printf("WHITE i.e. 100 series WINS\n");
				break;
			}
		}
					
					
		if((k%2) == 0){
			printf("WHITE i.e 100 SERIES TURN\n");
		}
		else{
			printf("BLACK i.e 200 SERIES TURN\n");
		}	
		printf("enter row and column repectively from where peice has to be moved\n");
		scanf("%d", &m);
		i = m - 1;
		scanf("%d", &n);
		j = n - 1; 
		printf("enter row and column repectively to where peice has to be moved\n");
		scanf("%d", &r);
		a = r - 1;
		scanf("%d", &s);
		b = s - 1;
		if(a < 8 || b < 8){
			if((c[i][j] == 101 || c[i][j] == 102 || c[i][j] == 103 || c[i][j] == 104 || c[i][j] == 105 || c[i][j] == 106 || c[i][j] == 107 || c[i][j] == 108 || c[i][j] == 109 || c[i][j] == 110 || c[i][j] == 111 || c[i][j] == 112 || c[i][j] == 113 || c[i][j] == 114 || c[i][j] == 115 || c[i][j] == 116) && (c[a][b] == 201 || c[a][b] == 202 || c[a][b] == 203 || c[a][b] == 204 || c[a][b] == 205 || c[a][b] == 206 || c[a][b] == 207 || c[a][b] == 208 || c[a][b] == 209 || c[a][b] == 210 || c[a][b] == 211 || c[a][b] == 212 || c[a][b] == 213 || c[a][b] == 214 || c[a][b] == 215 || c[a][b] == 216 || c[a][b] == 0) || (c[i][j] == 201 || c[i][j] == 202 || c[i][j] == 203 || c[i][j] == 204 || c[i][j] == 205 || c[i][j] == 206 || c[i][j] == 207 || c[i][j] == 208 || c[i][j] == 209 || c[i][j] == 210 || c[i][j] == 211 || c[i][j] == 212 || c[i][j] == 213 || c[i][j] == 214 || c[i][j] == 215 || c[i][j] == 216 ) && (c[a][b] == 101 || c[a][b] == 102 || c[a][b] == 103 || c[a][b] == 104 || c[a][b] == 105 || c[a][b] == 106 || c[a][b] == 107 || c[a][b] == 108 || c[a][b] == 109 || c[a][b] == 110 || c[a][b] == 111 || c[a][b] == 112 || c[a][b] == 113 || c[a][b] == 114 || c[a][b] == 115 || c[a][b] == 116 || c[a][b] == 0)){

				//rook
				if( c[i][j] == 107 || c[i][j] == 207 || c[i][j] == 108 || c[i][j]  ==  208){
					int p,q,a1,x1,x2,x3,x4;
					a1 = c[i][j];
					p = j;
					q = i;
					if(i == 0 && j == 0 && a == 0 && b == 3 && c[0][1] == 0 && c[0][2] == 0){
						printf("castling");
						c[0][1] = c[0][3];
						c[0][2] = c[0][0];
						c[0][3] = 0;
						c[0][0] = 0;
					}
					else if(i == 0 && j == 7 && a == 0 && b == 3 && c[0][4] == 0 && c[0][5] == 0 && c[0][6] == 0){
						printf("castling");
						c[0][5] = c[0][3];
						c[0][4] = c[0][7];
						c[0][3] = 0;
						c[0][7] = 0;
					}
					else if(i == 7 && j == 0 && a == 7 && b == 3 && c[7][1] == 0 && c[7][2] == 0){
						printf("castling");
						c[7][1] = c[7][3];
						c[7][2] = c[7][0];
						c[7][3] = 0;
						c[7][0] = 0;
					}
					else if(i == 7 && j == 7 && a == 7 && b == 3 && c[7][4] == 0 && c[7][5] == 0 && c[7][6] == 0){
						printf("castling");
						c[7][5] = c[7][3];
						c[7][4] = c[7][7];
						c[7][3] = 0;
						c[7][7] = 0;
					}
					else if(a == i){
						if(p > b){
				 			while((p + 1) >= b){
								if(c[i][p-1] == 0){
									if(b == p-1){
										c[a][b] = a1;
										c[i][j] = 0;
										break;
									}
									p-- ;
							
								
								}
								else{
									x1 = p - 1;
									if(x1 == b){
										c[a][b] = a1;
										c[i][j] = 0 ;
										break;
									}
									else{
										printf("invalid move\n");
										break;
									}									
							
								}	
							}
					
						}
						else if(b > p ){
							while(b >= (p - 1)){
								if(c[i][p+1] == 0){
									if(b == p+1){
										c[a][b] = a1;
										c[i][j] = 0;
										break;
									}
									p++ ;
								}
								else{
									x2 = p + 1;
									if(x2 == b){
										c[a][b] = a1;
										c[i][j] = 0 ;
										break;
									}
									else{
										printf("invalid move\n");
										break;
									}
								}
							}
						}
						else{
							printf("invalid move\n");
						}
					}
					else if(b == j){
						if(q > a){
							while((q + 1) >= a){
								if(c[q-1][j] == 0){
									if(a == q-1){
										c[a][b] = a1;
										c[i][j] = 0;
										break;
									}
									q--;
								}
								else{
									x3 = q - 1;
									if(x3 == a){
										c[a][b] = a1;
										c[i][j] = 0 ;
										break;
									}
									else{
										printf("invalid move\n");
										break;
									}
								}
							}
						}
						else if(a > q ){
							while(a >= q){
								if(c[q+1][j] == 0){
							
									if(a == q+1){
										c[a][b] = a1;
										c[i][j] = 0;
										break;
									}
									q++ ;
								}
								else{
									x4 = q + 1;
									if(x4 == a){
										c[a][b] = a1;
										c[i][j] = 0 ;
										break;
									}
									else{
										printf("invalid move\n");
										break;
									}
								}
							}	
						}
						else{
							printf("invalid move\n");
						}
					}
					else{
						printf("invalid move\n");
					}			
				}

				//knight	
				else if( c[i][j] == 105 || c[i][j] == 106 || c[i][j] == 205 || c[i][j]  ==  206){
					if(a==(i-1) && b==(j+2) || a==(i-2) && b==(j+1) || a==(i-2) && b==(j-1) || a==(i-1) && b==(j-2) || a==(i+1) && b==(j-2) || a==(i+2) && 						b==						(j-1) || a==(i+2) 				&& b==(j+1) || a==(i+1) && b==(j+2)){
						c[a][b] = c[i][j];
						c[i][j]=0;
					}
					else{
						printf("invalid move\n");
					}
				}

				//bishop
				else if( c[i][j] == 103 || c[i][j] == 203 || c[i][j] == 104 || c[i][j]  ==  204){
					int n,m;
					if(a>i)
						n= a - i;
					else
						n = i - a;
					if(b>j)
						m = b - j;
					else
						m = j - b;
					if(n == m){
						int a11,b11,a12,b12,a13,b13,a14,b14,p11,p12;
						p11 = i;
						p12 = j;
						if(p12 > b){
							if(p11 > a){
								while(p12>b){
									if(c[p11-1][p12-1]==0){
										if(a == p11-1 && b == p12 -1){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										p11--;
										p12--;
									}
									else{
										a11=p11-1;
										b11=p12-1;
										if(a == a11 && b == b11){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										else{
											printf("invalid move\n");
											break;
										}
									}
								}
						
							}
							else if(a > p11){
								while(p12>b){
									if(c[p11+1][p12-1]==0){
										if(a == p11+1 && b == p12-1){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										p11++;
										p12--;
									}
									else{
										a12=p11+1;
										b12=p12-1;
										if(a == a12 && b == b12){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										else{
											printf("invalid move\n");
											break;
										}
									}
								}
							}
							else
								printf("invalid move\n");
						}
						else if(b > p12){
							if(p11 > a){
								while(b > p12){
									if(c[p11-1][p12+1]==0){
										if(a == p11-1 && b == p12+1){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										p11--;
										p12++;
									}
									else{
										a13=p11-1;
										b13=p12+1;
										if(a == a13 && b == b13){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										else{
											printf("invalid move\n");
											break;
										}
									}
								}	
							}
							else if(a > p11){
								while(b > p12){
									if(c[p11+1][p12+1]==0){
										if(a == p11+1 && b == p12+1){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										p11++;
										p12++;
									}
									else{
										a14=p11+1;
										b14=p12+1;
										if(a == a14 && b == b14){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}	
										else{
											printf("invalid move\n");
											break;
										}
									}
								}
							}
							else
								printf("invalid move\n");
						}							
						//c[a][b] = c[i][j];
						//c[i][j] = 0;
					}
					//else if()
					else{
						printf("invalid move\n");
					}
				}

				//king	
				else if( c[i][j] == 101 || c[i][j] == 201){
					if(a == 0 && b == 0 && i == 0 && j == 3 && c[0][1] == 0 && c[0][2] == 0){
						printf("castling");
						c[0][1] = c[0][3];
						c[0][2] = c[0][0];
						c[0][3] = 0;
						c[0][0] = 0;
					}
					else if(a == 0 && b == 7 && i == 0 && j == 3 && c[0][4] == 0 && c[0][5] == 0 && c[0][6] == 0){
						printf("castling");
						c[0][5] = c[0][3];
						c[0][4] = c[0][7];
						c[0][3] = 0;
						c[0][7] = 0;
					}
					else if(a == 7 && b == 0 && i == 7 && j == 3 && c[7][1] == 0 && c[7][2] == 0){
						printf("castling");
						c[7][1] = c[7][3];
						c[7][2] = c[7][0];
						c[7][3] = 0;
						c[7][0] = 0;
					}
					else if(a == 7 && b == 7 && i == 7 && j == 3 && c[7][4] == 0 && c[7][5] == 0 && c[7][6] == 0){
						printf("castling");
						c[7][5] = c[7][3];
						c[7][4] = c[7][7];
						c[7][3] = 0;
						c[7][7] = 0;
					}
					else if(a == (i + 1) && b == (j) || a == (i-1) && b == (j) || a == (i) && b == (j + 1) || a == (i) && b == (j -1) || a == (i+1) && b == 						(j+1) || a == (i+1) && b 				== (j-1) || a ==(i-1) && b == (j-1) || a == (i-1) ){
						c[a][b] = c[i][j];
						c[i][j] = 0;
					}
					else{
						printf("invalid move\n");
					}
				}

				//queen	
				else if( c[i][j] == 102 || c[i][j] == 202 ){
					int p,q,a1,x1,x2,x3,x4;
					a1 = c[i][j];
					p = j;
					q = i;
					int n,m;
					if(a>i)
						n= a - i;
					else
						n = i - a;
					if(b>j)
						m = b - j;
					else
						m = j - b;
				
					if(a == i){
						if(p > b){
							//c[i][j] = 
				 			while((p + 1) >= b){
								//c[i][j] = 0;
								if(c[i][p-1] == 0){
									if(b == p-1){
										c[a][b] = a1;
										c[i][j] = 0;
										break;
									}
									p-- ;
							
								
								}
								else{
									x1 = p - 1;
									if(x1 == b){
										c[a][b] = a1;
										c[i][j] = 0 ;
										break;
									}
									else{
										printf("invalid move\n");
										break;
									}									
							
								}	
							}
					
						}
						else if(b > p ){
							//c[i][j] = 0;
							while(b >= (p - 1)){
								//c[i][j] = 0;
								if(c[i][p+1] == 0){
									if(b == p+1){
										c[a][b] = a1;
										c[i][j] = 0;
										break;
									}
									p++ ;
								}
								else{
									x2 = p + 1;
									if(x2 == b){
										c[a][b] = a1;
										c[i][j] = 0 ;
										break;
									}
									else{
										printf("invalid move\n");
										break;
									}
								}
							}
						}
						else{
							printf("invalid move\n");
						}
					}
					else if(b == j){
						if(q > a){
							//c[i][j] = 0;
							while((q + 1) >= a){
								//c[i][j] = 0;
								if(c[q-1][j] == 0){
							
									if(a == q-1){
										c[a][b] = a1;
										c[i][j] = 0;
										break;
									}
									q--;
								}
								else{
									x3 = q - 1;
									if(x3 == a){
										c[a][b] = a1;
										c[i][j] = 0 ;
										break;
									}
									else{
										printf("invalid move\n");
										break;
									}
								}
							}
						}
						else if(a > q ){
							//c[i][j] = 0;
							while(a >= q){
								//c[i][j] = 0;
								if(c[q+1][j] == 0){
							
									if(a == q+1){
										c[a][b] = a1;
										c[i][j] = 0;
										break;
									}
									q++ ;
								}
								else{
									x4 = q + 1;
									if(x4 == a){
										c[a][b] = a1;
										c[i][j] = 0 ;
										break;
									}
									else{
										printf("invalid move\n");
										break;
									}
								}
							}	
						}
						else{
							printf("invalid move\n");
						}
					}
					else if(n == m){
						int a11,b11,a12,b12,a13,b13,a14,b14,p11,p12;
						p11 = i;
						p12 = j;
						if(p12 > b){
							if(p11 > a){
								while(p12>b){
									if(c[p11-1][p12-1]==0){
										if(a == p11-1 && b == p12 -1){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										p11--;
										p12--;
									}
									else{
										a11=p11-1;
										b11=p12-1;
										if(a == a11 && b == b11){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										else{
											printf("invalid move\n");
											break;
										}
									}
								}
						
							}
							else if(a > p11){
								while(p12>b){
									if(c[p11+1][p12-1]==0){
										if(a == p11+1 && b == p12-1){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										p11++;
										p12--;
									}
									else{
										a12=p11+1;
										b12=p12-1;
										if(a == a12 && b == b12){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										else{
											printf("invalid move\n");
											break;
										}
									}
								}
							}
							else
								printf("invalid move\n");
						}
						else if(b > p12){
							if(p11 > a){
								while(b > p12){
									if(c[p11-1][p12+1]==0){
										if(a == p11-1 && b == p12+1){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										p11--;
										p12++;
									}
									else{
										a13=p11-1;
										b13=p12+1;
										if(a == a13 && b == b13){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										else{
											printf("invalid move\n");
											break;
										}
									}
								}	
							}
							else if(a > p11){
								while(b > p12){
									if(c[p11+1][p12+1]==0){
										if(a == p11+1 && b == p12+1){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}
										p11++;
										p12++;
									}
									else{
										a14=p11+1;
										b14=p12+1;
										if(a == a14 && b == b14){
											c[a][b] = c[i][j];
											c[i][j] = 0;
											break;
										}	
										else{
											printf("invalid move\n");
											break;
										}
									}
								}
							}
							else
								printf("invalid move\n");
						}
					}			
					else{
						printf("invalid move\n");
					}
				}

				//pawn white
				else if( c[i][j] == 109 || c[i][j] == 110 || c[i][j] == 111 || c[i][j] == 112 || c[i][j] == 113 || c[i][j] == 114 || c[i][j] == 115 || c[i][j] == 						116 ){
					if( a == (i + 1) && b ==  (j) || b == j && a == 3 && i == 1){
						if(c[a][b] == 0){
							c[a][b] = c[i][j] ;
							c[i][j] = 0;
							if(a == 7){
								int b123;
								printf("\nenter from one of these to replace %d i.e pawn:\n107 for rook\n105 for knight\n103 for bishop\n102 for queen\n", c[a][b]);
								scanf("%d", &b123);
								c[a][b] = b123;
							}
						}
						else{
							printf("invalid move\n");
						}
					}
					else if( a == (i + 1) && b ==  (j - 1) || a == (i + 1) && b ==  (j + 1) ){
						if(c[a][b] != 0){
							c[a][b] = c[i][j] ;
							c[i][j] = 0;
							if(a == 7){
								int c123;
								printf("\nenter from one of these to replace %d i.e pawn:\n107 for rook\n105 for knight\n103 for bishop\n102 for queen\n", c[a][b]);
								scanf("%d", &c123);
								c[a][b] = c123;
							}
						}
						else{
							printf("invalid move\n");
						}
					}
			
					else{
						printf("invalid move\n");
					}
				}

				//pawn black
				else if( c[i][j] == 209 || c[i][j] == 210 || c[i][j] == 211 || c[i][j] == 212 || c[i][j] == 213 || c[i][j] == 214 || c[i][j] == 215 || c[i][j] == 						216 ){
					if( a == (i - 1) && b ==  (j) || i == 6 && a == 4 && b == (j) ){
						if(c[a][b] == 0){
							c[a][b] = c[i][j] ;
							c[i][j] = 0;
							if(a == 0){
								int a123;
								printf("\nenter from one of these to replace %d i.e pawn:\n107 for rook\n105 for knight\n103 for bishop\n102 for queen\n", c[a][b]);
								scanf("%d", &a123);
								c[a][b] = a123;
							}
						}
						else{
							printf("invalid move\n");
						}
					}
					else if( a == (i - 1) && b ==  (j - 1) || a == (i - 1) && b ==  (j + 1) ){
						if(c[a][b] != 0){
							c[a][b] = c[i][j] ;
							c[i][j] = 0;
							if(a == 0){
								int d123;
								printf("\nenter from one of these to replace %d i.e pawn:\n207 for rook\n205 for knight\n203 for bishop\n202 for queen\n", c[a][b]);
								scanf("%d", &d123);
								c[a][b] = d123;
							}
						}
						else{
							printf("invalid move\n");
						}
					}
					else{
						printf("invalid move\n");
					}
				}


				else{
					printf("invalid position\n");
				}
			}
			else
				printf("invalid move; can't kill the player from the same team\n");
		}
		else
			printf("invalid position\n");
		printf("\n");
		c[8][8] = '\0';
		printf("\t--------------------------------------------------------------------------\n");
		for(e=0; e<8; e++){
			printf("\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
			printf("\t|");
			for(f=0;f<8; f++){
				printf("%d\t|", c[e][f]);

			}
			for(f=8;f<9; f++){
				printf(" | %d\t |", c[e][f]);

			}
			printf("\n\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
			printf("\t|---------------------------------------------------------------- |------|\n");
		}
		printf("\t|-----------------------------------------------------------------|------|\n");
		for(e=8; e<9; e++){
			printf("\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
			printf("\t|");
			for(f=0;f<8; f++){
				printf("%d\t|", c[e][f]);

			}
			for(f=8;f<9; f++){
				printf(" | %d\t |", c[e][f]);

			}
			printf("\n\t|\t|\t|\t|\t|\t|\t|\t|\t| |\t |\n");
			printf("\t--------------------------------------------------------------------------\n");
		}
		printf("\n");
		k++;
		
	}
	printf("game drawn");
			
	return 0;
}




