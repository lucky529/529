//bool check(char tmp)
//{
//	return tmp == ' ';
//}
//int countSegments(char* s) {
//	int len = strlen(s);
//	int ans = 0;
//	for(int i = 0; i < len; i++)
//	{
//		if(check(s[i]))
//		{
//			ans++;
//			while(i != len && check(s[i])) i++;
//		}
//	}
//	if(check(s[0])) ans--;
//	if(check(s[len - 1])) ans--;
//	return ans + 1;
    ListNode* middleNode(ListNode* head) {//°ïÅóÓÑÐÞbug
        ListNode*cur = head;
        ListNode*next = head->next;
        if(head == NULL)
        {
            return head;
        }
        size_t count = 0;
        while(cur)
        {
            cur = cur->next;
            count++;
        }
        if(count%2 == 0)
        {
            for(size_t i=0; i<=count/2; i++)
            {
                if(i == count/2)
                {
                  ListNode*H = cur->val;
                    break;
                }
                cur = cur->next;
            }
        }
        else
        {
            for(size_t i=0; i<=count/2+1; i++)
            {
                if(i == count/2+1)
                {
                  ListNode*H = cur->val;
                    break;
                }
                cur = cur->next;
            }
        }
        return H;
    }
};
