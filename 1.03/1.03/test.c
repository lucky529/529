#define _CRT_SECURE_NO_WARNINGS 1
int** flipAndInvertImage(int** A, int ARowSize, int *AColSizes, int** columnSizes, int* returnSize) {//��תͼ��
    // ��ʼ������ֵ
    int ** flipped = malloc(ARowSize * sizeof(int *));
    *columnSizes = malloc(ARowSize * sizeof(int));
    *returnSize = ARowSize;
    for (int i = 0; i < ARowSize; i++) {
        // ������
        int *row = A[i];
        int rowItemCount = AColSizes[i];

        // ��ֵ�� i �е� Ԫ�ظ���
        (*columnSizes)[i] = rowItemCount;
        int *rowFlipped = malloc(rowItemCount * sizeof(int));
        // ����ÿһ�� ˮƽ��ת����ת
        for (int j = 0; j < rowItemCount; j++) {
            // ȡ��ԭֵ
            int original = row[j];
            // ��ת
            int reversal = !original;
            // ����װ��
            int index = rowItemCount - j - 1;
            rowFlipped[index] = reversal;
        }
        flipped[i] = rowFlipped;
    }
    return flipped;
}