#include <iostream>
#include <vector>
#include "allsort.h"
#include <windows.h>//����ʱ��
#include <functional>
#include <algorithm>

using namespace std;
LARGE_INTEGER freq;
LARGE_INTEGER startTime, endTime;
double alltime = 0;
void summary(int len, bool up, int isRand, bool arrType)
{
    cout << "***********************����********************************" << endl;
    cout << "��ǰ����Ԫ�ظ�����"  << len << endl;
    cout << "ԭʼ�����Ԫ���ص㣺" <<endl;
    if (arrType == 0)
    {
        cout << "1.���ظ�ֵ" << endl;
        cout << "2.ֵ�ֲ���0-" << len-1 << endl;
    }
    else if (arrType == 1)
    {
        cout << "1.���ظ�ֵ" << endl;
        cout << "2.ֵ�ֲ���0-" << len-1 << endl;
    }
    else
        cout << "arrType��������" << endl;
    if (isRand == 0)

        cout << "3.����ֲ�" << endl;
    else if (isRand == 1)
        cout << "3.����ֲ�" <<endl;
    else if (isRand == 2)
        cout << "3.����ֲ�"  << endl;
    else if (isRand == 3)
        cout << "3.С������������������ƣ�" << endl;
    else  cout << "isRand��������" << endl;


    if (up == 1)
    {
        cout << "���򼴽�ִ�У�����" << endl;
    }
    else if (up == 0)
        cout << "���򼴽�ִ�У�����" << endl;

    else
        cout << "upflag��������" << endl;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&startTime);
    Sleep(500);
    QueryPerformanceCounter(&endTime);
    alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
    cout << "����Ƶ��Ϊ" << freq.QuadPart << endl;
    cout << "����ִ��leep(500)��ʱ����:" << alltime << "����" << endl;

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
//        cout << "�����������ʼ�����ͺ�Ԫ�ظ�������0ΪԪ����ȫ���ظ���1Ϊ�����ظ�ֵ��" << endl;
//        cin >> arrtype >> len;
        sort.initArr(arr, len, arrtype);
//        cout << "��������������:0Ϊ����1Ϊ����" << endl;
//        cin >> upflag;
//        cout << "�����������������ͣ�0Ϊ�������1Ϊ����2Ϊ����,3ΪС���" << endl;
//        cin >> isRand;
//        cout << "�Ƿ��ӡ��������0Ϊ��1Ϊ�ǣ�" << endl;
//        cin >> isPrint;
        summary(len, upflag, isRand, arrtype);
//        cout << "*******************sort�⺯������*****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "δ����֮ǰ���飺" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
////        sort.BubbleSort(arr, 0, arr.size() - 1, upflag);
//        if(upflag)
//            std::sort(arr.begin(), arr.end(), std::less<int>());
//        else
//            std::sort(arr.begin(), arr.end(), std::greater<int>());
//        QueryPerformanceCounter(&endTime);
//        cout << "����֮�����飺" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "sort��������ʱ��:" << alltime << "����" << endl;
//        //      cout << "�ƶ�������"  <<sort.getSortCount(isMove) << "�Ƚϴ�����" << sort.getSortCount(!isMove) <<endl;
//
//        cout << "*********************ð������********************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "δ����֮ǰ���飺" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.BubbleSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "����֮�����飺" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "ð����������ʱ��:" << alltime << "����" << endl;
//        cout << "�ƶ�������"  <<sort.getSortCount(isMove) << "�Ƚϴ�����" << sort.getSortCount(!isMove) <<endl;
//
//
//        cout << "*********************�Ľ�ð������****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "δ����֮ǰ���飺" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.BubbleProSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "����֮�����飺" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "�Ľ�ð����������ʱ��:" << alltime << "����" << endl;
//        cout << "�ƶ�������"  <<sort.getSortCount(isMove) << "�Ƚϴ�����" << sort.getSortCount(!isMove) <<endl;

        //        cout << "***********************��������****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "δ����֮ǰ���飺" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.InsertSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "����֮�����飺" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "������������ʱ��:" << alltime << "����" << endl;
//        cout << "�ƶ�������"  <<sort.getSortCount(isMove) << "�Ƚϴ�����" << sort.getSortCount(!isMove) <<endl;


//        cout << "***********************ѡ������****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "δ����֮ǰ���飺" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.SelectSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "����֮�����飺" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "ѡ����������ʱ��:" << alltime << "����" << endl;
//        cout << "�ƶ�������"  <<sort.getSortCount(isMove) << "�Ƚϴ�����" << sort.getSortCount(!isMove) <<endl;


//        cout << "***********************���ֲ�������****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "δ����֮ǰ���飺" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.twoInsertSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "����֮�����飺" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "���ֲ�����������ʱ��:" << alltime << "����" << endl;
//        cout << "�ƶ�������"  <<sort.getSortCount(isMove) << "�Ƚϴ�����" << sort.getSortCount(!isMove) <<endl;

//        cout << "*************************ϣ������****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "δ����֮ǰ���飺" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.ShellSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "����֮�����飺" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "ϣ����������ʱ��:" << alltime << "����" << endl;
//        cout << "�ƶ�������"  <<sort.getSortCount(isMove) << "�Ƚϴ�����" << sort.getSortCount(!isMove) <<endl;


//        cout << "*************************�鲢����****************************" <<endl;
//        sort.randArray(arr, len, isRand);
//        cout << "δ����֮ǰ���飺" << endl;
//        sort.printArray(arr, isPrint);
//        QueryPerformanceFrequency(&freq);
//        QueryPerformanceCounter(&startTime);
//        sort.beforSort();
//        sort.MergeSort(arr, 0, arr.size() - 1, upflag);
//        QueryPerformanceCounter(&endTime);
//        cout << "����֮�����飺" << endl;
//        sort.printArray(arr, isPrint);
//        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
//        cout << "�鲢��������ʱ��:" << alltime << "����" << endl;
//        cout << "�ƶ�������"  <<sort.getSortCount(isMove) << "�Ƚϴ�����" << sort.getSortCount(!isMove) <<endl;

        cout << "*************************������****************************" <<endl;
        sort.randArray(arr, len, isRand);
        cout << "δ����֮ǰ���飺" << endl;
        sort.printArray(arr, isPrint);
        QueryPerformanceFrequency(&freq);
        QueryPerformanceCounter(&startTime);
        sort.beforSort();
        sort.HeapSort(arr, arr.size()-1, upflag);
        QueryPerformanceCounter(&endTime);
        cout << "����֮�����飺" << endl;
        sort.printArray(arr, isPrint);
        alltime = 1e3* (static_cast<double>(endTime.QuadPart - startTime.QuadPart) / static_cast<double>(freq.QuadPart));
        cout << "����������ʱ��:" << alltime << "����" << endl;
        cout << "�ƶ�������"  <<sort.getSortCount(isMove) << "�Ƚϴ�����" << sort.getSortCount(!isMove) <<endl;


        cout << "�Ƿ��������(y),��(n)";
        cin >> ans;


    }
    while(ans == 'y');

    //    cout << "Hello world!" << endl;
    return 0;
}
