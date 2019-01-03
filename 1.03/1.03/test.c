#define _CRT_SECURE_NO_WARNINGS 1
int** flipAndInvertImage(int** A, int ARowSize, int *AColSizes, int** columnSizes, int* returnSize) {//旋转图形
    // 初始化返回值
    int ** flipped = malloc(ARowSize * sizeof(int *));
    *columnSizes = malloc(ARowSize * sizeof(int));
    *returnSize = ARowSize;
    for (int i = 0; i < ARowSize; i++) {
        // 行数组
        int *row = A[i];
        int rowItemCount = AColSizes[i];

        // 赋值第 i 行的 元素个数
        (*columnSizes)[i] = rowItemCount;
        int *rowFlipped = malloc(rowItemCount * sizeof(int));
        // 遍历每一行 水平翻转，反转
        for (int j = 0; j < rowItemCount; j++) {
            // 取出原值
            int original = row[j];
            // 反转
            int reversal = !original;
            // 逆序装入
            int index = rowItemCount - j - 1;
            rowFlipped[index] = reversal;
        }
        flipped[i] = rowFlipped;
    }
    return flipped;
}