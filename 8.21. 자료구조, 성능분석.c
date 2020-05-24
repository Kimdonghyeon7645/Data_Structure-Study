void add(int a[][MAX_SIZE]...){		// 시간 계산 법 
	int i, j;
	for(i=0; i<rows; i++){				// rows+1 
		for(j=0; j<cols; j++){			// rows *(cols+1)
			c[i][j]= a[i][j] + b[i][j];	//rows *cols
		}
	}	
}
