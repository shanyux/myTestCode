// N����Χ��һȦ���ӵ�һ����ʼ��������M�������֣����ʣ��һ���������˶������֡�
#include <iostream>

using namespace std;

struct linknode {
  int num = 0;
  linknode *next = nullptr;
};
int circle(int persion, int number) {
  linknode *head, *tail;
  head = tail = new linknode;
  //    head->num = i;
  for (int i = 1; i < persion; i++) {
    tail->num = i;
    tail->next = new linknode;
    tail = tail->next;
  }
  tail->num = persion;
  tail->next = head;
  while (head != tail) {
    for (int i = 1; i < number; i++) {
      tail = head;
      head = head->next;
    }
    tail->next = head->next;
    cout << "���" << head->num << "����" << endl;
    delete head;
    head = tail->next;
    //     head = tail;
  }
  return head->num;
  delete head;
}

int main() {
  int person = 0, number = 0;
  cout << "�����������ͳ������֣�" << endl;
  cin >> person >> number;
  int winner = circle(person, number);
  cout << "���ջ�ʤ���Ǳ�ţ�" << winner << endl;
  return 0;
}
