#define _CRT_SECURE_NO_WARNINGS 1
/**
 * ���ù鲢�����˼·����������������Եĸ���
 * @param  {Array} arr   �����������
 * @param  {Number} left  ��߽�
 * @param  {Number} right �ұ߽�
 * @return {Number}       ��������Եĸ���
 */
function countReverseOrder(arr,left,right){
    if (left >= right) {
        return 0;
    }
    var mid = Math.floor((left + right)/2);
    var countL = countReverseOrder(arr,left,mid,count);
    var countR = countReverseOrder(arr,mid+1,right,count);

    //�鲢
    var leftPart = arr.slice(left,mid+1);
    var rightPart = arr.slice(mid+1,right+1);
    var l = 0;
    var r = 0;
    var count = countL + countR;
    for (var i = left; i <= right; i++) {
        if (l >= leftPart.length) {
            arr[i] = rightPart[r];
            r ++;
        } else if (r >= rightPart.length) {
            arr[i] = leftPart[l];
        } else if (leftPart[l] > rightPart[r]) {
            arr[i] = rightPart[r];
            r ++;
            count += leftPart.length - l;
        } else {
            arr[i] = leftPart[l];
            l ++;
        }
    }
    return count;
}

var arr = [3,2,6,8,4,1,5,7];
countReverseOrder(arr,0,arr.length-1,0);//11
