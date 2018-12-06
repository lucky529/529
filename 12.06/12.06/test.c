//int partition(int arr[], int left, int right) {//快速排序
//    int j = left, i;
//    int selectedValue = arr[right];
//    int temp;
//     用j指定预期的中心点位置
//     用游标i从左向右遍历，如果小于选定值，则扔到j指定位置的左侧，否则继续向右
//    for (i = left; i < right; i++) {
//        if (arr[i] < selectedValue) {
//             交换i与j位置的值，并更新j指向的位置
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


//int cmp(const void* e1,const void* e2)//无法处理最小值问题
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


//int partition(int arr[], int left, int right) {//使用快速排序原理进行处理
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