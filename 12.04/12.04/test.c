//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int* ans = (int*)malloc(sizeof(int)*(nums1Size+nums2Size));
//	int k = 0;
//	for(int i = 0; i < nums1Size; i++)
//	{
//		for(int j = 0; j < nums2Size; j++)
//		{
//			if(nums1[i] == nums2[j])
//			{
//				ans[k++] = nums2[j];
//			}
//		}
//	}
//	return ans;
//}
//
//int removeDuplicates(int* nums, int numsSize)//����Ľ���
//{
//    int pre = 0, cur = 0;
//    if (numsSize == 0)
//        return 0;
//    while (cur < numsSize)
//    {
//        if (nums[pre] == nums[cur])
//        {
//            cur++;
//        }
//        else
//        {
//            nums[++pre] = nums[cur++];
//        }
//    }
//    return pre + 1;
//}
//int amp(const void* e1, const void* e2)
//{
//    return *((int*)e1) - *((int*)e2);
//}
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//  int* ans = (int*)malloc(sizeof(int)*nums2Size);
//	*returnSize = 0;
//	for(int i = 0; i < nums1Size; i++)
//	{
//		for(int j = 0; j < nums2Size; j++)
//		{
//			if(nums1[i] == nums2[j])
//			{
//				ans[(*returnSize)++] = nums2[j];
//			}
//		}
//	}
//  qsort(ans,*returnSize,sizeof(ans[0]),amp);    
//  *returnSize = removeDuplicates(ans,*returnSize);
//	return ans;
//}

//int cmp(const void* e1, const void* e2)
//{
//    return *((int*)e1) - *((int*)e2);
//}
//int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int i = 0, j = 0;
//    int* ans = (int*)malloc(sizeof(int)*nums2Size);
//	  *returnSize = 0;
//    qsort(nums1,nums1Size,sizeof(nums1[0]),cmp);
//    qsort(nums2,nums2Size,sizeof(nums2[0]),cmp);
//    while(i < nums1Size && j < nums2Size)
//    {
//        if(nums1[i] > nums2[j])
//        {
//            j++;
//        }
//        else if(nums1[i] == nums2[j])
//        {
//            ans[(* returnSize)++] = nums1[i];
//            i++;
//            j++;
//        }
//        else
//        {
//            i++;
//        }
//    }
//    return ans;
//}


//ɾ������Ԫ��
{
	ListNode* prev = NULL;
	ListNode* cur = pHead;
	ListNode* next = pHead -> next;
	if(pHead == NULL || pHead -> next == NULL) return pHead;
	while(next)
	{		
		if(cur -> val == next -> val)
		{
			//����ҵ�һ��ֵ����ȵĽ��
			next = next -> next;
			while(next)
			{
				if(next -> val != cur -> val)
					break;
				next = next -> next;
			}
			//����ɾ��cur - next ֮������нڵ�
			while(cur != next)
			{
				struct ListNode* temp = cur;
				cur = cur -> next;
				free(temp);
			}
			//������������
			if(prev == NULL)
			{
				pHead = cur;//cur��next��λ����ͬ
			}
			else
			{
				prev -> next = next;
			}
			if(next)//�ж��ǲ��ǿ��Լ��������
			{
				next = next -> next;
			}
		}
		else
		{
			prev = cur;
			cur = next;
			next = next -> next;
		}
	}
	return pHead;
}