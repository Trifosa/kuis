//Library
#include <stdio.h>
#include <string.h>

int countWord(char line[]){
	int i;
	int jml = 0;
	for(i=0;i<strlen(line);i++){
		if(((line[i] == ' ')&&(line[i+1] != ' '))||(line[i] == '\n')){
			if(line[i] == ' ' || line[i] == '\n'){
				jml++;
			}
		}
	}
	return jml;
}

int main(){
	FILE *text; //untuk membaca file
	
	char dir[100]; //untuk directory file
	printf("Masukkan nama file: ");
	scanf("%s", dir); //meminta masukan directory file

	text = fopen(dir, "r"); //membaca file

	char temp[1000][1000]; //penampung kata
	
	int n = 0;
	while(fgets(temp[n], 1000, text) != NULL){
		n++;
	}

	int i;
	int jml = 0;
	for(i=0;i<n;i++){
		jml += countWord(temp[i]);
	}

	printf("Jumlah kata = %d\n", jml);
	return 0;
}
