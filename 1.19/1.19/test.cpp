int** generate(int numRows, int** columnSizes) {
	int i = 0;
	//开辟存放杨辉三角的二维数组
	int **arr = (int **)calloc(numRows, sizeof(int*));
	for (i = 0; i<numRows; i++)
	{
		arr[i] = (int*)calloc((i + 1), sizeof(int));
	}
	*columnSizes = (int*)calloc(numRows, sizeof(int));
	for (i = 0; i<numRows; i++)
	{
		int j = 0;
		columnSizes[0][i] = i;
		for (j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
				arr[i][j] = 1;
			else if (i>1 && j>0)
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	return arr;
}