#include <stdio.h>
#define MaxN 9

void init(int S[][MaxN]);
int is_legal(int S[][MaxN], int r, int c, int x);
void place(int S[][MaxN], int r, int c, int x);
void read_from_fle(FILE *file_pointer, int S[][MaxN]);

void charint(char Index[][MaxN], int S[][MaxN]);
void writetofile(FILE *file_pointer, int S[][MaxN]);


void main(){
	int S[MaxN][MaxN],hata, hata1,aar, ac,inp,i,j;
	
	hata = 0;
	FILE *Sudooo, *wFile;
	Sudooo = fopen("sudoku.txt", "r+");
	wFile = fopen("SudokuResult.txt", "w");
	init(S);
	read_from_fle(Sudooo, S);

	while(hata==0){	
		scanf("%d", &inp);
		scanf("%d", &aar);	
		scanf("%d", &ac);
			
		hata1 = is_legal(S, aar, ac, inp);
		if (hata1 == 1){
			place(S, aar, ac, inp);
			for (i = 0; i < MaxN; ++i){
				for (j = 0; j < MaxN; ++j){
					printf("%d ", (S[i][j]+48));
				}
				printf("\n");
			}
		}
		else if (hata1 == 0)
			hata++;
		
	}
	writetofile(wFile, S);
}



void init(int S[][MaxN]){
	int i, j;
	for (i = 0; i < MaxN; ++i){
		for (j = 0; j < MaxN; ++j){
			S[i][j] = 0;
		}
	}
	
}

int is_legal(int S[][MaxN], int r, int c, int x){
	int i, j;
	if (S[i][j] == x ||S[i][j] != 0 ||x > 9 ||x < 0 ||r > MaxN ||c > MaxN ||r < 0 ||c < 0){
			printf("ERROR\n");
			return 0;
		}

	for (j = 0; j < MaxN; ++j){
		if (S[r][j] == x)
			printf("ERROR\n");
		return 0;
	}
	for (i = 0; i < MaxN; ++i){
		if (S[i][c] == x)
		printf("ERROR\n");
		return 0;

	}
	for (i = r / 3; (i < (3 * (r/3)) + 3); ++i){
		for (j = (c / 3); j < (3 * (c/3)) + 3 ; ++j){
			if (S[i][j] == x)
			printf("ERROR\n");
			return 0;
		}
	}	
	return 1;
}


void place(int S[][MaxN], int r, int c, int x){
	S[r][c] = x;	
	
}

void read_from_fle(FILE *file_pointer, int S[][MaxN]){
	int i, j;
	char int2char[MaxN][MaxN];
	
	//get2charset(file_pointer, int2char);
	charint(int2char, S);

	for (i = 0; i < MaxN; ++i){
		for (j = 0; j < MaxN; ++j){
			printf("%d ", (S[i][j]+48));
		}
		printf("\n");
	}
	
	
}





void charint(char Index[][MaxN], int S[][MaxN]){
	int i, j;
	for (i = 0; i < MaxN; ++i){
		for (j = 0; j < MaxN; ++j){
			S[i][j] = (int)Index[i][j] - (int)'0';
		}
	}
	
}


void writetofile(FILE *file_pointer, int S[][MaxN]){
	int i, j;
	for (i = 0; i < MaxN; ++i){
		for (j = 0; j < MaxN; ++j){
			fprintf(file_pointer, "%d ", S[i][j]);
		}
		fprintf(file_pointer, "\n");
	}
	
}














