#include <iostream>
#include <vector>
#include "allsort.h"
#include <windows.h>//计算时间
#include <functional>
#include <algorithm>

using namespace std;
LARGE_INTEGER freq;
LARGE_INTEGER startTime, endTime;
double alltime = 0;
void summary(int len, bool up, int isRand, bool arrType)
{
    cout << "***********************综上********************************" << endl;
    cout << "当前数组元素个数："  << len << endl;
    cout << "原始数组的元素特点：" <<endl;
    if (arrType == 0)
    {
        cout << "1.无重复值" << endl;
        cout << "2.值分布：0-" << len-1 << endl;
    }
    else if (arrType == 1)
    {
        cout << "1.无重复值" << endl;
        cout << "2.值分布：0-" << len-1 << endl;
    }
    else
        cout << "arrType参数有误" << endl;
    if (isRand == 0)

        cout << "3.随机分布" << endl;
    else if (isRand == 1)
        cout << "3.升序分布" <<endl;
    else if (isRand == 2)
        cout << "3.降序分布"  << endl;
    else if (isRand == 3)
        cout << "3.小随机（总体上有序趋势）" << endl;
    else  cout << "isRand参数有误" << endl;


    if (up == 1)
    {
        cout << "排序即将执行：升序" << endl;
    }
    else if (up == 0)
        cout << "排序即将执行：降序" << endl;

    else
        cout << "upflag参数有误" << endl;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&startTime);
    Sleep(500);
    QueryPerformanceCounter(&endTime);
    alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
    cout << "电脑频率为" << freq.QuadPart << endl;
    cout << "电脑执行leep(500)的时间是:" << alltime << "毫秒" << endl;

}
int main()
{
    AllSort<int> sort;
    vector<int> arr;
    int len = 10;
    char ans = 'y';
    bool arrtype = 0;
    bool upflag = true;
    int isRand = 0;
    bool isPrint = true;
    bool isMove = true;
    //
    do
    {
//        cout << "请输入数组初始化类型和元素个数：（0为元素完全不重复，1为大量重复值）" << endl;
//        cin >> arrtype >> len;
        sort.initArr(arr, len, arrtype);
//        cout << "请输入排序类型:0为降序，1为升序" << endl;
//        cin >> upflag;
//        cout << "请输入数组的随机类型：0为纯随机，1为升序，2为降序,3为小随机" << endl;
//        cin >> isRand;
//        cout << "是否打印排序结果：0为否，1为是：" << endl;
//        cin >> isPrint;
        summary(len, upflag, isRand, arrtype);
//        cout << "*******************sort库函数排序法*****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "未排序之前数组：" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
////        sort.BubbleSort(arr, 0, arr.size() - 1, upflag);
//        if(upflag)
//            std::sort(arr.begin(), arr.end(), std::less<int>());
//        else
//            std::sort(arr.begin(), arr.end(), std::greater<int>());
//        QueryPerformanceCounter(&endTime);
//        cout << "排序之后数组：" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "sort函数消耗时间:" << alltime << "毫秒" << endl;
//        //      cout << "移动次数："  <<sort.getSortCount(isMove) << "比较次数：" << sort.getSortCount(!isMove) <<endl;
//
//        cout << "*********************冒泡排序法********************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "未排序之前数组：" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.BubbleSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "排序之后数组：" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "冒泡排序消耗时间:" << alltime << "毫秒" << endl;
//        cout << "移动次数："  <<sort.getSortCount(isMove) << "比较次数：" << sort.getSortCount(!isMove) <<endl;
//
//
//        cout << "*********************改进冒泡排序法****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "未排序之前数组：" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.BubbleProSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "排序之后数组：" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "改进冒泡排序消耗时间:" << alltime << "毫秒" << endl;
//        cout << "移动次数："  <<sort.getSortCount(isMove) << "比较次数：" << sort.getSortCount(!isMove) <<endl;

        //        cout << "***********************插入排序法****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "未排序之前数组：" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.InsertSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "排序之后数组：" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "插入排序消耗时间:" << alltime << "毫秒" << endl;
//        cout << "移动次数："  <<sort.getSortCount(isMove) << "比较次数：" << sort.getSortCount(!isMove) <<endl;


//        cout << "***********************选择排序法****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "未排序之前数组：" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.SelectSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "排序之后数组：" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "选择排序消耗时间:" << alltime << "毫秒" << endl;
//        cout << "移动次数："  <<sort.getSortCount(isMove) << "比较次数：" << sort.getSortCount(!isMove) <<endl;


//        cout << "***********************二分插入排序法****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "未排序之前数组：" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.twoInsertSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "排序之后数组：" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "二分插入排序消耗时间:" << alltime << "毫秒" << endl;
//        cout << "移动次数："  <<sort.getSortCount(isMove) << "比较次数：" << sort.getSortCount(!isMove) <<endl;

//        cout << "*************************希尔排序法****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "未排序之前数组：" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.ShellSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "排序之后数组：" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "希尔排序消耗时间:" << alltime << "毫秒" << endl;
//        cout << "移动次数："  <<sort.getSortCount(isMove) << "比较次数：" << sort.getSortCount(!isMove) <<endl;


//        cout << "*************************归并排序法****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "未排序之前数组：" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.beforSort();
//        sort.MergeSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "排序之后数组：" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "归并排序消耗时间:" << alltime << "毫秒" << endl;
//        cout << "移动次数："  <<sort.getSortCount(isMove) << "比较次数：" << sort.getSortCount(!isMove) <<endl;

        cout << "*************************堆排序****************************" <<endl;
        sort.randArray(arr, len, isRand);
        cout << "未排序之前数组：" << endl;
        sort.printArray(arr, isPrint);
        QueryPerformanceFrequency(&freq);
        QueryPerformanceCounter(&startTime);
        sort.beforSort();
        sort.HeapSort(arr, arr.size()-1, upflag);
        QueryPerformanceCounter(&endTime);
        cout << "排序之后数组：" << endl;
        sort.printArray(arr, isPrint);
        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
        cout << "堆排序消耗时间:" << alltime << "毫秒" << endl;
        cout << "移动次数："  <<sort.getSortCount(isMove) << "比较次数：" << sort.getSortCount(!isMove) <<endl;


        cout << "是否继续？是(y),否(n)";
        cin >> ans;


    }
    while(ans == 'y');

    //    cout << "Hello world!" << endl;
    return 0;
}
