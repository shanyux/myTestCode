//N个人围成一圈，从第一个开始报数，第M个将出局，最后剩下一个，其余人都将出局。
#include <iostream>

using namespace std;

struct linknode
{
    int num = 0;
    linknode *next = nullptr;
};
int circle(int persion, int number)
{
    linknode *head, *tail;
    head = tail = new linknode;
//    head->num = i;
    for(int i = 1; i < persion; i++)
    {
        tail->num = i;
        tail->next = new linknode;
        tail = tail->next;
    }
    tail->num = persion;
    tail->next = head;
    while (head != tail)
    {
        for (int i= 1; i < number; i++){
            tail = head;
            head = head->next;
        }
        tail->next = head->next;
        cout << "编号" <<head->num << "出局" <<endl;
        delete head;
        head = tail->next;
   //     head = tail;
    }
    return head->num;
    delete head;

}

int main()
{
    int person = 0, number = 0;
    cout << "请输入人数和出列数字：" << endl;
    cin >> person >> number;
    int winner = circle(person, number);
    cout << "最终获胜的是编号：" << winner << endl;
    return 0;
}
