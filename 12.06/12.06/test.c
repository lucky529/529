//int partition(int arr[], int left, int right) {//��������
//    int j = left, i;
//    int selectedValue = arr[right];
//    int temp;
//     ��jָ��Ԥ�ڵ����ĵ�λ��
//     ���α�i�������ұ��������С��ѡ��ֵ�����ӵ�jָ��λ�õ���࣬�����������
//    for (i = left; i < right; i++) {
//        if (arr[i] < selectedValue) {
//             ����i��jλ�õ�ֵ��������jָ���λ��
//            temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//            j++;
//        }
//    }
//    arr[right] = arr[j];
//    arr[j] = selectedValue;
//    return j;
//}
//void quickSort(int arr[], int left, int right) {
//    int q;
//    if (left < right) {
//        q = partition(arr, left, right);
//        quickSort(arr, left, q - 1);
//        quickSort(arr, q + 1, right);
//    }
//}


//int cmp(const void* e1,const void* e2)//�޷�������Сֵ����
//{
//    return *((int*)e1) - *((int*)e2);
//}
//int thirdMax(int* nums, int numsSize) {
//    qsort(nums,numsSize,sizeof(nums[0]),cmp);
//    int pre = 0,cur = 0,max = nums[0];
//    for(int i = 0; i < numsSize; i++)
//    {
//        if(nums[cur] == nums[pre])
//        {
//            pre++;
//        }
//        else
//        {
//            nums[++cur] = nums[pre++];
//        }
//    }
//    if(cur < 2)
//    {      
//        return nums[cur];
//    }
//    else
//    {
//        return nums[cur-2];
//    }
//    return -1;
//}


//int partition(int arr[], int left, int right) {//ʹ�ÿ�������ԭ����д���
//    int j = left, i;
//    int selectedValue = arr[right];
//    int temp;     
//    for (i = left; i < right; i++) {
//        if (arr[i] < selectedValue) {             
//            temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//            j++;
//        }
//    }
//    arr[right] = arr[j];
//    arr[j] = selectedValue;
//    return j;
//}
//void quickSort(int arr[], int left, int right) {
//    int q;
//    if (left < right) {
//        q = partition(arr, left, right);
//        quickSort(arr, left, q - 1);
//        quickSort(arr, q + 1, right);
//    }
//}
//int thirdMax(int* nums, int numsSize) {
//    quickSort(nums,0,numsSize-1);
//    int pre = 0,cur = 0,max = nums[0];
//    for(int i = 0; i < numsSize; i++)
//    {
//        if(nums[cur] == nums[pre])
//        {
//            pre++;
//        }
//        else
//        {
//            nums[++cur] = nums[pre++];
//        }
//    }
//    if(cur < 2)
//    {      
//        return nums[cur];
//    }
//    else
//    {
//        return nums[cur-2];
//    }
//    return -1;
//}

#include<stdio.h>
#include<string.h>
int countSegments(char* s) {
    int i = strlen(s) - 1;	
	int flag = 0;
    int count = 0;
	if(i = 0 && s[0] == ' ')
	{
		return 0;
	}
	else
	{
		return 1;
	}
    while(i > 0)
    {
        while(i > 0 && s[i] == ' ')
	    {
		    i--;
	    }
	    while(i >= 0 && s[i] != ' ')
	    {		    
		    i--;
			flag = 1;
	    }
		if(i == 0 && flag == 0)
		{
			return 0;
		}
        count++;
    }
    return count;
}
int main()
{
	char arr[] = "a";
	countSegments(arr);
	printf("%d",countSegments(arr));
	return 0;
}