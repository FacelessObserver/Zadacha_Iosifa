#include <iostream>
#include <vector>
#include <locale>
using namespace std;

void zad_Iosifa(int n, int m)
{
    /**
     * n - Число участников, от двух
     * m - Верхняя граница шага (не включительно)
     * Функция возвращает номер последнего оставшегося участника при заданных параметрах n и m
     */
    vector<int> winners;
    for (int step = 2; step <= m; step++)
        {
        cout << "Игра номер " << step - 1 << "\nШаг: " << step << endl;

        vector<int> nums; // Номера участников
        for (int i = 1; i <= n; i++)
        {
            nums.push_back(i);
        }

        int pointer = 0; // Указатель

        for (int i = 0; i < n-1; i++) // Пока не останется один участник
        {
            pointer = (pointer + step - 1) % nums.size(); // Двигаем указатель на шаг

            int gotcha = nums[pointer]; // Невезучий номер
            cout << "Номер удаляемого участника: " << gotcha << endl;

            nums.erase(nums.begin() + pointer); // Исключение выбывшего

            cout << "Оставшиеся номера: ";
            for (int j = 0; j < nums.size(); j++)
            {
                cout << nums[j] << " ";
            }
            cout << "\n";
        }
        cout << "Выиграл номер: " << nums[0] << "\n" << endl;
        winners.push_back(nums[0]);
    }
    cout << "Победители раундов:" << endl;
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
