//#include<stdio.h>//A-Z每个字符减去64后代表的数字大小
//int main()
//{
//	printf("%d",'Z'- 64);
//	return 0;
//}

//int titleToNumber(char* s) {//二十六进制数转换十进制数
//    int len = strlen(s);
//    int num = 0;
//    int j = 0;
//    for(int i = len - 1; i >= 0; i--)
//    {
//        num = num + (s[i]-64)*pow(26,j++);//从最后一位开始处理
//    }
//    return num;
//}

//char* toLowerCase(char* str) {//转换成小写字母
//    int len = strlen(str);
//    for(int i = 0; i < len; i++)
//    {
//        if(str[i] >= 65 && str[i] < 97)
//        {
//            str[i] = str[i] + 32;
//        }
//    }
//    return str;
//}

//bool isRectangleOverlap(int* rec1, int rec1Size, int* rec2, int rec2Size) {//判断俩个矩形是否重叠
//    return !(rec2[0] >= rec1[2] 
//             || rec2[2] <= rec1[0] 
//             || rec2[1] >= rec1[3] 
//             || rec2[3] <= rec1[1]);
//}

//bool isRectangleOverlap(int* rec1, int rec1Size, int* rec2, int rec2Size) {
//    return rec2[0] < rec1[2] 
//             && rec2[2] > rec1[0] 
//             && rec2[1] < rec1[3] 
//             && rec2[3] > rec1[1];
//}
//int Max(int a, int b)
//{
//    if(a>=b)
//    {
//        return a;
//    }
//    return b;
//}
//int maxDistToClosest(int* seats, int seatsSize) {//座位的最大间距
//    int max = 0,nowmax = 0;
//    for(int i = 0; i < seatsSize; i++)
//    {
//        if(!seats[i])
//        {
//            nowmax++;
//        }
//        else
//        {
//            max = nowmax > max ? nowmax : max;
//            nowmax = 0;
//        }
//    }
//    int left = 0,right = 0;
//    if(seats[0] == 0)
//    {
//        for(int i = 0; i < seatsSize; i++)
//        {
//            if(seats[i] == 1)
//            {
//                break;
//            }
//            else
//            {
//                left++;
//            }
//        }
//    }
//    if(seats[seatsSize-1] == 0)
//    {
//        for(int i = seatsSize - 1; i >= 0; i--)
//        {
//            if(seats[i] == 1)
//            {
//                break;
//            }
//            else
//            {
//                right++;
//            }
//        }
//    }
//    int ret = Max(left,right);
//    if(max%2 == 0)
//    {
//        max = max/2;
//    }
//    else
//    {
//        max = max/2+1;
//    }
//    int ret2 = Max(ret,max);
//    return ret2;
//}