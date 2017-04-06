#ifndef ALLSORT_H_INCLUDED
#define ALLSORT_H_INCLUDED
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename Datatype>
class AllSort
{
public:
    AllSort()
    {
        countSortMove = 0;
        countSortCmp = 0;
        countNum = 5;

    }
    ~AllSort() {}
    void printArray(vector<Datatype> &a, bool isPrint);
    void swap(Datatype *a, Datatype *b);
    void initArr(vector<Datatype> &a, int len, int arrtype);//初始化数组
    void randArray(vector<Datatype> &a, unsigned len, int isRand);//打乱顺序
    void BubbleSort(vector<Datatype> &a, int left, int right, bool up = true);//冒泡排序
    void BubbleProSort(vector<Datatype> &a, int left, int right, bool up = true);//改进的冒泡排序
    void InsertSort(vector<Datatype> &a, int left, int right, bool up = true);//插入排序
    void SelectSort(vector<Datatype> &a, int left, int right, bool up = true);//选择排序
    void twoInsertSort(vector<Datatype> &a, int left, int right, bool up = true);//二分插入排序
    void ShellSort(vector<Datatype> &a, int left, int right, bool up = true);//希尔排序
    void QuickSort(vector<Datatype> &a, int left, int right, bool up = true);//快速排序
    void CountSort(vector<Datatype> &a, int arrType, int len, bool up = true);//快速排序
    void MergeSort(vector<Datatype> &a, int left, int right, bool up = true);//归并排序
    void Merge(vector<Datatype> &a, int left, int mid, int right, bool up = true);
    void HeapSort(vector<Datatype> &a, int len, bool up = true);//堆排序
    void BuildMaxHeap(vector<Datatype> &a, int len, bool up = true);
    void KeepMaxHeap(vector<Datatype> &a,int i, int heapsize, bool up = true);





    int getSortCount(bool IsMove)
    {
        if(IsMove)
            return countSortMove;
        else
            return countSortCmp;
    }
    void beforSort()
    {
        countSortMove = 0;
        countSortCmp = 0;
    }
private:

    int countSortMove;
    int countSortCmp;
    int countNum;

};
template <typename Datatype>
void AllSort<Datatype>::printArray(vector<Datatype> &a, bool isPrint)
{
    if(isPrint)
    {
        //  cout << "结果是：" << endl;
        for (unsigned int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

}
template <typename Datatype>
void AllSort<Datatype>::swap(Datatype *a, Datatype *b)
{
    Datatype temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
template <typename Datatype>
void AllSort<Datatype>::initArr(vector<Datatype> &a, int len, int arrtype)
{
    if (arrtype == 0)
        for (int i = 0; i < len; i++)
            a.push_back(i);

    if (arrtype == 1)
        for (int i = 0; i < len; i++)
            a.push_back(i % countNum);
}
template <typename Datatype>
void AllSort<Datatype>::randArray(vector<Datatype> &a, unsigned len, int isRand)
{
    if (len > a.size())
    {
        cerr << "无法打乱指定范围的元素：" ;

    }
    //  srand((unsigned)time(NULL));
    if (isRand == 0)
    {
        unsigned index, i;
        for (i = 0; i < len; i++)
        {

            index = rand() % len;
            //  cout << rand() << endl;
            if (index != i)
                swap(&a[i], &a[index]);
        }

    }

}
template <typename Datatype>
void AllSort<Datatype>::BubbleSort(vector<Datatype> &a, int left, int right, bool up)
{
    beforSort();
    //  bool flag = false;
    for (int i = left; i < right; i++)
    {
        for (int j = left; j < right - left; j++)
        {
            countSortCmp++;
            if (up)
            {
                if (a[j] > a[j+1])
                {
                    swap(&a[j], &a[j+1]);
                    countSortMove += 3;
                }
            }
            else
            {
                if (a[j] < a[j+1])
                {
                    swap(&a[j], &a[j+1]);
                    countSortMove += 3;
                }
            }
        }
    }


}
template <typename Datatype>
void AllSort<Datatype>::BubbleProSort(vector<Datatype> &a, int left, int right, bool up)
{
    beforSort();
    //  bool flag = false;
    while(left < right)
    {
        for (int i = left; i < right; i++)
        {

            countSortCmp++;
            if (up)
            {
                if (a[i] > a[i+1])
                {
                    swap(&a[i], &a[i+1]);
                    countSortMove += 3;
                }
            }
            else
            {
                if (a[i] < a[i+1])
                {
                    swap(&a[i], &a[i+1]);
                    countSortMove += 3;
                }
            }


        }
        right--;
        for (int j = right; j > left; j--)
        {
            countSortCmp++;
            if (up)
            {
                if (a[j] < a[j-1])
                {
                    swap(&a[j], &a[j-1]);
                    countSortMove += 3;
                }
            }
            else
            {
                if (a[j] > a[j-1])
                {
                    swap(&a[j], &a[j-1]);
                    countSortMove += 3;
                }
            }
        }
        left++;
    }


}

template <typename Datatype>
void AllSort<Datatype>::InsertSort(vector<Datatype> &a, int left, int right, bool up)
{
    beforSort();
    //  bool flag = false;
    int j = 0;
    for (int i = left; i < right; i++)
    {
        j = i + 1;
        if(up)
            while(a[j] < a[j - 1] && j > left)
            {
                countSortCmp++;
                swap(&a[j], &a[j-1]);
                countSortMove += 3;
                j--;
            }
        else
            while(a[j] > a[j - 1] && j > left)
            {
                countSortCmp++;
                swap(&a[j], &a[j-1]);
                countSortMove += 3;
                j--;
            }
    }
}
template <typename Datatype>
void AllSort<Datatype>::SelectSort(vector<Datatype> &a, int left, int right, bool up)
{
    beforSort();
    //  bool flag = false;
    int j = 0, min = 0;
    for (int i = left; i < right; i++)
    {
        min = i;
        //      j = i + 1;
        if(up)
        {
            for (j = i+1; j <= right; j++)
            {
                if (a[j] < a[min])
                {
                    countSortCmp++;
                    min = j;
                }

            }
            if (a[min] != a[i])
            {
                swap(&a[min], &a[i]);
                countSortMove += 3;
            }

        }
        else
        {
            for (j = i+1; j <= right; j++)
            {
                if (a[j] > a[min])
                {
                    countSortCmp++;
                    min = j;
                }

            }
            if (a[min] != a[i])
            {
                swap(&a[min], &a[i]);
                countSortMove += 3;
            }
        }
    }
}

template <typename Datatype>
void AllSort<Datatype>::twoInsertSort(vector<Datatype> &a, int left, int right, bool up)
{
    beforSort();
    //  bool flag = false;
    int j, l, r, m;
    for (int i = left; i <= right; i++)
    {
        l = 0;
        r = i - 1;
        if(up)
        {
            while(l <= r)//=是因为l,r不等于m，等于的是m+1 or m-1
            {

                m = (l + r) / 2;
                if (a[i] > a[m])
                {
                    countSortCmp++;
                    l = m + 1;
                }
                else
                {
                    countSortCmp++;
                    r = m - 1;
                }

            }
            for (j = i; j > l ; j--)
            {
                swap(&a[j], &a[j-1]);
                countSortMove += 3;
            }
            printArray(a, 1);
        }
        else
        {
            while(l <= r)
            {

                m = (l + r) / 2;
                if (a[i] < a[m])
                {
                    countSortCmp++;
                    l = m + 1;
                }
                else
                {
                    countSortCmp++;
                    r = m - 1;
                }

            }
            for (j = i; j > l ; j--)
            {
                swap(&a[j], &a[j-1]);
                countSortMove += 3;

            }
        }
    }
}
template <typename Datatype>
void AllSort<Datatype>::ShellSort(vector<Datatype> &a, int left, int right, bool up)
{
    beforSort();
    //  bool flag = false;
    int gap = right - left + 1;
    int j = 0;
    while (gap > 1)
    {
        gap = gap / 3 + 1;
        for (int i = left + gap; i <= right; i++)
        {
            j = i;
            if (up)
                while (a[j] < a[j - gap] && j - gap >= left)
                {
                    countSortCmp++;
                    swap(&a[j], &a[j - gap]);
                    countSortMove += 3;
                    j = j - gap;
                }
            else
                while (a[j] > a[j - gap] && j - gap >= left)
                {
                    countSortCmp++;
                    swap(&a[j], &a[j - gap]);
                    countSortMove += 3;
                    j = j - gap;
                }

        }
    }
}

template <typename Datatype>
void AllSort<Datatype>::QuickSort(vector<Datatype> &a, int left, int right, bool up)
{
    if (left < right)
    {
        int l = left, r = right, x = a[l];
        if (up)
        {
            while (l < r)
            {
                while (l < r && a[r] >= x)
                {
                    r--;
                    countSortCmp += 2;
                }
                if (l < r)
                {
                    a[l++] = a[r];
                    countSortMove++;
                }
                while (l < r && a[l] <= x)
                {
                    l++;
                    countSortCmp += 2;
                }
                if (l < r)
                {
                    a[r--] = a[l];
                    countSortMove++;
                }
            }
            a[l] = x;
            QuickSort(a, left, l-1, up);
            QuickSort(a, l+1, right, up);
        }
        else
        {
            while (l < r)
            {
                while (l < r && a[r] <= x)
                {
                    r--;
                    countSortCmp +=2;
                }
                if (l < r)
                {
                    a[l++] = a[r];
                    countSortMove++;
                }
                while (l < r && a[l] >= x)
                {
                    l++;
                    countSortCmp += 2;
                }
                if (l < r)
                {
                    a[r--] = a[l];
                    countSortMove++;
                }
            }
            a[l] = x;
            QuickSort(a, left, l-1, up);
            QuickSort(a, l+1, right, up);
        }
    }
}
template <typename Datatype>
void AllSort<Datatype>::CountSort(vector<Datatype> &a, int arrType, int len, bool up)
{
    beforSort();
    int length = len,k = 0;
    if (arrType == 0)
        k = length;
    else
        k = length;
    Datatype *count = new Datatype[length];
    for (int i = 0; i < k; i++)
        count[i] = 0;
    for (int i = 0; i < length; i++)
        ++count[a[i]];
    for (int i = 1; i < length; i++)
        count[i] += count[i-1];
    Datatype *Sort = new Datatype[length];
    for (int i = 0; i < length; i++)
    {
        --count[a[i]];
        Sort[count[a[i]]] = a[i];
    }
    if (up)
    {
        for (int i = 0; i < length; i++)
            a[i] = Sort[i];
    }
    else
        for (int i = 0; i < length; i++)
            a[i] = Sort[length -1 -i];
    delete[] count;
    delete[] Sort;
    count = NULL;
    Sort =NULL;

}

template <typename Datatype>
void AllSort<Datatype>::MergeSort(vector<Datatype> &a, int left, int right, bool up)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        MergeSort(a, left, mid, up);
        MergeSort(a, mid + 1, right, up);
        Merge(a, left, mid, right, up);
    }
}
template <typename Datatype>
void AllSort<Datatype>::Merge(vector<Datatype> &a, int left, int mid, int right, bool up)
{
    int leftlen = mid - left + 1;
    int rightlen = right - mid;

    int *L = new int[leftlen+1];
    int *R = new int[rightlen+1];

    int i = 0, j = 0;
    for (; i < leftlen; i++)
    {
        L[i] = a[left+i];
    }
    for (; j < rightlen; j++)
        R[j] = a[mid+1+j];
    i = 0;
    j = 0;
    if(up)
    {
        L[leftlen] = INT_MAX;
        R[rightlen] = INT_MAX;
        for (int k = left; k <= right; k++)
        {
            if (L[i] <= R[j])
            {
                a[k] = L[i++];
                countSortMove++;
                countSortCmp++;
            }
            else
            {
                a[k] = R[j++];
                countSortMove++;
                countSortCmp++;
            }
        }
    }
    else
    {
        L[leftlen] = INT_MIN;
        R[rightlen] = INT_MIN;
        for (int k = left; k <= right; k++)
        {
            if (L[i] >= R[j])
            {
                a[k] = L[i++];
                countSortMove++;
                countSortCmp++;
            }
            else
            {
                a[k] = R[j++];
                countSortMove++;
                countSortCmp++;
            }

        }
    }
    delete[] L;
    L = NULL;
    delete[] R;
    R = NULL;

}
template <typename Datatype>
void AllSort<Datatype>::HeapSort(vector<Datatype> &a, int len, bool up)
{
    BuildMaxHeap(a, up);
   // int heapsize = len;
    for (int i=len; i>0; i--)
    {
        swap(&a[0],&a[i]);
        countSortMove=countSortMove+3;
        len--;
        KeepMaxHeap(a, 0, len, up);//保持堆的性质
    }
}
template <typename Datatype>
void AllSort<Datatype>::BuildMaxHeap(vector<Datatype> &a, int len, bool up)
{
   // int heapsize = len;
    for (int i = len / 2; i >=0; i--)
    {
        KeepMaxHeap(a, i, len, up);
    }
}
template <typename Datatype>
void AllSort<Datatype>::KeepMaxHeap(vector<Datatype> &a,int i, int heapsize, bool up)
{
    int l = 2*i+1;
    int r = 2*i +2;
    int largest = 0;
    int min = 0;
    if (up){
        if (l <=heapsize && a[l] > a[i]){
            largest = l;
        }
        else
            largest = i;
        if (r <= heapsize &&  a[r] > a[largest])
            largest = r;
    }
    else{
        if (l <= heapsize && a[l] < a[i])
            min = l;
        else
            min =i;
        if (r <= heapsize && a[r] < a[min])
            min = r;
    }
    countSortCmp=countSortCmp+2;
    if (up)
    {
        if (largest!=i)
        {
            swap(&a[i],&a[largest]);
            countSortMove=countSortMove+3;
            KeepMaxHeap(a,largest,heapsize,up);
        }
    }else
    {
        if (min!=i)
        {
            swap(&a[i],&a[min]);
            countSortMove=countSortMove+3;
            KeepMaxHeap(a,min,heapsize,up);
        }
    }

}
#endif // ALLSORT_H_INCLUDED

