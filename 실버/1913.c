#include<stdio.h>
int main() {
	int N,num,i,j,cnt=1;
	scanf("%d %d", &N, &num);
	int arr[1000][1000] = {0};
	int r=N/2, x=N/2, y=N/2;
	arr[x][y] = cnt;
	for (int k = 1; k <= r; k++) {
		x--;
		for (i = 0; i < 4; i++) {
			for (j = 1; j <= k * 2; j++) {
				if (i == 0 && j == 1) {	
					arr[x][y] = ++cnt;
					continue;
				}
				if (i == 0) y++;	
				else if (i == 1) x++;	
				else if (i == 2) y--;
				else x--;
				arr[x][y] = ++cnt;
			}
		}
	}

	int x1,y1;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d ", arr[i][j]);
			if (arr[i][j] == num) {
				x1 = i;
				y1 = j;
			}
		}
		printf("\n");
	}
	printf("%d %d", x1+1, y1+1);

	return 0;
}
