void reverse(char* start,char* end)
{
    while(start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;end--;
    }
}
char* toHex(int num) {
    char arr[16] = "0123456789abcdef";
    static char arr1[9] = "";
    int i = 0,len = 0;
    unsigned int un=num;       
    if(num<0) un=UINT_MAX+num+1;
    while(un > 0)
    {
        int tmp = un%16;
        arr1[i++] = arr[tmp];
        un = un/16;
    }
    arr1[i] = '\0';
    len = strlen(arr1);
    reverse(arr1,arr1+len-1);
     return num==0?"0":arr1;
}