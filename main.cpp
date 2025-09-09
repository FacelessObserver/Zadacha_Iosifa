// �������� 1; ������ ���-412; �������� ������
#include <iostream>
#include <vector>
#include <locale>
using namespace std;

void zad_Iosifa(int n, int m)
{
    /**
     * n - ����� ����������, �� ����
     * m - ������� ������� ���� (�� ������������)
     * ������� ���������� ����� ���������� ����������� ��������� ��� �������� ���������� n � m
     */
    vector<int> winners;
    for (int step = 2; step <= m; step++)
        {
        cout << "���� ����� " << step - 1 << "\n���: " << step << endl;

        vector<int> nums; // ������ ����������
        for (int i = 1; i <= n; i++)
        {
            nums.push_back(i);
        }

        int pointer = 0; // ���������

        for (int i = 0; i < n-1; i++) // ���� �� ��������� ���� ��������
        {
            pointer = (pointer + step - 1) % nums.size(); // ������� ��������� �� ���

            int gotcha = nums[pointer]; // ��������� �����
            cout << "����� ���������� ���������: " << gotcha << endl;

            nums.erase(nums.begin() + pointer); // ���������� ���������

            cout << "���������� ������: ";
            for (int j = 0; j < nums.size(); j++)
            {
                cout << nums[j] << " ";
            }
            cout << "\n";
        }
        cout << "������� �����: " << nums[0] << "\n" << endl;
        winners.push_back(nums[0]);
    }
    cout << "���������� 19 �������:" << endl;
    for (int i = 0; i < winners.size(); i++)
    {
        cout << winners[i] << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    zad_Iosifa(20, 20);
    return 0;
}
