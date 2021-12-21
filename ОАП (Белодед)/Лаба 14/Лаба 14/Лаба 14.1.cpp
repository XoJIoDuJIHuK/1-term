#include <iostream>
#include <cstdlib>

int main()
{
    srand(time(0));
    int len;
    setlocale(LC_ALL, "Rus");
    std::cout << "������� ����� ������ � ��������: ";
    std::cin >> len;

    int numofotr = 0, sumofabs = 0, min_el = 0;
    int *buffer = (int*)malloc((unsigned)len);                    // ������������ ��������� ������ ��� ���������� ������
    if (buffer == NULL) exit(1);                       // ���� ��������� ������ �� �����������, ��������� ���������

    for (int i = 0; i < len; i++)
        *(buffer + i) = rand() % 9 - 0;
    min_el = *buffer;
    std::cout << "��������� ������: ";
    for (int i = 0; i < len; i++)
    {
        printf("%d", *(buffer + i));
    }
    std::cout << std::endl;


    for (int i = 0; i < len; i++)
    {
        if (*(buffer + i) < 0)
            numofotr += 1;
        if (*(buffer + i) < min_el)
            min_el = *(buffer + i);
    }
    for (int i = 0; i < len; i++)
    {
        if ((buffer + i) > &min_el)
        {
            sumofabs += abs(*(buffer + i));
        }
    }
    std::cout << sumofabs << " " << numofotr << std::endl;

    free(buffer);
}